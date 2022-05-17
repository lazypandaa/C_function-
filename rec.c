#include <stdio.h>

void rec(void);
void main()
{
    rec();
}
void rec()
{
    printf("Hello panda\n"); 
    main();
}