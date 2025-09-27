#include <stdio.h>
#include<string.h>
struct player{
int id;
char name[50];
int scores[5];
char status[50];



};
int total_calculate(struct player p){
int i,total=0;
for(i=0;i<5;i++)
{
  total+=p.scores[i];



}
return total;
}
void displayAll(struct player players[], int n) {
    int i, j;
    printf("Choice (3):\n");
    printf("ID\tName\t\tTotal Score\tStatus\n");
    for (i = 0; i < 3; i++) {
        int total = total_calculate(players[i]);
        printf("%d\t%s\t\t%d\t\t%s\n", players[i].id, players[i].name, total, players[i].status);
    }
}
void displayPrizeAndAlive(struct player players[], int n) {
    int i, totalPrize = 0;
    printf("Choice (4):\n");
    for (i = 0; i < 3; i++) {
        if (strcmp(players[i].status, "Eliminated") == 0) {
            totalPrize += 50000;
        }
    }
}
int main(){
    struct player players[3];
    int choice,total,found;
    int i;
    
      for (i = 0; i < 3; i++) {
        printf("Enter details for player %d:\n", i + 1);
        printf("Enter ID: ");
        scanf("%d", &players[i].id);

        printf("Enter name: ");
        scanf(" %[^\n]", players[i].name);

        printf("Enter scores for 5 games separated by spaces: ");
        int j;
        for (j = 0; j < 5; j++) {
            scanf("%d", &players[i].scores[j]);
        }
        
        strcpy(players[i].status, "Unknown");
    }
    while(1){
        
     printf("squid game player manager ");
     printf("1.update player based on total score");
     printf("2.search by id");
     printf("3.");
     
         scanf("%d",&choice);
     if (choice==1){

     for(i=0;i<3;i++)
     {
       total=total_calculate( players[i]);
       if (total>=250)
       {strcpy(players[i].status,"alive");
       } else {
                    strcpy(players[i].status, "Eliminated");
                }


     }

     }
     else if ( choice==2){
        int searchID;
            found = 0;
            printf("Enter player ID to search: ");
            scanf("%d", &searchID);

     for (i = 0; i < 3; i++) {
                if (players[i].id == searchID) {
                    total = total_calculate(players[i]);
                    printf("Player found:\n");
                    printf("Name: %s\n", players[i].name);
                    printf("Total Score: %d\n", total);
                    printf("Status: %s\n", players[i].status);
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("No player matches the given ID.\n");
            }
        }
        else if(choice==3)
        {
            displayAll(players,3);
        }
        else if (choice==4)
        {

          displayPrizeAndAlive( players, 3);

        }
        else if (choice == 5) {
            printf("Exiting the program.\n");
            break;
        }
        else {
            printf("Invalid choice, please try again.\n");
        }
    

    }





}