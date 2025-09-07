#include <stdio.h>

int main(){
    float cel;
    float fer;
    
    printf("enter the value of the celcious ");
    scanf("%f\n", &cel );
    
    fer = (cel*1.8)+32;

    printf("the value in the ferhanite is %f", &fer);



    return 0;
}
