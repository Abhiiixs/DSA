#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 1;
    int count = 1;

    while (row <= n)
    {
        int col = 1;

        while (col <= row)
        {
            cout << count;
            count++;
            col++;
        }
        cout << endl;
        row++;
    }
}


// 1
// 23
// 456
// 78910