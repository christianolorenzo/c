#include<stdio.h>

int main(int argc, char *argv[])
{
    int num[6];
    int counter;

    for(counter = 0; counter < 6; counter++){
        printf("Enter an Integer: ");
        scanf("%d", &num[counter]);
    }
    
    printf("%d", num[counter]);

    return 0;

}



