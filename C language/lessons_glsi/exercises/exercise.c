#include <stdio.h>

#define LENGTH 6
#define WIDTH 4

int calculatePerimeter(int length, int width) {
    return (length + width) * 2;
}

int calculateArea(int length, int width) {
    return length * width;
}

int main() {
    int perimeter, area;
    perimeter = calculatePerimeter(LENGTH, WIDTH);
    area = calculateArea(LENGTH, WIDTH);
    printf("The perimeter is: %d, and the area is: %d", perimeter, area);
    return 0;
}
