#include <stdio.h>

int main(){
    
      int a;
 printf("enter a : ");
    scanf("%d",&a);

    switch(a){
        case 1:
        printf("you enrtered 1");
        break;
        case 2:
        printf("you enrtered 2");
        break;
        case 3:
        printf("you enrtered 3");
        break;
        case 4:
        printf("you enrtered 4");
        break;
        default:
        printf("nothing matched");
        // for print only what we have input then we need to use break (shown above).
    return 0;
    }
}