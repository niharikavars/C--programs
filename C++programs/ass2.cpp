#include<iostream>
using namespace std;
class A1
{
public:
void display()
{
cout<<"hii"<<endl;
}
};
class B1: public A1
{
public:
void display()
{
cout<<"bye"<<endl;
}
};
int main()
{
A1 a;
B1 b;
A1 *ap;
ap= &b;
B1 *bp;
ap=&b;
ap->display();
return 0;
}

