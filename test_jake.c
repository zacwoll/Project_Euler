#include <stdio.h>

// int main()
// {
//     int x = 1; //while less than 4 million
//     int y = 1; // last  number
//     int z = 0; // even fib number
//     int sum = 0;

//     while (z <= 4000000)
//     {
//         x = y;
//         y = z;
//         z = x + y;
//         if (z % 2 == 0)
//         {
//                 sum += z;
//         }
//     }
//     printf("%d\n", sum);
//     return (sum);
// }

int main()
{
        int x = 1; //while less than 4 million
        int y = 1; // last  number
        int z = 0; // even fib number
        int sum = 0;

        while (x <= 4000000)
        {
                x = y;
                y = z;
                z = x + y;
        //      printf("%d ,", x);
                printf("%d = %d + %d\n", z, x, y);
                if (z % 2 == 0)
                {
                        sum +=z;
                        // printf("fib is %d, sum is %d\n", z, sum);
                }
        }
        printf("%d\n", sum);
        return (sum);
}