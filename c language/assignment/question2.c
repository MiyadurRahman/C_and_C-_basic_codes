#include <stdio.h>
#include <math.h>

int main()
{
    float x, y, result;

    printf("Enter values for x and y: ");
    scanf("%f %f", &x, &y);

    if (x < 0 && y < 0)
    {
        result = pow(x, 3) + 5 * x * y;
    }
    else if (x < 0 && y > 0)
    {
        result = 4 * y;
    }
    else if (x >= 0)
    {
        result = 1 / (x + y);
    }
  
    else
    {

        printf("Undefined\n");
        return 0;
    }
 

 printf("f(x, y) = %.3f\n", result);

}