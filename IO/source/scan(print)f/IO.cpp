#include <cstdio>

unsigned a[10000000];

int main(void)
{
    int n;
    int i;

    scanf("%d", &n);
    for(i = 0; i < n; i ++)
        scanf("%u", &a[i]);
    for(i = 0; i < n; i ++)
        printf("%u\n", a[i]);

    return 0;
}
