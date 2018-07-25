#include <cstdio>

unsigned a[10000000];

char f[10000000], *p = f + 9999999;
#define Getchar() (p == f + 9999999 ? fread(f, sizeof(char), 10000000, stdin), p = f : ++ p)
char g[10000000], *q = g;
#define Putchar(x) (q == g + 10000000 ? fwrite(g, sizeof(char), 10000000, stdout), q = g, q ++ : q ++)

unsigned scan(void)
{
    int c, s;

    for(s = 0; (c = *Getchar()) < '0' || c > '9'; )
        ;
    do
        s = s * 10 + c - 48;
    while((c = *Getchar()) >= '0' && c <= '9');

    return s;
}

void print(unsigned x)
{
    static int b[20];
    int c;

    if(!x)
        *Putchar() = '0';
    else
    {
        for(c = 0; x; x /= 10)
            b[c ++] = x % 10;
        while(c --)
            *Putchar() = b[c] + '0';
    }
    *Putchar() = '\n';

    return;
}

void flush(void)
{
    fwrite(g, sizeof(char), q - g, stdout);

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
    flush();

    return 0;
}
