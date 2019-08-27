#include <stdio.h>
int memSize(int, char);

int main(void) {
    /* take as input a data type and number of variables. Calculate memory used.
    This is computer agnostic! */
    int numberOfVariables, bytes;
    char type;
    //get type and number of variables
    scanf("%c %d", &type, &numberOfVariables);
    // call memSize to get byte count
    bytes = memSize(numberOfVariables, type);
    // print result in proper format
    if (bytes <= 999) {
        printf("%d B", bytes);
    } else if (bytes <= 999999) {
        printf("%d KB and %d B", bytes/1000, bytes%1000);
    } else {
        printf("%d MB and %d KB and %d B", bytes/1000000, (bytes%1000000)/1000, bytes%1000);
    }
    return 0;
}
// takes an int (size of input) and type (data type); computes memory needed (bytes)
int memSize (int size, char type) {
    int totalMem = 0;
    if (type == 'i'){
        totalMem = size * sizeof(int);
    } else if (type == 'd') {
        totalMem = size * sizeof(double);
    } else if (type == 'c') {
        totalMem = size * sizeof(char);
    }
    return totalMem;
}
