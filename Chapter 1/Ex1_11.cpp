#include <iostream>

int main()
{
    int start_num = 0, end_num = 0;
    std::cin >> start_num >> end_num;
    while (start_num <= end_num)
    {
        std::cout << start_num << std::endl;
        ++start_num;
    }
    return 0;
}