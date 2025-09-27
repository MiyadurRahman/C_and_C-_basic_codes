#include <stdio.h>

int main() {
    /*Write a program that will take the last 4 digits of your student id and an
operator as input. The program will determine the last digit of your student id
and perform an operation on that digit three times, using the switch case
statements.*/
int id;
int operation;
printf("enter the last 4 digit of the if: ");
scanf("%d",&id);
char oparator;
printf("enter the operator: ");
scanf(" %c",&oparator);
switch(oparator)
{
case '+':{
    id%=10;
    operation=id+id+id;
    break;

}
case '-':{
    id%=10;
    operation=id-id-id;
    break;

}
case '*':{
    id%=10;
    operation=id*id*id;
    break;

}
case '/':{
    id%=10;
    operation=id/id/id;
    break;

}
default:{

    printf("invalid operator");
}








}
printf("operation result: %d",operation);
}