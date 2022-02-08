#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <unistd.h>
#include <time.h>
const long long N = 600851475143;

// Generate sieve of erastothenes
// Walk through sieve of erastothenes
// for each prime number, check if

// The Direct Approach
// Check every odd value

int main(void) {

    time_t begin = time(NULL);
    // Generate sieve
    // Create array from 2 to N
    int cache[15] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };
    // int cache[5] = { 2, 3, 5, 7, 11 };
    const int cache_size = 15;
    long long int largest = 1;
    bool notPrime = false;

    printf("sqrt(N) = %f\n", sqrt(N));
    for (long long i = 2; i < sqrt(N); i++)
    {
        notPrime = false;
        // for loop that removes i's
        // that are not prime from cache
        for (int cache_item = 0; cache_item < cache_size; cache_item++)
        {
            if (i % cache[cache_item] == 0)
            {
                notPrime = true;
                break;
            }
        }
        if (notPrime) {
            continue;
        }

        // for loop that runs up to sqrt(i) and checks if i is prime
        for (long long j = cache[cache_size-1]; j < sqrt(i); j += 2)
        {
            if (i % j == 0)
            {
                notPrime = true;
                break;
            }
        }
        if (notPrime) {
            continue;
        }

        // now that i is prime
        // if N is divisible by this prime, i
        // than give me the other number.
        if (N % i == 0) {
            largest = N / i;
        }
        else {
            printf("%llu\n", i);
        }
    }

    printf("Largest Prime Factor of %llu is %llu\n", N, largest);

    time_t end = time(NULL);

    printf("The elapsed time is %ld seconds\n", (end - begin));

    return (0);
}