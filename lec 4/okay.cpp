#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 1; // int i = 1;

    while (row <= n)
    {
        int col = 1; // int j = 1;                      
        while (col <= row)
        {
            cout << (row - col + 1) << "  ";   // (i -j+1 )
                                              //  i - j + 1   if n is 4   i is = 4 ;
                                             //   4 - 1 + 1 =4 

            col = col + 1;
        }
        cout << endl;

        row++;
    }
}



   //  cin>>4//
                                                      
                                // j1 j2 j3 j4 

                       //  i=   // 1  
                                // 2  1
                                // 3  2  1
                                // 4  3  2  1                                                 

                        
                          
                          // i - j +  1  =    
                          // 1 - 1 +  1 = 1  
                          
                          // 2 - 1 +  1  = 2  
                          // 2 - 2 +  1 =  1 

                          // 3 - 1 +  1 = 3 
                          // 3 - 2 +  1 = 2 
                          // 3 - 3 +  1 = 1

                          // 4 - 1 +  1 = 4 
                          // 4 - 2 +  1 = 3 
                          // 4 - 3 +  1 = 2 
                         //  4 - 4 +  1 = 1 