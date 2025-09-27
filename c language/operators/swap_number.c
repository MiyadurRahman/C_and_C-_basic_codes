//using temporary variable

#include <stdio.h>
int main(){

/*int num1 = 10;
int num2 = 2;
int temp;
temp = num1;
num1 =num2;
num2 =temp;
printf("num1 = %d\n",num1);
printf("num2 = %d",num2);
*/
 //another way is: without using temporary variable
int num1=10,num2=5;
num1=num1-num2;
num2 =num1+num2;

printf("num1 = %d\n",num1);
printf("num2 = %d",num2);


}