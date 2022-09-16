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
        char ch = 'A' + n - row;
        //           A + n - 1 = 3 + a = D

        while (col <= row)
        {
            cout << ch;
            ch++;

            col++;

            /* code */
        }

        cout << endl;

        row++;
    }
}