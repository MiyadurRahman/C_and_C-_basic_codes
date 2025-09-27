#include <stdio.h>
int main()
{

    int num;

    printf("travel services are-\n1.Car\n2.Bus\n3.Bike\nChoose a service:");
    scanf("%d", &num);
    float distance;
    printf("enter the distace in kilometer: ");
    scanf("%f", &distance);

    switch (num)
    {

    case 1:
    {
        int charge;
        charge = distance * 500
        printf("You have selected car.\nThe total charge for your trip is: %d", charge);
        break;
    }
    case 2:
    {
        int charge;
        charge = distance * 300;
        printf("You have selected Bus.\nThe total charge for your trip is: %d", charge);
        break;
    }
    case 3:
    {
        int charge;
        charge = distance * 100;
        printf("You have selected Bike.\nThe total charge for your trip is: %d", charge);
        break;
    }
    default:
    {
        printf("invalid number: ");
    }

    }
}
