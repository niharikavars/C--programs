#include <iostream>
using namespace std;
class simple
{
private:
int a;
int b;
public:
int c;
void get_data(int i,int j)
{
a=i;
b=j;
} 
int set_data();
};
int simple::set_data()
{
return a+b;
}
int main()
{
int sum;
simple e;
e.get_data(10,20);
sum=e.set_data();
cout<<sum<<endl;
simple *e1=&e;
sum=e1->set_data();
cout<<sum<<endl;
return 0;
}

