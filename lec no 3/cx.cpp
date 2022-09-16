#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int row = 1;

    while (row <= n)
    {
        int col = n;
        int space = 1;
        int count = row;

        while (space <= row - 1)
        {
            cout << " ";
            space++;
        }

        while (col >= row)
        {
            cout << count;
            count++;

            col--;
        }
        cout << endl;

        row++;
    }
}