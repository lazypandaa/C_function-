#include <stdio.h>
int sum(int x,int y);

void main()
{
    int a,b;
    scanf("Enter a b values: %d%d",&a,&b);
    printf("sum: %d",sum(a,b));
}
int sum(int x,int y)
{
    return(x+y);
}