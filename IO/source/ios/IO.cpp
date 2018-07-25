#include <iostream>

unsigned a[10000000];

int main(void)
{
    int n;
    int i;

    std::cin >> n;
    for(i = 0; i < n; i ++)
        std::cin >> a[i];
    for(i = 0; i < n; i ++)
        std::cout << a[i] << std::endl;

    return 0;
}
