#include<stdio.h>

int main(int argc, char *argv[])
{
    int num;
    int sum;
    int count;
    
    printf("Enter a Number: ");
    scanf("%d", &num);
    
    for(count = 1; count < num; count++){
        sum = sum + count;
    }
    
    printf("The sum is : %d \n", sum);


    return 0;
    
}


