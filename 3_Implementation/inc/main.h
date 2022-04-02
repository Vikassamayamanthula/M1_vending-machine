#include<stdio.h>
#define system
void menu(void);
void end(void);
int main(){
 int intro;
 int option;
 int choice;
 int money;
e: menu();
 printf("Enter Your Option: ");
 scanf("%d",&intro);
 printf("\n");
 if(intro==1){
 x: printf("The Chocolates\n\n");
  printf("1.Choose Chocolate\n");
 w: printf("2.View A Price To Be Paid\n");
  printf("3.Back To Main Menu\n\n");
  printf("Note: Machine can only receive price in rupees only! \n\n\n");
  printf("Enter Your Option: ");
  scanf("%d",&option);
  printf("\n\n");
  if(option==1){
   system("cls");
   printf("List of chocolates: ");
   printf("\n\n");
   printf("0. Cadburry Black Forest");          printf("\tRs.25.00\n");
   printf("1. Kitkat");                         printf("\t\t\tRs.50.00\n");
   printf("2. Crispy");                         printf("\t\t\tRs.75.00\n");
   printf("\n\n");
   printf("Choose Chocolate: ");
   scanf("%d",&choice);
   printf("\n\n");
   switch(choice){
    case 0 :
     printf("You choose Cadburry Black Forest\n\n");
     goto w;
    case 1 :
     printf("You choose Kitkat\n\n");
     goto w;
    case 2 :
     printf("You choose Crispy\n\n");
     goto w;
    default : goto e;
   }
  }
  else if(option==2){
   printf("Price to be paid: ");
   switch(choice){
    case 0 :
     printf("Rs.25.00\n\n");
     goto x;
    case 1 :
     printf("Rs.50.00\n\n");
     goto x;
    case 2 :
     printf("Rs.75.00\n\n");
     goto x;
    default : goto e;
   }
  }
  else
   goto e;
 }
 else if(intro==2){
  printf("Enter your money: ");
  scanf("%d",&money);
  printf("\n\n");
  switch(choice){
   case 0:
    printf("Your payment is Rs.25.00");
    printf("\n\n");
    goto e;
   case 1:
    printf("Your payment is Rs.50.00");
    printf("\n\n");
    goto e;
   case 2:
    printf("Your payment is Rs.75.00");
    printf("\n\n");
    goto e;
   default:
    printf("ERROR!\n\n");
    goto e;
  }
 }
 else if(intro==3){
   int i,chg=0;
   int choc[10]={25,50,75,100};
   printf("Your Balance: ");
   chg=money-choc[choice];
   printf("%d",chg);
   printf("\n\n\n");
   goto e;
 }
 else if(intro==4){
   if(choice==0){
    printf("Thank you and enjoy your Cadburry Black Forest!");
    printf("\n\n");
    goto e;
   }
   if(choice==1){
    printf("Thank you and enjoy your Kitkat!");
    printf("\n\n");
    goto e;
   }
   if(choice==2){
    printf("Thank you and enjoy your Crispy!");
    printf("\n\n");
    goto e;
   }
   else{
    printf("Error! Try Again.\n\n");
    goto e;
   }
 }
 else{
  end();
 }
}