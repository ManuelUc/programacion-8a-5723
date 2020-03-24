#include <iostream>
#include <string>

using namespace std;

float numero(char *val)
{
	char t[10];
	for(int i=0;(i<sizeof(val)||9);i++)
	t[i] = val[i+1];
	return stof(t);
}

int main()
{
	char s[10];
	cin>>s;
	float tt =0;
	float f =0;
	while(cin)
	{
		f = numero(s);
		if(s[0]=='>')
			tt -= f;
		else
			tt += f;
	cin>>s;
	}
	cout<<"TOTAL:"<<tt<<endl;
	return 0;
}
