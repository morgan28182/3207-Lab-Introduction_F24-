#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "print_random.c"

int randchar(){

    srand((unsigned)time(NULL));

    int index = rand() % 26; 
    //finds random number between 1-26

    return 'A' + index;
    //returns letter associated with index

}
