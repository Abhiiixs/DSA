#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int space = 1;

        while (row <= n - row)
        {
            cout << "_";

            space++;
        }

        cout << endl;

        row++;
    }
}
