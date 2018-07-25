#include <cstdio>

unsigned a[10000000];

unsigned scan(void)
{
    int c, s;

    for(s = 0; (c = getchar()) < '0' || c > '9'; )
        ;
    do
        s = s * 10 + c - 48;
    while((c = getchar()) >= '0' && c <= '9');

    return s;
}

void print(unsigned x)
{
    static int b[20];
    int c;

    if(!x)
        putchar('0');
    else
    {
        for(c = 0; x; x /= 10)
            b[c ++] = x % 10;
        while(c --)
            putchar(b[c] + '0');
    }
    putchar('\n');

    return;
}

int main(void)
{
    int n;
    int i;

    scanf("%d", &n);
    for(i = 0; i < n; i ++)
        a[i] = scan();
    for(i = 0; i < n; i ++)
        print(a[i]);

    return 0;
}
