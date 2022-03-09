#include <stdio.h>
#include <time.h>

/** Problem 6 - Sum square difference
 * Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
 */

/** Naive Solution
 * Brute force the answer, compute the difference
 */

/**
 * main - Entry Point
 * Description: Will find the largest prime number of N and print it to console
 * Return: void
 */
int main(void) {

    // Useful for timing functions
    time_t begin = time(NULL);

    long long squareSum = 0;
    long long seriesSum = 0;
    long long result;
    int i = 0;

    // Build the sum of the squares
    // 1^2 + 2^2 + 3^2 + ...
    for (i = 0; i <= 100; i++) {
        squareSum += i * i;
    }

    printf("Sum of squares: %llu\n", squareSum);

    // Build the square of the sum
    // (1 + 2 + 3 + ...)^2
    for (i = 1; i <= 100; i++) {
        seriesSum += i;
    }
    seriesSum *= seriesSum;

    printf("Square of Sum: %llu\n", seriesSum);

    result = seriesSum - squareSum;

    // Output
    printf("Sum square difference: %llu\n", result);

    // End of execution
    time_t end = time(NULL);

    // Execution time = time elapsed, or end - begin
    printf("The elapsed time is %ld seconds\n", (end - begin));

    return (0);
}