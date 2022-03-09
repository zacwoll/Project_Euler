#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <unistd.h>
#include <time.h>
const long long N = 600851475143;

/**
 * Let's use some properties of Math to dissect this answer.
*/


/**
 * isDivisible - checks if a long long i is divisible by a long long j
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
 * getLargestPrimeFactor - gets the largest prime factor up to long long int N
 * @N: Target Number of prime factorization
 * Return: Largest Prime Factor or 1
 */
long long getLargestPrimeFactor(long long N) {
    //
    long long int largest = 1;
    long long int i = 2;

    // We're hunting for a single prime factor
    while (i * i <= N)
    {
        // continue reducing if possible
        if (isDivisible(N, i))
        {
            N /= i;
            // Since we're moving upwards, it will be larger than the last.
            largest = i;
        }
        else
        {
            // small efficiency upgrade, up the counter to 2
            if (i == 2) {
                i += 1;
            }
            else
            {
                i += 2;
            }
        }
    }
    // The remainder in N is the final prime if it is unreducible.
    if (N > largest)
    {
        largest = N;
    }

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
    long long largestPrimeFactor = getLargestPrimeFactor(N);

    printf("Largest Prime Factor of %llu is %llu\n", N, largestPrimeFactor);

    time_t end = time(NULL);

    printf("The elapsed time is %ld seconds\n", (end - begin));

    return (0);
}