#include "stdio.h"

void selection_sort(int len, int arr[100]) {
    for (int i = 0; i < len; ++i) {
        int min = i;

        for (int j = i + 1; j < len; ++j) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }

        if (min != i) {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}

//procedure selection_sort(IN n: integer; INOUT arr: TAB)
//VAR
//    temp, min, i, j: integer
//Begin
//    for i from 1 to n do
//        min <- i
//
//        for j from i + 1 to n do
//            if (arr[j] < arr[min]) then
//                min <- j
//            end if
//        end do
//
//        if (min <> i) then
//            temp <- arr[i]
//            arr[i] <- arr[min]
//            arr[min] = temp
//        end if
//    end do
//end selection_sort

int main() {
    int arr[6] = {5, 3, 9, 2, 1, 0};
    selection_sort(6, arr);
    for (int i = 0; i < 6; ++i) {
        printf("%d\n", arr[i]);
    }
    printf("\n");
    return 0;
}