#include <stdio.h>

int mul(int x,int y);
void main()
{
    int c;
    printf("sub : %d",mul(10,20));
}
int mul(int x,int y)
{
    return(x*y);
}