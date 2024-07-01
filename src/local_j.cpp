#include <iostream>

int i = 42;

int main()
{
    int i = 100;
    std::cout << "int i local i is "
              << i << std::endl;
    int j = i;
    std::cout << "int j local j is "
              << i << std::endl;

    return 0;
}