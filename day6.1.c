#include <stdio.h>

int main(){
    int a;
    printf("enter the value of the number ");
    scanf("%d\n", &a);

    if( a%2 == 0){
        printf("the number is even \n");
        return 0;

    }else{
        printf("the number is odd ");
        return 0;
        
    }
    return 0;
}