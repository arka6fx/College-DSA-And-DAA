// 04/03/25
#include <stdio.h>
#define V 4
#define INF 99999

void printSolution(int dist[][V]) {
	int i,j;
    printf("The following matrix shows the all pairs of shortest path: \n");
    for ( i = 0; i < V; i++) {
        for ( j = 0; j < V; j++) {
            if (dist[i][j] == INF)
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
                if (dist[i][k] + dist[k][j] < dist[i][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }

    printSolution(dist);
}


int main() {
    int graph[V][V] = { { 0,8, INF, 1 },
                        { INF, 0, 1, INF },
                        { 4, INF, 0, INF },
                        { INF, 2, 9, 0 } };

    floydWarshall(graph);
    return 0;
}

