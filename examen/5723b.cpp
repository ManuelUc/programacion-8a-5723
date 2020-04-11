#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
 {

	int l=0, t=0;
	srand(time(NULL));
	int lim_inf = 1;
	int lim_sup =100;
	
	for(int i=0;i<1000;i++)
	{
		int valor = lim_inf + rand()%(lim_sup + 1 -lim_inf);

			if(valor<=30)
				t=t+1;
			else
				l=l+1;
	}

	cout<<"victorias de la tortuga:"<<t<<endl;
	cout<<"victorias de la liebre:"<<l<<endl;
return 0;
}
