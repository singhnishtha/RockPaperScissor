#include <stdio.h>
#include<conio.h>
#include <stdlib.h>


typedef int Player;
Player you, computer;
 int menu(){
     int ch;
     printf("\n1.Select Rock");
     printf("\n2.Select Paper");
     printf("\n3.Select Scissor");
    printf("\n4.Exit\n");
    printf("Enter choice: ");
    scanf("%d",&ch);
    return(ch);

 }

void setup(){
    label:
        computer=rand()%4;
        if(computer==0)
            goto label;
        you=menu();
}
void logic(){
    switch(you){
case 1:
    if(computer==1){
        printf("\nGame Draw");
        printf("\nYou=Rock\nComputer=Rock");
    }
    else if(computer==2){
       printf("\nComputer Won");
        printf("\nYou=Rock\nComputer=Paper");
    }
    else{
        printf("You Won");
        printf("\nYou=Rock\nComputer=scissor");

    }
    break;

case 2:
    if(computer==1){
        printf("\nYou Won");
        printf("\n You=Paper\nComputer=rock");
    }
    else if(computer==2){
        printf("\nGame Draw");
        printf("\n You=Paper\nComputer=paper");
    }
    else{
        printf("Computer Won");
        printf("\n You=Paper\nComputer=Scissor");

    }
    break;

case 3:
    if(computer==1){
        printf("\nComputer won ");
        printf("\nYou=Scissor\nComputer=Rock");
    }
    else if(computer==2){
        printf("\nYou Won");
        printf("\nYou=Scissor\nComputer=paper");
    }
    else{
        printf("\nGame Draw");
        printf("\nYou=Scissor\nComputer=Scissor");

    }
    break;
case 4:
    exit(0);
default:
    printf("\nNot valid operation");
    }
}
int main()
{ while(1){
    system ("cls");
    setup();
    logic();
    getch();
}

    return 0;
}
