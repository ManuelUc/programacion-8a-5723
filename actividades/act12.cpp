#include<iostream>
using namespace std;
int main()
{

	int i, x, p=0, ip=0;
	float med, sp=0, sip=0;

	cout<<"introducir numeros:"<<endl;
	for(i=1;i<=10;i++){
		cin>>x;
		if(x%2==0){
		sp=sp+x;
		p+=+1;}
		else {
		sip=sip+x;
		ip+=+1;
		}
	}
	med=sip/ip;
	cout<<"total de numeros pares:"<<p<<endl;
	cout<<"suma de los numeros pares:"<<sp<<endl;
	cout<<"media de los numeros impares:"<<med<<endl;

return 0;
}
