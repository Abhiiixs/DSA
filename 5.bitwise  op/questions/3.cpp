#include <iostream>

using namespace std;

int main()
{
    int a = 1;
    int b = 2;

    if (a-- > 0 || ++b > 2)              // only one condition will check coz its || or op 
                                        //  if first condtion will true second will not checked 


    {
        cout << " stage 1  - inside if ";
    }

    else
    {
        cout << " stage 2 -  inside else ";
    }

    cout<<" a " "  "<<b<<endl;
}
