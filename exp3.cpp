//Name:- Mohit Sonawane
//Roll No:- 2251
//Batch:- B2
//Course Co-ordinator:- S.A. Wakure
//Date:- 21/02/2022

#include <iostream>
#include <math.h>
using namespace std;

class complex
{
    public:
    int real, img;
    void read();
    void display();
    void add(complex);
    void subt(complex);
    void multiply(complex);
    complex multiply1(complex);
    void divide(complex);
    void conjugate();
};

int main()
{
    complex obj;
    obj.read();
    obj.display();
    obj.add(obj);
    obj.subt(obj);
    obj.multiply(obj);
    obj.divide(obj);
    obj.conjugate();
    return 0;
}

void complex::read()
{
    cout<<"\nEnter the real and imaginary part of the complex number: ";
    cin>>real>>img;
}

void complex::display()
{
    int i;
    if(img>0)
    {
        cout<<real<<"+"<<img<<"i"<<endl;
    }
    else
    {
        i=-img;
        cout<<real<<"-"<<i<<"i"<<endl;
    }
}

void complex::add(complex c1)
{
    complex sum;
    sum.real=real+c1.real;
    sum.img=img+c1.img;
    cout<<"\nThe sum of the two complex numbers is: ";
    sum.display();
}

void complex::subt(complex c1)
{
    complex diff;
    diff.real=real-c1.real;
    diff.img=img-c1.img;
    cout<<"\nThe difference of the two complex numbers is: ";
    diff.display();
}

void complex::multiply(complex c1)
{
    complex product;
    product.real=(real*c1.real)-(img*c1.img);
    product.img=(real*c1.img)+(img*c1.real);
    cout<<"\nThe product of the two complex numbers is: ";
    product.display();
}

void complex::divide(complex c1)
{
    float r,i,ii,din;
    din=pow(c1.real,2)+pow(c1.img,2);
    complex c,c2;
    c2.real=c1.real;
    c2.img=c1.img;
    c=multiply1(c2);
    r=c.real/din;
    i=c.img/din;
    cout<<"\nThe quotient of the two complex numbers is: ";
    if(i>0)
    {
        cout<<r<<"+"<<i<<"i"<<endl;
    }
    else
    {
        ii=-i;
        cout<<r<<"-"<<ii<<"i"<<endl;
    }
}

complex complex::multiply1(complex c1)
{
    complex product;
    product.real=(real*c1.real)-(img*c1.img);
    product.img=(real*c1.img)+(img*c1.real);
    return(product);
}

void complex::conjugate()
{
    complex conj;
    conj.real=real;
    conj.img=-img;
    cout<<"\nThe conjugate of the complex number is: ";
    conj.display();
    cout<<endl;
}
