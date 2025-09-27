#include <stdio.h>
int countword(char str[]){
    int count = 0;
    int i = 0;

    if (str[0] != ' ' && str[0] != '\0') {
        count = 1;
    }

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0') {
            count++;
        }
    }

    return count;



}
int getmiddleword(char str[]){

int i=0;
int wordno=1;
int middle;
int totalwords=countword(str);
middle=(totalwords+1)/2;
while(str[i]==' '){
    i++;
}
while(str[i] != '\0')
{

while(str[i] != '\0')
{
if(wordno==middle)
{return i;
}
while(str[i] != ' ' && str[i] !='\0')
{

i++;

}
while(str[i]==' '){
    i++;
}
wordno++;

}



}

}
int main(){
char str[100];
scanf("%[^\n]",str);





}