#include <iostream>

using namespace std;

int main()
{
    int a = 4;
    int b = 6;

    cout << "a&b " << (a & b) << endl;
    cout << "a|b " << (a | b) << endl;
    cout << "~a  "  << (~a) << endl;
    cout << "a^b " << (a ^ b) << endl;


    cout<<"17>>1 " <<(17>>1)<<endl;
    cout<<"19>>2 " <<(17>>2)<<endl;

    cout<<"21<<1 "<<(21<<1)<<endl;
    cout<<"21<<2 "<<(21<<2)<<endl;


    int i = 8;


    // pre - increment 

    cout<<(++i)<<endl;
    //  9 

    // post increment 

    cout<<(i++)<<endl;
    // 9,   i = 10

     // pre - increment 
    cout<<(i--)<<endl;
    //  10 ,   i = 9

     // post - increment 
    cout<<(--i)<<endl;
    //  8 , i = 8






}