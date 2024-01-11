#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value");
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        for(c=1;c<=20;c++)
        printf("%d*%d=%d\n",b,c,b*c);
        printf("#######\n");
    }
    return 0; 
}
