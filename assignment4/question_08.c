/* Name   : Lorenzo Christopher
 * ID#    : 20151747
 * Purpose: 
 * Date   : 05.04.2016
 */

#include<stdio.h>

int main(int argc, char *argv[]){
    int n;
    int sum;
    int counter;

    printf("Enter an Integer: ");
    scanf("%d", &n);

    for(counter = 1; counter < n; counter++){
        if(n % counter == 0){
            sum = sum + counter;
        }
    }
    
    printf("sum is %d\n ", sum);

    if(sum == n){
        printf("%d is Perfect\n", n);
    }else if(sum > n){
        printf("%d is Abundant\n", n);
    }else{
        printf("%d is Deficient\n", n);
    }

    return 0;
}


