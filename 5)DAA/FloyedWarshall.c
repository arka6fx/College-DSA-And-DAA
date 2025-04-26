#include <stdio.h>
#include <limits.h>

// Define infinity as a large enough value
#define INF 99999

// Function to print the solution matrix
void printSolution(int V, int dist[][V]);

// Solves the all-pairs shortest path problem using Floyd-Warshall algorithm
void floydWarshall(int V, int graph[][V])
{
    int dist[V][V], i, j, k;

    // Initialize the solution matrix
    for (i = 0; i < V; i++)
        for (j = 0; j < V; j++)
            dist[i][j] = graph[i][j];

    // Floyd-Warshall algorithm
    for (k = 0; k < V; k++) {
        for (i = 0; i < V; i++) {
            for (j = 0; j < V; j++) {
                if (dist[i][k] + dist[k][j] < dist[i][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }

    // Print the shortest distance matrix
    printSolution(V, dist);
}

/* A utility function to print solution */
void printSolution(int V, int dist[][V])
{
    printf("\nThe shortest distances between every pair of vertices:\n");
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (dist[i][j] == INF)
                printf("%7s", "INF");
            else
                printf("%7d", dist[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int V;
    printf("Enter the number of vertices in the graph: ");
    scanf("%d", &V);

    int graph[V][V];

    printf("\nEnter the adjacency matrix (Enter %d for infinity):\n", INF);
    for (int i = 0; i < V; i++) {
        printf("Row %d: ", i);
        for (int j = 0; j < V; j++) {
            scanf("%d", &graph[i][j]);
            if (graph[i][j] == INF) {
                // Handle negative infinity input if needed
                graph[i][j] = INF;
            }
        }
    }

    // Print the input graph for verification
    printf("\nInput Graph:\n");
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (graph[i][j] == INF)
                printf("%7s", "INF");
            else
                printf("%7d", graph[i][j]);
        }
        printf("\n");
    }

    // Run Floyd-Warshall algorithm
    floydWarshall(V, graph);

    return 0;
}

// output
// Enter the number of vertices in the graph: 4

// Enter the adjacency matrix (Enter 99999 for infinity):
// Row 0: 0 5 99999 10
// Row 1: 99999 0 3 99999
// Row 2: 99999 99999 0 1
// Row 3: 99999 99999 99999 0

// Input Graph:
//       0      5   INF     10
//     INF      0      3   INF
//     INF    INF      0      1
//     INF    INF    INF      0

// The shortest distances between every pair of vertices:
//       0      5      8      9
//     INF      0      3      4
//     INF    INF      0      1
//     INF    INF    INF      0         