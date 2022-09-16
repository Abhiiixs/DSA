#include <iostream>
using namespace std;

// find sum of all even numbers

int main()
{
    int n;
    cout << "enter the value of n" << endl;
    cin >> n;
    int sum = 0;
    int i = 2;

    while (i <= n)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }

        i = i + 1;
    }

    cout << "sum form " << 1 << " to " << n << " = " << sum << endl;
    return 0;
}
