#include <cstdio>
#include <ctime>
#include <random>

const int d[8] = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000};
std::mt19937 m(time(NULL));
int a[10000000];

void Gen(int n, int x)
{
    char s[233];
    int i;

    sprintf(s, "%d.in", x);
    freopen(s, "w", stdout);
    printf("%d\n", n);
    for(i = 0; i < n; i ++)
        printf("%u ", a[i] = m());
    printf("\n");
    
    sprintf(s, "%d.out", x);
    freopen(s, "w", stdout);
    for(i = 0; i < n; i ++)
        printf("%u\n", a[i]);
    printf("\n");

    return;
}

int main(void)
{
    int i;

    for(i = 0; i < 8; i ++)
        Gen(d[i], i + 1);

    return 0;
}
