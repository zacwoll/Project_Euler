#include <stdio.h>
#include <unistd.h>
#include <time.h>

/**
 * This program shows an approach with two functions to the 3rd problem of
 * project euler. By further abstracting this logic, the steps of this
 * problem get easier. There's still a problem, the function takes too long
*/

/**
 * isDivisble - checks if a long long i is divisble by a long long j
 * @i: i will be divided by j
 * @j: j divides i
 * Return: 1 or 0
 */
int isDivisible(long long i, long long j) {

}

/**
 * isPrime - determines if a number is prime
 * @i: potential prime
 * Return: 1 or 0
 */
int isPrime(long long i)
{

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
    const long long N = 999999; // Goal is 600851475143

    // We don't care about 0 or 1, so we will start at 2.
    for (long long i = 2; i < N; i++)
    {
        // if it's divisble and not prime, it's allowed to compete
        if (isDivisible(N, i) && isPrime(i)) {
            // Largest number wins!
            largest = i;
        }
    }

    printf("Largest Prime Factor of %llu is %llu\n", N, largest);

    time_t end = time(NULL);

    printf("The elapsed time is %ld seconds\n", (end - begin));

    return (0);
}