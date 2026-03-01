#include <stdio.h>

typedef enum 
{
    true = 0x01,
    false = 0x00,
} bool;

int main(void)
{
    long long int x = 27644437;
    int i, j;
    bool isPrime = true;

    for (i = 2, j = 1; i < x; i++, j++)
    {
        printf("Iteration number %d\n", j);
        if (x % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    
    printf("x is prime? %d", isPrime);

    return 0;
}
