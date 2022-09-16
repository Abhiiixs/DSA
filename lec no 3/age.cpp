#include<iostream>

using namespace std; 

int main()
{
    //// int age;
    // cout << "enter the age "<<endl;
    // cin>>age;

    // if (age > 18)
    // {
    //     cout << "welcome to party king🤴🏻 " << endl;
    // }
    // else if ((age< 18) && (age>0))
    // {
    //     cout << "shut the fuck kid what you doing here " << endl;
    // }

    // else if(age==18)
    // {
    //     cout<<"ayo just truned 18 man "<<endl;
    // }

    // else if (age<=0){
    //     cout<<"go to moms pussy kid "<<endl;
    // }

    int age;
    cout << "enter the age ";
    cin >> age;

    if (age >= 18) 
    {
        cout << "your in  " << endl;
    }

    else if ((age < 18) && (age > 0))
    {
        cout << "your minor " << endl;
    }

    else if (age <= 0)
    {
        cout << "you dont exit bro " << endl;
    }
}