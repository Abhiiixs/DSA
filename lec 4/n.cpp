#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int row = 1;

    while (row <= n)
    {
        int space = row - 1;

        while (space > 0)
        {
            cout << " ";
            space = space - 1;
        }

        int col = n - row + 1; // 4 - 1 + 1 = 4

        while (col > 0)
        {
            cout << n - col + 1; // n - col + 1 ;  4 - 1 + 1 = 4

            col = col - 1;
        }

        cout << endl;

        row = row + 1;
    }
}