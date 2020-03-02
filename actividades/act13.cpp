#include <iostream>
using namespace std;
int main()
{

	int  x, i;
 	float n, med, y=0;

	cout<<"cantidad de alumnos:"<<endl;
	cin>>x;
	cout<<"notas:"<<endl;
	for(i=0;i<=x;i++){
	cin>>n;
	y=y+n;
	}
	med=y/x;
	cout<<"promedio de salon:"<<med<<endl;


return 0;
}
