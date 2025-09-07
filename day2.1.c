#include <stdio.h>

int main(){
    int a,b;

    printf("enter the value of the length :");
    scanf("%d\n", &a);

    printf("enter the value of the breadth :");
    scanf("%d\n", &b);
    
    int area = a*b;
    int peremeter = 2*(a+b);
    
    printf("THE value of the area of the rectagle is %d\n ", &area);
    printf("THE value of the area of the rectagle is %d n", &area);

    return 0;



}