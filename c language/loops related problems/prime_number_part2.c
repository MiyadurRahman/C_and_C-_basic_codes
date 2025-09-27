#include <stdio.h>
#include <ctype.h>
int main()
{ // print prime number from 1 to 100
//how many numbbers from one to 100
//sum of prime numbers from one to 100

    int number, count = 0,totalprimenum=0,sumofprimenumbers=0;
    // printf("enter number: ");
    // scanf("%d", &number);
    
    printf("prime numbers between 1 to 100 are:\n");
    for (number = 1; number <= 100; number++)
    {count=0;

        if (number <= 1)
        {
            count = 1;
        }
        else
        {
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
             
             

            printf("%d\n", number);
            totalprimenum++;
            sumofprimenumbers+=number;

        }
    }
    printf("total prime numbers:%d",totalprimenum);
    printf("sum of prime numbers :%d",sumofprimenumbers);
}
