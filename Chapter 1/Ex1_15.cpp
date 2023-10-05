/*
Errors in compilation:

Ex1_15.cpp:9:32: error: expected ';' after expression
    std::cout << "Syntax error" //syntax error
                               ^
                               ;
Ex1_15.cpp:12:9: error: assigning to 'int' from incompatible type 'const char [11]'
    i = "Type Error"; //type error
        ^~~~~~~~~~~~
Ex1_15.cpp:14:18: error: use of undeclared identifier 'variable'
    std::cout << variable; //declaration error
                 ^
3 errors generated.

*/

#include <iostream>

int main()
{
    std::cout << "Syntax error" //syntax error

    int i;
    i = "Type Error"; //type error

    std::cout << variable; //declaration error

    return 0;

}