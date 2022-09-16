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
///  for 1st tringle = n - row +1 5 - 1+5
    while (col <= n - row + 1)
    {
      cout << col;

      col++;
    }

//  printing 2 nd (row-1)*2
    col = 1;

     //  1  1-1 = 0*2 = 0 
     //  1  2-1 = 1*2 = 2
     //  1  3-1 = 2*2 = 4 
     //  1  4-1 = 3*2 = 6 
     //  1  5-1 = 4*2 = 8

     while (col<=(row-1)*2)
     {
      cout<<"*";
      col++;
     }
     
     // printing 3rd trinagle  n - row + 1  to 1    
     //    5 - 1 + 1 = 5 
     col = n - row + 1 ;

     while (col>= 1 )
     {
      cout<<col;
      col--;
     }
     




    


    cout << endl;
    row++;
  }
}