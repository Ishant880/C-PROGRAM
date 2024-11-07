#include <stdio.h>

int main(){
    int a;
 printf("enter a : ");
    scanf("%d",&a);

    switch(a){
        case 1:
        printf("you enrtered 1");
        case 2:
        printf("you enrtered 2");
        case 3:
        printf("you enrtered 3");
        case 4:
        printf("you enrtered 4");
        default:
        printf("nothing matched");
        // for the same as in 4thp we have to write default (shown above) then we get all case printed as per our input.
    return 0;
}
}
