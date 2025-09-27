#include <stdio.h>
int getsummean(float marks[], int N, int type) {
    float sum = 0;

    for (int i = 0; i < N; i++) {
        sum += marks[i];
    }

    if (type == 1) {
        return sum;
    } else if (type == 2) {
        float avg = sum / N;
        return avg;
    } else {
        return 0;
    }
}
int main(){

int j=5;
float students[j];
int type;

for(int i=0;i<j;i++)
{

scanf("%f",&students[i]);


}
printf("enter the type: ");
scanf("%d",&type);
float call=getsummean(students, j, type);

if(type==1)

{

printf("the sum of the elemenets: %f",call);

}
else if (type  == 2)
{
    printf ("the avg is : %f",call);
}
else 
printf("invalid type");
return 0;
}