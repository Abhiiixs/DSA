#include<iostream>

using namespace std;

int main()
{

    int n ;
    cin>>n;
    int i = 1;

    while (i <= n)
    {
        int j = 1;
                        //3- 1+1 = 3
                        //3- 2+1 = 2
                        //3- 3+1 = 1
        while (j<=n)  // n - j+1 
        {
            cout <<n-j+1;  // this formula use for print number in revers = n - j+1
            j = j + 1;
        }
        cout << endl;

        i = i + 1;
    }
}