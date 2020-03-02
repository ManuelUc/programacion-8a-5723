#include <iostream>
using namespace std;
int main()
{

	unsigned int x, p, ip;

	for(x=1;x<=200;x++){
		if(x%2==0){
		p=p+x;}
		else{
		ip=ip+x;}
	}
	cout<<"suma de numeros pares:"<<p<<endl;
	cout<<"suma de numeros impares:"<<ip<<endl;
return 0;
}

