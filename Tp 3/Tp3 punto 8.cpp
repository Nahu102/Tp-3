#include <iostream>
using namespace std;
int main () {
	double x,rta,num1;
	cout<<"ingrese el primer valor:";
	cin>>num1;
	x=num1;
	for(int i=1;i<5;i++)
	{
		num1=num1*x;
	}
	cout<<x<<" elevado a la quinta es igual a "<<num1;
	return 0;
}
