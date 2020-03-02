#include<iostream>
using namespace std;
int main()
{
	float x, sum=0;

	cout<<"ingresar datos:"<<endl;
	cin>>x;
	while(cin){
		if(x>0)
		sum=sum+x;
		cin>>x;
		}
	cout<<"suma de los numeros positivos:"<<sum<<endl;
return 0;
}
