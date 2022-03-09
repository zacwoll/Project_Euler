#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <unistd.h>
#include <time.h>
const long long N = 600851475143;

/**
 * This program shows an approach with two functions to the 3rd problem of
 * project euler. By further abstracting this logic, the steps of this
 * problem get easier.
*/

/**
 * isDivisble - checks if a long long i is divisble by a long long j
 * @i: i will be divided by j
 * @j: j divides i
 * Return: true or false
 */
bool isDivisible(long long i, long long j) {
    if (i % j == 0) {
        return (true);
    }
    return (false);
}


/**
 * isPrime - determines if a number is prime
 * @i: potential prime
 * Return: true or false
 */
bool isPrime(long long i)
{
    for (long long j = 2; j < i; j++)
    {
        if (isDivisible(i, j)) {
            return (false);
        }
    }
    return (true);
}

/**
 * main - Entry Point
 * Description: Will find the largest prime number of N and print it to console
 * Return: void
 */
int main(void) {

    // Useful for timing functions
    time_t begin = time(NULL);

    // a container for the largest prime factor
    long long int largest = 1;
    // Given N
    const long long N = 600851475143;
    // A switch for determining primeness
    bool notPrime = false;

    // We don't care about 0 or 1, so we will start at 2.
    for (long long i = 2; i < N; i++)
    {

        // We only want factors of N
        if (isDivisible(N, i) == false) {
            // Advance
            continue;
        }

        // We only want prime factors.
        if (isPrime(i) == false)
        {
            continue;
        }

        // the largest prime factor wins!
        largest = i;
    }

    printf("Largest Prime Factor of %llu is %llu\n", N, largest);

    time_t end = time(NULL);

    printf("The elapsed time is %ld seconds\n", (end - begin));

    return (0);
}