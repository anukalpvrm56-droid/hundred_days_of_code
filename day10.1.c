#include <stdio.h>

int main(){
    int a, b, c;
    printf("enter the sides of the triangle ");
    scanf("%d %d %d", &a, &b, &c);  
    if(a==b && b==c){
        printf("the triangle is equilateral \n");
    }else if(a==b || b==c || a==c){
        printf("the triangle is isosceles \n");
    }else{
        printf("the triangle is scalene \n");
    }   
    return 0;
}