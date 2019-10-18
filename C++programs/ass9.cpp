#include <iostream>
using namespace std;
int mul(int a,int b,int c=5);
int main()
{
int x,y;
x=mul(10,20,30);
y=mul(10,20);
cout<<x<<endl<<y<<endl;
return 0;
}
int mul(int a,int b,int c)
{
return a*b*c;
}
