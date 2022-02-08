#include <stdio.h>
/**
  * reverse_array - reverses an array
  * @a: pointer to array
  * @n: size of array
  * Return: void
  */
//    int a[] = {1337, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 0}; temp = 1337
//               0  1  2  3  4  5  6  7  8  9  10    11    12
//    int n = 13, so a[13 - 1] is the last element in the array
// 98 is the a[10] 's value, or a[10] == 98
// there's this number n, it's the size of array, it's the length of it.
// so n minus 1, or 1 space to the left of n, a[n - 1], always refers to the last element.
// so I've created an int to store the index of the last element.
// this int is called 'end', and it's stored n - 1 or end = n - 1;
// so a[end] == 1337
void reverse_array(int *a, int n)
{
    /* three variables, temp, start & end; */
	int temp, start = 0, end = n - 1;
    while (start < end)
    {
        temp = a[end];
        a[end] = a[start];
        a[start] = temp;
        start++;
        end--;
    }
}

void print_array(int *a, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        if (i != 0)
        {
            printf(", ");
        }
        printf("%d", a[i]);
        i++;
    }
    printf("\n");
}

int main(void)
{
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

    print_array(a, sizeof(a) / sizeof(int));
    reverse_array(a, sizeof(a) / sizeof(int));
    print_array(a, sizeof(a) / sizeof(int));
    return (0);
}