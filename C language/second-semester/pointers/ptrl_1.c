#include "stdio.h"
#include "stdlib.h"

int main() {
    // <base type> * <pointer name>;
    // <base type> * <pointer name> = <value>;
    int t = 99;
    int *p = NULL;
    // p and t must have the same type
    p = &t;
    // assign a value to the memory address referenced by p
    *p = *p - 1;
    // point to an empty space in dynamic memory
    int *k = malloc(20 * sizeof(int));
    *(k++) = 4;
    *k = 5;

    int v = 10;
    int *pv = &v;
    int w;
    w = *pv; // contains a copy of the value of the variable v pointed by pv
    printf("%d\n", w); // 10
    printf("%d\n", pv++); // address of pv
    printf("%d\n", pv); // address of pv
    return 0;
}
