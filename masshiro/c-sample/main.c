#include <stdio.h>
#include <string.h>
#include <limits.h>

int distance(int x1, int y1, int x2, int y2) {
    int x = x1 - x2;
    int y = y1 - y2;
    return abs(x) + abs(y);
}

int search(int current, int visited[], int x[], int y[], int n) {
    visited[current] = 1;

    int i;
    int shortest_distance = INT_MAX;
    for (i = 0; i < n; i++) {
        if (!visited[i]) {
            int new_visited[6];
            memcpy(new_visited, visited, n * sizeof(int));
            int new_distance = search(i, new_visited, x, y, n) + distance(x[current], y[current], x[i], y[i]);
            if (new_distance < shortest_distance) {
                shortest_distance = new_distance;
            }
        }
    }
    if (shortest_distance == INT_MAX) { // visited all
        return distance(x[current], y[current], x[5], x[5]);
    }
    return shortest_distance;
}

int main() {
    while (1) {
        int n;
        scanf("%d", &n);
        if (n == 0) {
            break;
        }

        int x[6], y[6], i;
        for (i = 0; i < n; i++) {
            scanf("%d %d", &x[i], &y[i]);
        }
        x[5] = y[5] = 0; // home

        int visited[6] = {};
        printf("%d\n", search(5, visited, x, y, n));
    }
    return 0;
}
