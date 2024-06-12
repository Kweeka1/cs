#include "stdio.h"

typedef struct Point {
    char c;
    int x, y;
} Point;

int main() {
    Point arr[10];
    for (int i = 0; i < 10; ++i) {
        printf("Enter Point name: ");
        scanf("%s", &arr[i].c); // use %s or getchar
        printf("Enter Point x coordinate: ");
        scanf("%d", &arr[i].x);
        printf("Enter Point y coordinate: ");
        scanf("%d", &arr[i].y);
    }

    for (int i = 0; i < 10; ++i) {
        if (arr[i].x == 5 || arr[i].y == 9) {
            printf("Point with x = %d, y = %d is: %c\n", arr[i].x, arr[i].y, arr[i].c);
        }
    }
}
