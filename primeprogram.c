#include<stdio.h>
int main()
{
    int a,b,c=0;
    printf("enter the value ");
    scanf("%d",&a);
    for(b=2;b<a;b++)
    {
        if(a%b==0)
    {
        c++;
        printf("the given is not a prime numer");
        break;
    }  
    } 
            if(c==0)
            printf("the given is a prime numer");
            return 0;
}
            
        
    
