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
A *ap;
B *bp;
ap=&b;
ap->display();
((B*)ap)->display();
return 0;
}

