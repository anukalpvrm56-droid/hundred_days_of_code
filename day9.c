#include <stdio.h>

int main(){
    int a ;
    printf("enter your marks it should be out of 100 ");
    scanf("%d", &a);    
    if(a>=90 && a<=100){
        printf("your grade is A+ \n");
    }else if(a>=80 && a<90){
        printf("your grade is A \n");
    }else if(a>=70 && a<80){
        printf("your grade is B+ \n");
    }else if(a>=60 && a<70){
        printf("your grade is B \n");
    }else if(a>=50 && a<60){    
        printf("your grade is C \n");
    }else if(a>=40 && a<50){
        printf("your grade is D \n");
    }else if(a>=0 && a<40){
        printf("your grade is F \n");
    }else{
        printf("invalid input \n");
    }
    return 0;
}