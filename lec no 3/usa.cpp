#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;


    int row = 1;
   

    while (row <= n)
    {
        int space = 1;
      int value = row;
        while (space<=row-1)
        {
            cout << " ";

            space = space + 1;
        }
        int col = 1;

        while (col>=row)
        {
            cout << value;

            value++;

            col--;
        }

        cout << endl;

        row++;
    }
}