#include<iostream>

using namespace std;

int ope(int x,int y)
{
	long s,r,m,d,mod;
	s=x+y;
	r=x-y;
	m=x*y;
	d=x/y;
	mod=x%y;
	cout<<s<<endl;
	cout<<r<<endl;
	cout<<m<<endl;
	cout<<d<<endl;
	cout<<mod<<endl;
return 0;
}

int main()
{
	int x, y;
	cin>>x;
	cin>>y;
	if(x>=1&&y<=50)
	ope(x,y);
return 0;
}
