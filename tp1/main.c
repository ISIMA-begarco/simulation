/*******************************************************************
 * NAME: main.c                                                    *
 *                                                                 *
 * PURPOSE: Main code of the project                               *
 *                                                                 *
 * DATE: September 2015                                            *
 * AUTHOR: Benjamin BARBESANGE - F2                                *
 *                                                                 *
 *******************************************************************/

#include <stdio.h>
#include <stdlib.h>

#include "von_neuman.h"
#include "congruential.h"

int main() {
    int i;
    int test_amount = 50;
    long int seed = 1;
    long int multiplier = 64525;
    long int increment = 10139;
    long int modulo = 65536;
    
    int von_neuman_seeds[5] = {4100, 1301, 1234, 100, 3141};
    
    for (i = 0; i < 5; i += 1) {
        von_neuman_test(von_neuman_seeds[i], test_amount);
        printf("------------------------------------------------\n\n");
    }
    
    congruential_test(seed, multiplier, increment, modulo, test_amount);
    
    return EXIT_SUCCESS;
}
