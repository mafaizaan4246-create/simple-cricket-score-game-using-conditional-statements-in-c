#include<stdio.h>

int main(){
    int runs;
    char extras;

    printf("Did the ball have any extras? (y/n): ");
    scanf(" %c",&extras);

    printf("Enter the number of runs scored in a single ball (0-6): ");
    scanf("%d",&runs);

    if (extras=='n' || extras=='N'){
        if (runs==0){
            printf("Its a Dot ball!!");
        }
        else if(runs==1){
            printf("Single Run!!");
        }
        else if(runs==2){
            printf("Double Runs!!");
        }
        else if(runs==3){
            printf("Three Runs!!");
        }
        else if(runs==4){
            printf("Its a Boundary 4 Runs!!");
        }
        else if(runs==5){
            printf("Thats rare its 5 runs!!");
        }
        else if(runs==6){
            printf("Thats a Maximum Six Runs!!");
        }
        else{
            printf("Invalid Input :(");
        }
    }

    else if (extras=='y' || extras=='Y'){
        if (runs==0){
            printf("Its a Wide/No Ball!!");
        }
        else if(runs==1){
            printf("Wide/No Ball!! plus 1 run");
        }
        else if(runs==2){
            printf("Wide/No Ball!! plus 2 runs");
        }
        else if(runs==3){
            printf("Wide/No Ball!! plus 3 runs");
        }
        else if(runs==4){
            printf("Wide/No Ball!! plus 4 runs");
        }
        else if(runs==5){
            printf("Wide/No Ball!! plus 5 runs");
        }
        else if(runs==6){
            printf("Wide/No Ball!! plus 6 runs");
        }
        else{
            printf("Invalid Input :(");
        }
    }

    else{
        printf("Invalid Input for extras");
    }

    return 0;
}
