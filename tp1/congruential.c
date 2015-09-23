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

#include "congruential.h"
 
/*************************************************
 *        congruential_generator                 *
 *                                               *
 * PARAMETERS:                                   *
 *  long int seed: value to proceed to next int  *
 *  long int multiplier: used in formula         *
 *  long int increment: ued in formula           *
 *  long int modulo: restrain the random numbers *
 *                                               *
 * RETURN:                                       *
 *  The next value from the seed                 *
 *************************************************/
long int congruential_generator(long int seed, long int multiplier, long int increment, long int modulo) {
    printf("%ld\n", ((multiplier * seed) + increment) % modulo);
    return ((multiplier * seed) + increment) % modulo;
}


/*************************************************
 *            von_neuman_test                    *
 *                                               *
 * PARAMETERS:                                   *
 *  int seed: value to proceed to next int       *
 *  long int multiplier: used in formula         *
 *  long int increment: ued in formula           *
 *  long int modulo: restrain the random numbers *
 *  int test_amount: number of int to evaluate   *
 *                                               *
 * RETURN:                                       *
 *  Print random numbers                         *
 *************************************************/
void congruential_test(long int seed, long int multiplier, long int increment, long int modulo, int test_amount) {
    int i;
    long int current = seed;

    printf("Testing Linear Congruential generator for %d test%c\nSeed is: %ld\n", test_amount, (test_amount>1)?'s':' ' , seed);

    for (i = 0; i < test_amount; i += 1) {
/*        printf("%ld\n", current);*/
        current = congruential_generator(current, multiplier, increment, modulo);
    }
}
