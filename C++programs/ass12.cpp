#include <iostream>
using namespace std;
class simple
{
private:
int a;
int b;
public:
int c;
void set_data(int i,int j)
{
a=i;
b=j;
}
int get_data()
{
return a+b;
}
};
int main()
{
 simple e;
e.set_data(5,5);
cout<<e.get_data()<<endl;
e.c=10;
return 0;
}
