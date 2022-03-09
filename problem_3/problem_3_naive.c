#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <time.h>

/**
 * This program shows a naive approach to the 3rd problem of project euler.
 * What is the largest prime factor of the number 600851475143 ?
 * What we need to determine:
 * - What are the factors of N
 * - Which of those factors are prime
 * - The largest of those prime factors is our answer
 * We will devise a search pattern from 2-N looking for this number.
*/

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
        // Am I a factor of N?
        if (N % i != 0) {
            // advance to the next choice!
            continue;
        }

        // Ok, I'm a factor, am I prime?
        for (long long j = 2; j < i; j++)
        {
            // if i is divisible by j it is not prime
            if (i % j == 0) {
                // break out to outer for loop with the flag changed
                notPrime = true;
                break;
            }
        }

        // Now that we know i is a factor
        // and it is a prime number
        if (notPrime == false)
        {
            // Set the new prime factor
            largest = i;
        }
        // Loop, check the next number.
    }

    printf("Largest Prime Factor of %llu is %llu\n", N, largest);

    time_t end = time(NULL);

    printf("The elapsed time is %ld seconds\n", (end - begin));

    return (0);
}