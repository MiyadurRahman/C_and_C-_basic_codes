#include <stdio.h>
struct contact{
   char name [50];
    char phone[50];
    char email[50];


};
void addcontact(){
      FILE *file;
    file=fopen("contact.txt","a");
    if(file==NULL)
    {printf("file doesnot exit");

   
    }
    else 
   {
      struct contact contacts;
      
      
    printf("enter name : ");
   
    fgets(contacts.name,sizeof contacts.name,stdin);
    printf("enter phone: ");

    fgets(contacts.phone,sizeof contacts.phone,stdin);
    printf("enter email: ");
    fgets(contacts.email,sizeof contacts.email,stdin);
   fprintf(file,"%s%s%s",contacts.name,contacts.phone,contacts.email);
   fclose(file);
    printf("add to contact manage ment system");
     
    }
    
}
void displaycontact(){
     
     FILE *file;
    file=fopen("contact.txt","r");
    if(file==NULL)
    {printf("file doesnot exit");

    
    }
    else 
   {struct contact contacts;
       printf("contact.\n");
       while(fscanf(file," %[^\n] %[^\n] %[^\n]",contacts.name,contacts.phone,contacts.email) != EOF)
       {
        printf("name: %s \n phone:%s\n email:%s\n",contacts.name,contacts.phone,contacts.email);
       }
   fclose(file);
  
     
    }
}
int main(){
  int choice;
  while(1)
  {



  
  printf("\n Contact management system\n");
  printf("1.add contact\n");
  printf("2.display contacts\n");
  printf("3.exit\n");
  printf("enter your choice: ");
  scanf("%d",&choice);

  
if(choice==1){
addcontact();

}
else if(choice==2)
{

displaycontact();

}
else if(choice==3){

printf("exit");
break;

}
else{
  printf("invalid choice");
}
  
}
}