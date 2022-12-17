#include<stdio.h>

int Addition(int a,int b)
    {
        int c;
        c=a+b;
        return c;
    }

int main()
{
    int a=0;
    int b=0;
    int c=0;

    printf("Enter the 1st number:");
    scanf("%d",&a);

    printf("Enter the 2st number:");
    scanf("%d",&b);

    c=Addition(a,b);
    printf("Sum= %d\n",c);
    return 0;
    
}