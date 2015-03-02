#include <iostream>

using namespace std;

int main()
{
    auto max = 0;
    auto sum = 0;

    cout << "Please enter a number: " << endl;
    cin >> max;

    for (auto i = 0; i < max; i++)
    {
       if (i %3 == 0 || i%5==0)
           sum+=i;
    }

    cout << "Sum: " << sum << endl;
    return 0;
}

