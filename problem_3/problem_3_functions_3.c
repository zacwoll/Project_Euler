#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <unistd.h>
#include <time.h>
const long long N = 600851475143;

/**
 * This program shows an approach with three functions to the 3rd problem of
 * project euler. By further abstracting this logic, the steps of this
 * problem get easier. There's still a problem, the function takes too long
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
    // for every j up to i
    for (long long j = 2; j < i; j++)
    {
        // if i is divisible by j it's not prime
        if (isDivisible(i, j)) {
            // return false
            return (false);
        }
    }
    // return true
    return (true);
}

/**
 * getLargestPrimeFactor - gets the largest prime factor up to long long int N
 * @N: Target Number of prime factorization
 * Return: Largest Prime Factor or 1
 */
long long getLargestPrimeFactor(long long N) {
    // Container for largest prime factor
    long long int largest = 1;

    // for every number [2-N]
    // allow the largest prime factor to be set to largest
    for (long long i = 2; i < N; i++)
    {
        // if i is a factor and prime,
        if (isDivisible(N, i) && isPrime(i))
        {
            // set largest to the other factor.
            largest = i;
        }
    }
    // return the largest prime factor or 1
    return (largest);
}

/**
 * main - Entry Point
 * Description: Will find the largest prime number of N and print it to console
 * Return: void
 */
int main(void) {

    // Useful for timing functions
    time_t begin = time(NULL);

    // Given N
    const long long N = 600851475143;

    // a container for the largest prime factor
    long long largestPrimeFactor = getLargestPrimeFactor(N)

    printf("Largest Prime Factor of %llu is %llu\n", N, largest);

    time_t end = time(NULL);

    printf("The elapsed time is %ld seconds\n", (end - begin));

    return (0);
}