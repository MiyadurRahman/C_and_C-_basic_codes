#include <stdio.h>
int main(){

char str1[100]="my na123 e is meyad";
int i=0;
int count=0;
while(str1[i] != '\0')
{
if (str1[i]=='a'<= str1[i]=='z'){

count++;

}
i++;

}
printf("%d",count);




}