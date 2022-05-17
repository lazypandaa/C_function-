#include<stdio.h>

int power(int,int);
void main()
{
    int x ,y;
    printf("Enter base followed by power: ");
    scanf("%d%d",&x,&y);
    printf("Result=%d",power(x,y));
    
}
int power(int x, int y){
    if (y==0)
    return 1;
    else 
    return(x*power(x,y-1));
}