#include <stdio.h>


void swap(int *x,int *y)
{ int *z=x;

x=y;
y=z;
printf("%d %d",*x,*y);
    
}
int main()
{
int a=7;
int b=8;
swap(&a,&b);
return 0;

}
