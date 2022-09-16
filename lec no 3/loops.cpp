#include<iostream>

using namespace std;

int main()
{
    int n; 
    cout<<"Enter the value of n "<<endl;
    cin>>n;


    // int i = 1;
    // while (i<=n)
    // {
    //    cout<<i<<endl;
    //     i++;
    //     i = i+1;
    // }
    
int i = 1;

int sum = 0;

while (i<=n)
{
  sum = sum + i;
    i++;
    // i = i+1;

}

cout<<"The value of  sum  is   "<<sum<<endl;


}