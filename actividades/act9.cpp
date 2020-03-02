#include<iostream>
using namespace std;
int main()
{
	float  x, s=0, med;
	int i;
	cout<<"introduzca num"<<endl;
	for(i=1;i<=5; i++){
	cin>>x;
	s=s+x;
	}
	med=s/5;
	cout<<s;
	cout<<"La media es:"<<med<<endl;

return 0;
}
