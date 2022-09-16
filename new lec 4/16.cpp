#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int row = 1;

  while (row <= n)
  {
    // for printing space

    int space = n - row;

    while (space)
    {
      cout << " ";
      space = space - 1;
    }

    // for 2nd triangle

    int col = 1;

    while (col <=row)
    {

      cout << col;

      col++;
    }

    // printing 3rd//

    int start = row-1;
    while (start)
    {
      cout << start;

      start = start - 1;
    }
    
   cout<<endl;

   row++;

   
  }
}