#include<stdio.h>
 int fact(int);
 void main()
 {
     int n,result;
     printf("Enter a number: ");
     scanf("%d",&n);
     printf("factorial :%d",fact(n));
 }
 
 int fact (int n)
 {
    if(n==0||n==1)
        return 1;
    else
        return n*fact(n-1);
 }