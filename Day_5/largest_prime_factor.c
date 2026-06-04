#include <stdio.h>

int main()
{
    int number, i, j;
    int lpf = 0;
    int isPrime;
    printf("Enter a number: ");
    scanf("%d", &number);

    // Find factors
    for(i = 2; i <= number; i++){
        if(number % i == 0)
        {
            isPrime = 1;

            // Check if factor is prime
            for(j = 2; j < i; j++)
            {
                if(i % j == 0)
                {
                    isPrime = 0;
                    break;
                }
            }

            if(isPrime)
            {
                lpf = i;
            }
        }
    }

    printf("Largest Prime Factor = %d\n", lpf);

    return 0;
}