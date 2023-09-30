#include <iostream>

int main()
{
    int start_num = 10, end_num = 0;
    while (start_num >= end_num)
    {
        std::cout << start_num << std::endl;
        --start_num;
    }
    return 0;
}