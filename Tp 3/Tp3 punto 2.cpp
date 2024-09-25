#include <iostream>
using namespace std;
int main () {
	int rta1,rta2,num1;
	int max,min;
	cout<<"\t\t\t\t\tingrese 10 valores"<<endl;
	for(int i=1;i<=10;i++)
	{
		cout<<("\ningrese un valor:");
		cin>>num1;
		rta1=rta1+num1;
		if(i==1)
		{
			min=num1;
			max=num1;
		}
		if(num1>max)
		{
			max=num1;
		}
		else if(num1<min)
		{
			min=num1;
		}
	}
	rta2=rta1/10;
	cout<<"\n-----------------------------------------------------"<<endl;
	cout<<("\nla suma de todos los valores es:")<<rta1<<endl;
	cout<<("\nel promedio de todos los valores es:")<<rta2<<endl;
	cout<<("\nel valor maximo es:")<<max<<endl;
	cout<<("\nel valor minimo es:")<<min<<endl;
	return 0;
}
