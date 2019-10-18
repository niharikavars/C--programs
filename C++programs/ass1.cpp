#include<iostream>
using namespace std;
class A
{
public:
void display()
{
cout<<"hii"<<endl;
}
};
class B: public A
{
public:
void display()
{
cout<<"bye"<<endl;
}
};
int main()
{
A a;
B b;
a.display();
b.display();
B *bp;
bp=&b;
bp->display();
return 0;
}
