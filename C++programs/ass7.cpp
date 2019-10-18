#include <iostream>
using namespace std;
int main()
{
char *ptr="hello hii";
char *&rptr=ptr;
cout<<ptr<<endl<<rptr<<endl<<ptr+4<<endl<<rptr+4<<endl;
return 0;
}
