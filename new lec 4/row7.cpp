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

        char ch = 'A' + row - 1;
        // A+1-1 = A // A + 2 -1=1 a+1 = b

        while (col <= row)
        {

            cout << ch;

            col++;
        }

        cout << endl;

        row++;
    }
}
