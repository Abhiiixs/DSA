#include<iostream>

//      1111
 //      222
  //      33
   //      4
using namespace std; 

int main ()
{   int n ; 
     cin>>n;


    int row = 1 ; 

    while (row<=n)
    {
      int space = row-1; 

      while (space)
      {
        cout<<" ";

        space = space - 1; 
      }

      int col = 1; 

      while (col<=n-row+1 ) // 4 - 1+ 1 = 4 
      {
        cout<<row;

        col++;
      }
      
      cout<<endl;

      row++;
      
    }
    
}