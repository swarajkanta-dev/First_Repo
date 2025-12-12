#include <stdio.h>
void printvalue(int *y){
    *y=*y+10;
    printf("Value: %d",*y);
}
void main(){
    int x=23;
     printf("x value: %d",x);
    printvalue(&x);
    printf("x value: %d",x);
}