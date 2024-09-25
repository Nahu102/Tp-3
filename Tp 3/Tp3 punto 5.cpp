#include <iostream>
using namespace std;
int main () {
	int rts=0,rts2=0,rts3=0;
	int num1=2;
	for(int x=1;x<=50;x++)
	{
	cout<<" / "<<num1*x;
	}
	for(int y=2;y<=100;y+=2)
	{
	rts=rts+y;
	//lo que hace el if es si el valor "y" es igual a 0, al valor rts2 se le suma 1, hasta que me da el resultado de cuantos numeros pares hay
	if(y%2==0)
	{
		rts2=rts2+1;
	}
	//este if hace lo mismo que el anterior pero lo que hace es mostrar como resultado la cantidad de numeros impares
	if(y%1==0)
	{
		rts3=rts3+1;
	}
	}
	cout<<" / la cantidad de numeros pares es:"<<rts2;
	cout<<" / la cantidad de numeros impares es:"<<rts3;
	cout<<" / la suma es:"<<rts;
	return 0;
}
