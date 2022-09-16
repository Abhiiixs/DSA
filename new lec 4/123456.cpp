#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int row = 1;

    int value = 1;

    while (row <= n)
    {
        int col = 1;

        while (col <= n)
        {
            cout << value;

            value = value + 1;
            col++;
        }
        cout << endl;
        row++;
    }
}