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

        while (col <= n)
        {
            cout << ch;

            col++;
        }
        cout << endl;
        row++;
    }
}

// 4
// AAAA
// BBBB
// CCCC
// DDDD