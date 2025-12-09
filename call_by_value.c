#include <stdio.h>
void value(int x, int y)
{
    int z = x;
    x = y;
    y = z;
    printf("inside value function: x = %d, y = %d\n", x, y);
}
int main()
{
    int a = 7;
    int b = 8;
    value(a, b);
    printf("inside main function: a = %d, b = %d\n", a, b);
    return 0;
}