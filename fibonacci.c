//
// Created by nghoc on 15/06/2024.
//

#include <stdio.h>
#include <stdlib.h>
#include "fibonacci.h"


void generateFibonacciToN(int n) {
    /* Generate the fibonacci sequence up to the number entered by the user.
     * @param n: the number entered by the user */
    //initialise the first two numbers in the sequence
    int a = 0, b = 1, c;
    //print the first n numbers in the sequence
    for (int i = 0; i < n; i++) {
        printf("%d\n", a);
        c = a + b;
        a = b;
        b = c;
    }
    //no return value
}