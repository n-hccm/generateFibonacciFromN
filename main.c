//
// Created by nghoc on 15/06/2024.
//

#include <stdio.h>
#include <stdlib.h>
#include "fibonacci.h"


int main(int argc, char *argv[]) {
    /* Generate the fibonacci sequence up to the number entered by the user.
     * @param argc: the number of arguments
     * @param argv: the arguments entered by the user
     * @return 0 if the program runs successfully
     * */

    //check if the user has entered the correct number of arguments
    if (argc != 2) {
        printf("Usage: %s <number>\n", argv[0]);
        return 1;
    }
    //convert the string to an integer
    int n = atoi(argv[1]);
    //check if the number is negative
    if (n < 0) {
        printf("Please enter a positive number\n");
        return 1;
    }
    //generate the fibonacci sequence
    generateFibonacciToN(n);

    return 0;
}