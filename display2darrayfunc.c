#include<stdio.h>
void display(int a[][3],int n,int m);
void main()
{
    int x[][3]={1,2,3,4,5,6};
    int n=5;
    display(x,2,3);
}
void display(int a[][3],int n,int m){
    int i,j;
    for(i=0;n>i;i++)
        for(j=0;n>=j;j++)
            printf("%d\n",a[i][j]);
}
