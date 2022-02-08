
// Function that utilizes the logic of the sieve
// to blow out every prime in front of sqrt(N)

// Array of sqrt(N) booleans set to false

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>
#include <time.h>
const long long N = 600851475143;

// prime_list_node_t struct
struct prime_list_node {
    int value;
    struct prime_list_node_t *next;
} prime_list_node_t;

// Generate sieve of erastothenes
// Walk through sieve of erastothenes
// for each prime number, check if

// The Direct Approach
// Check every odd value

prime_list_node_t add_node(prime_list_node_t *head, int value) {
    prime_list_node_t *new = NULL;
    if (!head)
        return NULL;

    new = malloc(sizeof(prime_list_node_t));
    if (!new)
        return NULL;

    new->value = value;
    new->next = NULL;

    while (*head->next) {
        head = head->next;
    }

    head->next = new;

    return (new);
}

int main(void) {

    time_t begin = time(NULL);
    // Generate sieve
    // Create array from 2 to N
    const long long int size_root = (long long int) sqrt(N);

    const long long int cache_size = (long long int) sqrt(N);

    // build an array of booleans
    // initialize to true
    bool *sieve = malloc(sizeof(bool) * cache_size);
    for (long long int i = 2; i < cache_size; i++) {
        sieve[i] = 1;
    }

    // create a linked list of prime numbers up to sqrt(N)
    // create head
    prime_list_node_t *head = NULL;

    // when our number^2 is greater than sqrt(N) go ahead and start checking true/false
    for (long long i = 1; i < size_root; i++)
    {
    }

    free(sieve);


    time_t end = time(NULL);

    printf("The elapsed time is %ld seconds\n", (end - begin));

    return (0);
}