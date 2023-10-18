#include <iostream>


template <class T>
T f(T x)
{
    T x2 = 2 * x;
    return x2 + (x * x + 1) / x2;
}

int main()
{
    std::cout << f(5.0) << std::endl << f(5) << std::endl;
    return 0;
}
