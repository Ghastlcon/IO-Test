#include <iostream>

unsigned a[10000000];

int main(void)
{
    int n;
    int i;

    std::ios::sync_with_stdio(false);

    std::cin >> n;
    for(i = 0; i < n; i ++)
        std::cin >> a[i];
    for(i = 0; i < n; i ++)
        std::cout << a[i] << std::endl;

    return 0;
}
