#include <iostream>
using namespace std;
int main () {
	int rts1=0;
	int rts2=0;
	int num1=2,num2=1;
	for(int x=1;x<=150;x++)
	{
	cout<<"+"<<num1*x;
	rts1=rts1+(num1*x);
	if(x%1==0)
	{
		rts2=rts2+1;
	}
	}
	cout<<"="<<rts1;
	cout<<" / la cantidad de numeros impares es:"<<rts2;
	return 0;
}
