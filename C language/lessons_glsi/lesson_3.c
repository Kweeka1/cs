// y = x++ (2 actions "x": assign (y = x) then increment "++": (x += 1)
// y = ++x (2 actions "++": increment x (x += 1) then assign "x": (y = x)

#include "stdio.h"

int main() {
    int a, b, c;
    a = 2;
    b = 5;
    c = 7;
    // \t == tab
    // !0 => (0 = false) then we flip it (!false) => true
    // !(1+) => (1+ = true) then we flip it (!true) => false
    printf("%d \t %d \t %d ", a++ < 2, --b != !0, c++ == 7);
    // last statement:
    // c++ == 7 can be viewed as:
    // c == 7
    // c += 1
    printf("%d \t %d \t %d", a, b, c);
    return 0;
}
