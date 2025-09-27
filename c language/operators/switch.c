#include <stdio.h>
int main()
{
    int score;
    printf("enter the score");
    scanf("%d", &score);

    switch (score)
    {
    case 90 || 100:
        printf("golden A+");
        break;

    case 80:

        printf("A+");
    case 70:

        printf("A");
        break;
    case 60:
        printf("A-");
        break;

    default:
        printf("you are a dumb student");
        break;
    }
}