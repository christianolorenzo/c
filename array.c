#include<stdio.h>

int main(int argc, char *argv[])
{
    int num[6];
    int counter;
    int sum = 0;

    for(counter = 0; counter < 6; counter++){
        printf("Enter an Integer: ");
        scanf("%d", &num[counter]);
        sum = sum + num[counter];
    }
    
    printf("The sum is: %d \n", sum);

    return 0;

}



