#include <iostream>

using namespace std;

int main()
{
    int a,b,x;
    cin>>a;
    cin>>b;
    if(a>=0&&b<=10)
    {
 	   x=a+b;
 	   cout<<x<<endl;
    }
    else
    {
        return 1;
    }

    return 0;

}
