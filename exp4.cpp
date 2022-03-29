#include<iostream>
#define size 10
using namespace std;
class stack
{
int *s;
int top;

public:
stack() //Constructor
{
cout<<"\n I am in constructor";
s=new int[size];//creation of dynamic stack
top=-1;
}

void push(int item)
{
top++;
s[top]=item;
}

int pop()
{
int item;
if(!stempty())
{

item=s[top];

top--;
return item;
}
else
cout<<"\n stack is empty";
return -1;
}

int stempty()
{
if(top==-1)
return 1;
else
return 0;

}

void display()
{
if(!stempty())
{
for(int i=0;i<=top;i++)
cout<<" "<<s[i];

}
else
cout<<"\n stack is empty";

}

~stack()  //Destructor
{
for(int i=0;i<size;i++)
{
delete []s;
delete s;
}
}

};

int main()
{
stack obj;
int choice,val;
char ans;
do
{
cout<<"\n\t Main Menu";

cout<<"\n 1.Push \n2.Pop \n3.Display";
cout<<"\n Enter Your choice :";
cin>>choice;
switch(choice)
{
case 1: cout<<"\n Enter the value to be pushed :";
cin>>val;
obj.push(val);
break;
case 2: cout<<"\n popped element :"<<obj.pop();
break;
case 3: obj.display();
break;

}
cout<<"\n Do you want to continue ?";
cin >>ans;

}while(ans=='y'||ans=='Y');
return 0;
}
