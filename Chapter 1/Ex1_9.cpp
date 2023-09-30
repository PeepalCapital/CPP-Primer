#include <iostream>

int main()
{
    int start_num = 50, end_num = 100, sum = 0;

    while (start_num <= end_num)
        {
            sum += start_num;
            ++start_num;
        }
    std::cout << "The sum of all numbers from 50 to 100 is " << sum << std::endl;

    return 0;
}
