/*
 ============================================================================
 Name        : 07_02.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Passing variables to functions, Ansi-style
 	 	 	   This is an example of functional programming, in which the
 	 	 	   user interacts with an ATM to debit or credit an account.
 	 	 	   The program performs 3 transactions. The last two transactions
 	 	 	   also include adding a monetary gift to the account.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

// #include "balance.h"

#include "./smth/constants.h"

void printBar(int length);

int main(void) {
    printf("%d\n", MAX_VALUE);
    printBar(10);
    printBar(5);
    printBar(23);
	return EXIT_SUCCESS;
}

void printBar(int length) {
    for(int i = 0; i < length; i++) {
        printf("▓");
    }
    printf(" %d\n", length);
}