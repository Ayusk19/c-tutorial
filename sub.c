#include<stdio.h>
int main(){
    int a, b;
    printf("Enter a ");
    scanf("%d", &a);
    printf("Enter b ");
    scanf("%d", &b);
    int sub = a - b;
    printf("sub is %d", sub);
    return 0;
}