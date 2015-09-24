/*******************************************************************
 * NAME: von_neuman.c                                              *
 *                                                                 *
 * PURPOSE: Von Neuman random numbers generator with tests         *
 *                                                                 *
 * DATE: September 2015                                            *
 * AUTHOR: Benjamin BARBESANGE - F2                                *
 *                                                                 *
 *******************************************************************/

#include "von_neuman.h"


/*************************************************
 *        von_neuman_generator                   *
 *                                               *
 * PARAMETERS:                                   *
 *  int seed: value to proceed to next int       *
 *                                               *
 * RETURN:                                       *
 *  The next value from the seed                 *
 *************************************************/
int von_neuman_generator(int seed) {
    return ((seed * seed) / 100)%10000;
}


/*************************************************
 *            von_neuman_test                    *
 *                                               *
 * PARAMETERS:                                   *
 *  int seed: value to proceed to next int       *
 *  int test_amount: number of int to evaluate   *
 *                                               *
 * RETURN:                                       *
 *  Print random numbers                         *
 *************************************************/
void von_neuman_print(int seed, int test_amount) {
    int i, current = seed;

    printf("Testing Von Neuman generator for %d test%c\nSeed is: %d\n", test_amount, (test_amount>1)?'s':' ' , seed);

    for (i = 0; i < test_amount; i += 1) {
        printf("%04d\n", current);
        current = von_neuman_generator(current);
    }
}
