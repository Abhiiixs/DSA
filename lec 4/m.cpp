#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int row = 1;

    int count = row ;

    while (row <= n)
    {
        int space = 1;

        while (space <= row - 1)
        {
            cout << " ";
            space++;
        }

        int col = 1;

        while (col >= row)
        {
            cout << count;
            count++;
            col-- ;
        }

        cout << endl;

        row++;
    }
}