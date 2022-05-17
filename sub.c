#include <stdio.h>

int sub(int x,int y);
void main()
{
    int c;
    printf("sub : %d",sub(10,20));
}
int sub(int x,int y)
{
    return(x-y);
}