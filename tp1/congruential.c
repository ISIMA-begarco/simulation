/*******************************************************************
 * NAME: congruential.c                                            *
 *                                                                 *
 * PURPOSE: Random int generator using linear congruential         *
 *          technique                                              *
 *                                                                 *
 * DATE: September 2015                                            *
 * AUTHOR: Benjamin BARBESANGE - F2                                *
 *                                                                 *
 *******************************************************************/

#include <math.h>

#include "congruential.h"
 
/*************************************************
 *        congruential_generator                 *
 *                                               *
 * PARAMETERS:                                   *
 *  int seed: value to proceed to next int  *
 *  int multiplier: used in formula         *
 *  int increment: ued in formula           *
 *  int modulo: restrain the random numbers *
 *                                               *
 * RETURN:                                       *
 *  The next value from the seed                 *
 *************************************************/
int congruential_generator(int seed, int multiplier, int increment, int modulo) {
    /* bit to bit & is the same as % */
    return (seed * multiplier + increment) & modulo;
}


/*************************************************
 *            von_neuman_test                    *
 *                                               *
 * PARAMETERS:                                   *
 *  int seed: value to proceed to next int       *
 *  int multiplier: used in formula         *
 *  int increment: ued in formula           *
 *  int modulo: restrain the random numbers *
 *  int test_amount: number of int to evaluate   *
 *                                               *
 * RETURN:                                       *
 *  Print random numbers                         *
 *************************************************/
void congruential_print(int seed, int multiplier, int increment, int modulo, int test_amount) {
    int i;

    printf("Testing Linear Congruential generator for %d test%c\nSeed is: %d\n", test_amount, (test_amount>1)?'s':' ' , seed);

    for (i = 0; i < test_amount; i += 1) {
        printf("%d\n", seed);
        seed = congruential_generator(seed, multiplier, increment, modulo);
    }
}

void congruential_test(int seed, int multiplier, int increment, int modulo, int test_amount) {
    int i;
    int repartition[10] = {0};

    printf("Testing Linear Congruential generator repartition for %d test%c\nSeed is: %d\n", test_amount, (test_amount>1)?'s':' ' , seed);

    /* Generate numbers and count it in repartition tab */
    for (i = 0; i < test_amount; i += 1) {
        seed = congruential_generator(seed, multiplier, increment, modulo);
        repartition[(int)(((float)seed/modulo)*10)]++;
    }
    
    /* Print repartition content */
    printf("\nPrinting repartition results:\n");
    for (i = 0; i < 10; i += 1) {
        printf("%d\t ", repartition[i]);
    }
    printf("\n");

}
