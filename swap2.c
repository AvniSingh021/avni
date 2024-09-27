#include<stdio.h>
int main(){
    int a=20,b=10;
    printf("swap the number\n");
    a=b+a;
    b=a-b;
    a=a-b;
    printf("swaping the number%d\n",a);
    printf("swaping the number%d\n",b);
    return 0;
}