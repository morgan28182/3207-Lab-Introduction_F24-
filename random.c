#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randchar(){

    srand((unsigned)time(NULL));

    int index = rand() % 26;

    return 'A' + index;

}