#include <iostream>

using namespace std;

int main()
{

  int n;
  cout << "Enter the value " << endl;
  cin >> n;

  int i = 2;

  while (i <= n)
  {
    if (n % i == 0) // if you wanna print prime number just replace 0 / with 1
    {
      cout << "not prime for " << i << endl;
    }

    else
    {
      cout << " prime for  " << i << endl;
    }

    i = i + 1;
  }
}