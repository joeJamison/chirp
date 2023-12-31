#include "stdcntrl.h"


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    printf("*****TEST UNITS*****\n\n");


    const int tpx = 5;
    const int tpy = 5;

    int array[10][10];
    int x, y;

    for(x = 1; x < 10; x++) {
    for(y = 1; y < 10; y++) {
        array[x][y] = x * y;
    }}

    printf("array[%d][%d] = %d\n", tpx, tpy, array[tpx][tpy]);


    int *heap = (int*) calloc(100, sizeof(int));

    for(x = 1; x < 10; x++) {
    for(y = 1; y < 10; y++) {
        *(heap + (sizeof(int) * (x*y))) = x * y;
    }}

    printf("heap [%d][%d] = %d\n", tpx, tpy, *(heap + (sizeof(int) * (tpx*tpy))));

    free(heap);

    printf("\n");
    return 0;
}

/*
var[x][y]
*(var + (sizeof(int) * (x * y)))
*/
