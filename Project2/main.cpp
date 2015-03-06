#include <iostream>
#include <chrono>

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

    unsigned int i = 1;
    unsigned int sum = 0;
    std::chrono::time_point<std::chrono::system_clock> start, end;
    start = std::chrono::system_clock::now();
    while(i)
    {
        auto temp = fib(i);
        if (temp % 2 == 0)
            sum+=temp;
        i++;

        if (temp >4000000)
            break;
    }
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;

    cout << "SUM: " << sum << endl;
    cout << "Elapsed time: " << elapsed_seconds.count() << endl;

    return 0;
}

