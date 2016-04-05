/* Name   : Lorenzo Christopher
 * ID#    : 20151747
 * Purpose: 
 * Date   : 05.04.2016
 */

#include <stdio.h>
//#include <time>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int user;
    int computer;

    //srand(time(NULL));
    computer = 0 + rand() % 3; //generate computer chance

    printf("Enter your choice\n");
    printf("Scissor = 0\n");
    printf("Rock    = 1\n");
    printf("Paper   = 2\n");

    scanf("%d", &user);

    if(user == computer){
        printf("Computer choice is %d\n", computer);
        printf("Draw\n");
    }else if((user == 1) && (computer == 2)){
        printf("Computer choice is %d\n", computer);
        printf("Paper can wrap a rock\n");
        printf("Computer wins\n");
    }else if((user == 1) && (computer == 0)){
        printf("Computer choice is %d\n", computer);
        printf("Rock can knock a scissor\n");
        printf("User wins\n");
    }else if((user == 2) && (computer == 1)){
        printf("Computer choice is %d\n", computer);
        printf("Paper can wrap a rock\n");
        printf("User wins\n");
    }else if((user == 2) && (computer == 0)){
        printf("Computer choice is %d\n", computer);
        printf("Scissor cut paper\n");
        printf("Computer wins\n");
    }else if((user == 0) && (computer == 1)){
        printf("Computer choice is %d\n", computer);
        printf("Rock knock scissor\n");
        printf("Computer wins\n");
    }else if((user == 0) && (computer == 2)){
        printf("Computer choice is %d\n", computer);
        printf("Scissor cut paper\n");
        printf("User wins\n");
    }else{
        printf("Invalid Input\n");
    }

    return 0;
}
