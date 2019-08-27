#include <stdio.h>
int memSize(int, char);

int main(void) {
    /* This program takes as input an int giving a number of codes, then
    computes total memory required by the subsequent codes, each noting size of
    code and data type*/
    int numberOfCodes, i, size;
    int totalMem = 0;
    int valid = 1;
    char type;
    //get number of codes
    scanf("%d", &numberOfCodes);
    // for each code, find memory amount and add to sum
    for (i=0;i<numberOfCodes;i++) {
        // get input
        scanf("%d %c", &size, &type);
                // is the type valid?
        if (type != 'i' && type != 'd' && type != 'c') {
            valid = 0;
        }
        // call memSize, add to totalMem
        totalMem += memSize(size, type);
    }
     // was valid flag tripped?
    if (!valid) {
        printf("Invalid tracking code type");
    } else {
        printf("%d bytes", totalMem);
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
