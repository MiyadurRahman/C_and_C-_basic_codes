#include <stdio.h>
char arr[10]={'o','1','2','3','4','5','6','7','8','9'};
void showboard();
int checkforwin();


int main(){

int player = 1;int choice,i;
char mark;//store symbol x or o;

do {

showboard();
player =(player %2)?1:2;
scanf("%d",&choice);
mark=(player==1)?'x':'o';
if (choice==1 && arr[1]=='1')
 {
    arr[1]=mark;
 }if (choice==2 && arr[2]=='2')
 {
    arr[2]=mark;
 }if (choice==3 && arr[3]=='3')
 {
    arr[3]=mark;
 }if (choice==4 && arr[4]=='4')
 {
    arr[4]=mark;
 }if (choice==5 && arr[5]=='5')
 {
    arr[5]=mark;
 }if (choice==6 && arr[6]=='6')
 {
    arr[6]=mark;
 }if (choice==7 && arr[7]=='7')
 {
    arr[7]=mark;
 }if (choice==8 && arr[8]=='8')
 {
    arr[8]=mark;
 }if (choice==9 && arr[8]=='9')
 {
    arr[9]=mark;
 }
 else {printf("invalid\n");
 player--;
   getch();
   i=checkforwin();
}
}while(i==-1);


void showboard(){

printf("Tic Tac Toe\n");
printf("    |    |    \n");
printf(" %c  | %c  | %c    \n",arr[1],arr[2],arr[3]);
printf("----|----|----\n");
printf(" %c  | %c  | %c    \n",arr[4],arr[5],arr[6]);

printf("----|----|----\n");
printf(" %c  | %c  | %c    \n",arr[7],arr[8],arr[9]);
printf("    |    |    \n");
}

int checkforwin{
   //for rows
if(arr[1]==arr[2] && arr[2]==arr[3])
{return 1;}
if(arr[4]==arr[5] && arr[5]==arr[6])
{return 1;}
if(arr[6]==arr[7] && arr[7]==arr[8])
{return 1;}
if(arr[7]==arr[8] && arr[8]==arr[9])
{return 1;}
// for columns
if(arr[1]==arr[4] && arr[4]==arr[7])
{return 1;}
if(arr[2]==arr[5] && arr[5]==arr[8])
{return 1;}
if(arr[3]==arr[6] && arr[6]==arr[9])
{return 1;}


}