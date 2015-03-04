#include <iostream>

using namespace std;

unsigned int fib(unsigned int num)
{
    if (num < 2)
        return num;
    else
        return fib(num-1) + fib(num-2);
}

int main()
{
    unsigned int n;
    cin >> n;
    cout << "Fib: " << fib(n) << endl;
    return 0;
}

