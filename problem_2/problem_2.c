#include <stdio.h>

int main(void) {
    int fibA = 1, fibB = 1, fibC = 0, fibSum = 0;

    while (fibC < 4000000) {
        if (fibC % 2 == 0)
        {
            fibSum += fibC;
        }
        fibC = fibA + fibB;
        fibA = fibB;
        fibB = fibC;
    }

    printf("%d\n", fibSum);
    return (0);
}