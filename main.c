#include <stdio.h>
#include "mymath.h"

/**
 * @file main.c
 * @author AMS
 * @date 2017
 * @brief Basic main file on how to use funcitons
 */


int main(void){

    int a, b, c;

    printf("Insert values for a + b = c:\n");

    printf("a:");
    scanf("%d", &a);
    
    printf("b:");
    scanf("%d", &b);

    c = sum(a, b);

    printf("Result (c) = %d\n", c);

}

