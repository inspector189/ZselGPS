using System;
using System.Collections.Generic;
using UnityEngine;

namespace SVS.AI
{
    public static class Astar
    {
        private static List<Vector3> GetPath(Vector3 person, Vector3 destination, List<RectTransform> KorytarzePietro)
        {
            Vector3 start = person;
            Vector3 exit = destination;

            List<Vector3> path = new List<Vector3>();

            List<Vector3> openedList = new List<Vector3>();
            HashSet<Vector3> closedList = new HashSet<Vector3>();

            // Obliczanie kosztu dla punktu startowego
            float estimatedCost = ManhattanDistance(start, exit);

            openedList.Add(start);

            Vector3 currentVertex = Vector3.zero;
            while (openedList.Count > 0)
            {
                // Sortowanie listy otwartych wierzchołków
                openedList.Sort((a, b) => Vector3.Distance(a, exit).CompareTo(Vector3.Distance(b, exit)));
                currentVertex = openedList[0];

                if (currentVertex.Equals(exit))
                {
                    while (currentVertex != start)
                    {
                        path.Add(currentVertex);
                        // Znajdowanie poprzedniego wierzchołka
                        // Przypisanie do currentVertex
                    }
                    path.Reverse();
                    break;
                }

                var arrayOfNeighbours = FindNeighboursFor(currentVertex, KorytarzePietro);
                foreach (var neighbour in arrayOfNeighbours)
                {
                    if (neighbour == Vector3.zero || closedList.Contains(neighbour))
                    {
                        continue;
                    }
                    if (IsCellValid(neighbour, KorytarzePietro))
                    {
                        var totalCost = Vector3.Distance(start, currentVertex) + 1;
                        var neighbourEstimatedCost = ManhattanDistance(neighbour, exit);
                        // Ustawianie kosztu dla sąsiada
                        // Dodawanie do listy otwartej, jeśli nie ma na niej
                    }
                }
                closedList.Add(currentVertex);
                openedList.Remove(currentVertex);
            }

            return path;
        }

        public static List<Vector3> FindPath(Vector3 start, Vector3 exit, List<Vector3> corridors)
        {
            // Logika wywołująca prywatną metodę GetPath
            return GetPath(start, exit, new List<RectTransform>());
			
        }

        private static Vector3[] FindNeighboursFor(Vector3 currentVertex, List<RectTransform> KorytarzePietro)
        {
            Vector3[] arrayOfNeighbours = new Vector3[4];
            // Logika znajdowania sąsiadów
            return arrayOfNeighbours;
        }

        private static float ManhattanDistance(Vector3 start, Vector3 exit)
        {
            return Vector3.Distance(start, exit);
        }

        private static bool IsCellValid(Vector3 position, List<RectTransform> KorytarzePietro)
        {
            // Logika sprawdzania dostępności korytarza
            return true;
        }
    }
}
