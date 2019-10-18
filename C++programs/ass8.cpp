#include <iostream>
using namespace std;
int add(char);
int add(int,int);
int add(int,int,int);
float add(float,float);
int main()
{
char ch='S';
int a=3,b=4;
int c=5,d=6,e=7;
float f=2.1,g=9.3;
int p,q,r;
float t;
p=add(a,b);
q=add(ch);
r=add(c,d,e);
t=add(f,g);
cout<<p<<endl<<q<<endl<<r<<endl<<t<<endl;
return 0;
}
int add(char ch)
{
return ch+71;
}
int add(int a,int b)
{
return a+b;
}
int add(int c,int d,int e)
{
return c+d+e;
}
float add(float f,float g)
{
return f+g;
}
