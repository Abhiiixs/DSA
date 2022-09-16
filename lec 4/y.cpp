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

        while (col <= n)
        {
            char xd = 'A' + col - 1;

            cout << xd << " ";

            col = col + 1;
        }
        cout << endl;

        row++;
    }
}