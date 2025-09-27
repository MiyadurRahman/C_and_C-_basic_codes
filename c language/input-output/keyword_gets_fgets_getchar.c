#include <stdio.h>
int main(){
char name[50];
printf("enter the name: ");
//taking input using gets()
// but using gets() is not safe as a input taker
//gets(name);(codes)d

//i can use scanf here but it will not print the whole name it will just the first word of name.
//scanf("%s",&name);(codes)

//the best keyword we use here is fgets()

fgets(name,sizeof(name),stdin);//problem is it will write the 50 word string if there is no word to write than it will take the emty spaces

printf("hello "); //= here i didnot call the name or i didnot use format specifier for using puts..
puts(name);

}

