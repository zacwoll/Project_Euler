#include <stdio.h>
#include <time.h>
#include <stdbool.h>

/** Problem 5 - Smallest multiple
 * Prompt - 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
 *
 * What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
 */

/** Naive solution
 * Brute force the number that is divisible by [1-20]
 * if a number is divisible by [11-20] I think it is divisible by [1-10]
 * So try that first?
 * UPDATE: this solution took 1s, passes.
 */

int checkAnswer(long long answer) {
    int i;

    for (i = 11; i <= 20; i++) {
        if (answer % i != 0) {
            return 0;
        }
    }
    return 1;
}

/**
 * main - Entry Point
 * Description: Will find the largest prime number of N and print it to console
 * Return: void
 */
int main(void) {

    // Useful for timing functions
    time_t begin = time(NULL);

    long long smallestMultiple;

    // continue incrementing by 20s until a solution is found
    for (smallestMultiple = 20; !checkAnswer(smallestMultiple); smallestMultiple += 20)
    {}

    // print testing
    // for (i = 1; i <= 20; i++) {
    //     printf("testme / i = %llu\n", testme % i);
    // }

    // Output
    printf("The smallest multiple is %llu\n", smallestMultiple);

    // End of execution
    time_t end = time(NULL);

    // Execution time = time elapsed, or end - begin
    printf("The elapsed time is %ld seconds\n", (end - begin));

    return (0);
}