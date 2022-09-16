#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 1;

    while (row <= n)
    {
        // for printing space

        int space = n - row; // n - i

        while (space)
        {
            cout <<" ";

            space = space - 1;
        }

        int col = 1;

        while (col <= row)
        {
            cout << "*";
            col++;
        }
        cout << endl;

        row++;
    }
}