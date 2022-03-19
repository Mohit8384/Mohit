#include <iostream>
using namespace std;
int main()
{int a,b,c;
int ch;
cout<<"enter value of a and b";
cin>>a>>b;
cout<<"------Menu----------";
cout<<"1. Addition 2. Subtraction 3. Multiplication 4. Division 5. Modulas";
cout<<"Enter your choice:";
cin>>ch;


switch(ch)
{
    case 1:c=a+b;
    cout<<"Sum is="<<c;
    break;

    case 2:c=a-b;
    cout<<"Difference is="<<c;
    break;

    case 3:c=a*b;
    cout<<"Product is="<<c;
    break;

    case 4:c=a/b;
    cout<<"Div is="<<c;
    break;

    case 5:c=a%b;
    cout<<"Rem is="<<c;
    break;

    case 6: break;
    }
    while(ch=6);
    return 0;
    }
