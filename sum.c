#include <stdio.h>

int sum(int x,int y);
void main()
{
    int c;
    printf("sum :%d",sum(10,20));
}
int sum(int x,int y)
{
    return(x+y);
}