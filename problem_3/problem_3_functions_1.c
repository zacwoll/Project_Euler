#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <unistd.h>
#include <time.h>
const long long N = 600851475143;

/**
 * This program shows an approach with a function to encapsulate the problem.
 * If we make checking something for divisibility the logic of the program,
 * it becomes simpler to understand. Follow the flow of the loop through each
 * condition, filtering out those that are unwanted, not factors or not primes.
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

        // Check if i is prime (ensure it has no factors besides 1 and itself)
        for (long long j = 2; j < i; j++)
        {
            // if i is divisible by j it is not prime
            if (isDivisible(i, j)) {
                // break outer for loop, progress to setNewLargest
                notPrime = true;
                break;
            }
        }

        // Set the new largest prime factor
        if (notPrime == false) {
            largest = i;
        }

        // Loop, searching for greater prime factors
    }

    printf("Largest Prime Factor of %llu is %llu\n", N, largest);

    time_t end = time(NULL);

    printf("The elapsed time is %ld seconds\n", (end - begin));

    return (0);
}