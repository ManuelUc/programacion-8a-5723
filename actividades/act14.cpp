#include<iostream>
using namespace std;
int main()
{

	int i, par=0, x, y=0;
	cout<<"introducir numeros";
	cin>>x;
	while(cin){
		if(x%2==0)
		par+=+1;
		if(x%2==0&&par<=10)
		y=y+x;
		cin>>x;
		}
	cout<<"suma de los numeros pares:"<<y<<endl;

return 0;

}
