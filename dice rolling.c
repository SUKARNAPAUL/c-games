#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    printf("Press enter 3 times to roll the dice...\n");
    getch();
    getch();
    getch();
    int i,j;
    srand(time(NULL));
    for(;;){
        int x= (rand() % 6) +1;
        if (x==1){
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                if (i==1 && j==1){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
            printf("\n");
        }
        }
        else if (x==2){
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                if ((i==0 && j==2)|| (i==2 && j==0)){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
            printf("\n");
        }
        }
        else if (x==3){
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                if ((i==1 && j==1) || (i==0 && j==2)||(i==2 && j==0)){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
            printf("\n");
        }
        }
        else if (x==4){
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                if ((i==0 || i==2) && (j==0 || j==2)){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
            printf("\n");
        }
        }
        else if (x==5){
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                if( ((i==0 || i==2) && (j==0 || j==2))||(i==1 && j==1)){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
            printf("\n");
        }
        }
        else if (x==6){
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                if ((i==0 || i==1 || i==2) && (j==0 || j==2)){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
            printf("\n");
        }
        }
        printf("Press enter 3 times to roll the dice again...\n");
        getch();
        getch();
        getch();
    }
    return 0;
}
