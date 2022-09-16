#include<iostream>

using namespace std; 

int main()
{
  int n;
  cout<<"enter the value "<<endl;
  cin>>n;

  int i = 1;  // i is for colums 

  while (i<=n)
  {
   int j = 1;  // j is for rows 
   while (j<=n)
   {
    cout<<"*";
    j = j+1;
   }
   
   cout<<endl;

   i= i+1; 
   
  }
  


}