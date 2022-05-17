#include<stdio.h>
 int febo(int);
 void main()
 {
     int n;
     printf("Enter a number: ");
     scanf("%d",&n);
 }

 int febo (int n)
 {
    if(n==2||n==1)
        return 1;
    else{
         int f1=0,f2=1,f3,i=1;
        printf("%d\t%d\t",f1,f2);
        while(n>i)
        {
            f3=f1+f2;
            printf("%d\t",f3);
            f1=f2;
            f2=f3;
            i++;
        }
        return f3;
        }
 }