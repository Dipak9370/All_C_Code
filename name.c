#include<stdio.h>
int main()
{
    char a,b,c;
    printf("Enter the first name:");
    scanf("%c",&a);

    printf("Enter the last name:");
    scanf("%c\n",&b);

    c=a+b;
    printf("Full Name: %c\n",c);
    return 0;

}