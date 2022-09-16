#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int row = 1;

    while (row <= n)
    {
        int col = 1;

        while (col <= n - row + 1) // n - row + 1
        {                          // 4 - 1 + 1 = 4
            cout << "*";           // 4 - 2 + 3 = 3

            col++;
        }
        cout << endl;

        row++;
    }
}