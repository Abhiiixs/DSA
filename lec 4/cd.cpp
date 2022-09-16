#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 1;

    while (row <= n)
    {
        int space = n - row; // n - i

        while (space)
        {
            cout << " ";

            space = space - 1; // coz space descrging by 1 afer every row ;
        }
        int col = 1;
        while (col <= row)
        {
            cout << "*";

            col = col + 1;
        }

        cout << endl;

        row++;
    }
}