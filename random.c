#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "print_random.c"

int randchar(){

    srand((unsigned)time(NULL));

    int index = rand() % 26; 

    return 'A' + index;

}
