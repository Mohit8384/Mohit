//Name:- Mohit Sonawane
//Roll No:- 2251
//Batch:- B2
//Course Co-ordinator:- S.A. Wakure
//Date:- 16/02/2022


// objective: concept of Function overloading

#include.<iostream>
using namespace std;

void Swap(int &x, int &y)
{
    int t;
    t = x;
    x = y;
    y = t;
}

void Swap(float &f1, float &f2)
{
    float t;
    t = f1;
    f1 = f2;
    f2 = t;
}

void Swap(char &c1, char &c2)
{
    char t;
    t = c1;
    c1 = c2;
    c2 = t;
}

int main()
{
    // For Integer variables
    int a=25, b=15;
    cout << "Before swapping value of int a = "<<a<<endl;
    cout << "Before swapping value of int b = "<<b<<endl<<endl;
    Swap(a,b);
    cout << "After swapping value of int a = "<<a<<endl;
    cout << "After swapping value of int b = "<<b<<endl<<endl;
    cout << "------------------------------------------------------"<<endl;

    // For Float variables
    float x=6.25, y=12.06;
    cout << "Before swapping value of float x = "<<x<<endl;
    cout << "Before swapping value of float y = "<<y<<endl<<endl;
    Swap(x,y);
    cout << "After swapping value of float x = "<<x<<endl;
    cout << "After swapping value of float y = "<<y<<endl<<endl;
    cout << "------------------------------------------------------"<<endl;

    // For Char variables
    char ch1='p', ch2='q';
    cout << "Before swapping value of char ch1 = "<<ch1<<endl;
    cout << "Before swapping value of char ch2 = "<<ch2<<endl<<endl;
    Swap(ch1,ch2);
    cout << "After swapping value of char ch1 = "<<ch1<<endl;
    cout << "After swapping value of char ch2 = "<<ch2<<endl<<endl;
    cout << "------------------------------------------------------"<<endl;

    return 0;
}
