#include<stdio.h>

int bin(int x)
{
    int arr[100], i = 0;
    while (x > 0)
    {
        arr[i] = x % 2;
        x /= 2;
        i++;
    }
    for (int s = (i - 1); s >= 0; s--)
    {
        printf("%d", arr[s]);
    }
    puts("");
}
int main()
{
    printf("The Decimal\tHexDecimal\tOctal\tBinary\n");
    for (int s = 1; s <= 256; s++)
    {
        printf("%d\t\t%X\t\t%o\t", s, s, s);
        bin(s);
        puts("");
    }
}