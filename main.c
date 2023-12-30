#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a,b;
  printf("Enter the value A:\n");
  scanf("%d",&a);
  printf("enter the value  B:\n");
  scanf("%d",&b);

  additonprogram(a,b);

    return 0;
}
int additonprogram(int a,int b)
{
    int c=a+b;
    printf("Add vslue is :%d\n",c);
}
