#include <stdio.h>

int main(){
    int n; 
    int sum;

    printf("enter the value of the n natural number you want to add ");
    scanf("%d\n", &n);

    sum = (n*(n+1))/2;
    printf("the sum of the natural number is %d", sum);
    
    return 0;
}