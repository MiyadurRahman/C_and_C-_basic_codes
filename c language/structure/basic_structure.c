#include <stdio.h>
#include <string.h>

struct book{
int nofpage;
float price;
char name[20];



};
struct legendarybook{
int special_book;
struct book x;
};
int main ()
{
   struct legendarybook book1;
    strcpy(book1.x.name,"atomic habits");
    printf("%s\n",book1.x.name);
    book1.x.price=1200.00;
    book1.x.nofpage=120;
   book1.special_book=200;

    struct book book2;
    strcpy(book2.name,"help");
    
    book2.price=1200.00;
    book2.nofpage=120;
    printf("%s",book2.name);
    printf("%d",book1.special_book);




}