using System.Linq;
using System.Reactive;
using System.Threading.Tasks;
using Prism.Navigation;
using ReactiveUI;
using ReactiveUI.Fody.Helpers;
using ReactiveUI.Validation.Abstractions;
using ReactiveUI.Validation.Contexts;
using ReactiveUI.Validation.Extensions;
using Vulcanova.Core.Mvvm;

namespace Vulcanova.Features.Auth.ScanningQrCode;

public class EnterPinCodeViewModel : ViewModelBase, INavigatedAware, IValidatableViewModel
{
    public ReactiveCommand<Unit, Unit> RegisterDevice { get; }

    [Reactive] public string Pin { get; set; }

    private string _instanceUrl;
    private string _token;
        
    private readonly IAuthenticationService _authenticationService;
    private readonly AccountsManager _accountsManager;

    public EnterPinCodeViewModel(
        INavigationService navigationService,
        IAuthenticationService authenticationService,
        AccountsManager accountsManager) : base(navigationService)
    {
        _authenticationService = authenticationService;
        _accountsManager = accountsManager;

        this.ValidationRule(vm => vm.Pin,
            pin => !string.IsNullOrEmpty(pin),
            "PIN code cannot be empty");

        RegisterDevice = ReactiveCommand.CreateFromTask(_ => RegisterDeviceAsync(_token, Pin, _instanceUrl),
            ValidationContext.Valid);
    }

    public void OnNavigatedFrom(INavigationParameters parameters)
    {
    }

    public void OnNavigatedTo(INavigationParameters parameters)
    {
        _instanceUrl = parameters.GetValue<string>("instanceUrl");
        _token = parameters.GetValue<string>("token");
    }

    private async Task<Unit> RegisterDeviceAsync(string token, string pin, string instanceUrl)
    {
        var accounts = await _authenticationService.AuthenticateAsync(token, pin, instanceUrl);

        await _accountsManager.AddAccountsAsync(accounts);
        await _accountsManager.OpenAccountAndMarkAsCurrentAsync(accounts.First().Id);

        return Unit.Default;
    }

    public ValidationContext ValidationContext { get; } = new();
}