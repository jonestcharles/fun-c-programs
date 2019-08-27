#include <stdio.h>

void reverseArray(int *);

int main(void) {
    /* program uses a ptr function to reverse an array with pointer arithmetic.
    Takes as input 6 numbers (fixed) and builds an array, then uses a funciton
    taking pointer input to reverse */
    int arr[6];
    int i;
    // get array from input
    scanf("%d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5]);
    // call reverseArray
    reverseArray(arr);
    // print array
    for (i=0;i<6;i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
/* needs some work - loop to be built and should make general for different
array sizes */
void reverseArray(int * ptr) {
    int temp =  * (ptr + 0);
    * (ptr + 0) = * (ptr + 5);
    * (ptr + 5) = temp;
    temp =  * (ptr + 1);
    * (ptr + 1) = * (ptr + 4);
    * (ptr + 4) = temp;
    temp =  * (ptr + 2);
    * (ptr + 2) = * (ptr + 3);
    * (ptr + 3) = temp;
}
