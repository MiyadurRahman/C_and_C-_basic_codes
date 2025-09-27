#include <stdio.h>

int main()
{

    int number, count = 0;
    printf("enter number: ");
    scanf("%d", &number);
    if (number <= 1)
    {
        count = 1;
    }
    else{
    for (int i = 2; i <= number / 2; i++)
    {

        if (number % i == 0)
        {
            count++;
            break;
        }
    }
    }
    if (count == 0)
    {

        printf("%d is a prime number", number);
    }
    else
        printf("%d is not a prime number", number);
}