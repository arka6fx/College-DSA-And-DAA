// 04/03/25
#include <stdio.h>
#include <limits.h>
#define V 4

void printSolution(int dist[][V]) {
    int i, j;
    printf("The following matrix shows the all pairs of shortest path: \n");
    for (i = 0; i < V; i++) {
        for (j = 0; j < V; j++) {
            if (dist[i][j] == INT_MAX)
                printf("%7s", "INF");
            else
                printf("%7d", dist[i][j]);
        }
        printf("\n");
    }
}

void floydWarshall(int dist[][V]) {
    int i, j, k;

    for (k = 0; k < V; k++) {
        for (i = 0; i < V; i++) {
            for (j = 0; j < V; j++) {
                if (dist[i][k] != INT_MAX && dist[k][j] != INT_MAX && dist[i][k] + dist[k][j] < dist[i][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }

    printSolution(dist);
}

int main() {
    int graph[V][V] = { { 0, 8, INT_MAX, 1 },
                        { INT_MAX, 0, 1, INT_MAX },
                        { 4, INT_MAX, 0, INT_MAX },
                        { INT_MAX, 2, 9, 0 } };

    floydWarshall(graph);
    return 0;
}