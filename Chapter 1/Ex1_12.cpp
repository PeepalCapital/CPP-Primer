#include <iostream>

int main()
{
    int sum = 0;
    
    //sum of n numbers. In this case from -100 to 100. It will result in 0.
    for (int i = -100; i <= 100; ++i)
        sum +=i;

    std::cout << sum << std::endl;

    return 0;
}