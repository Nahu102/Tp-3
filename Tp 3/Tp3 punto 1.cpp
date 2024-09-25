#include <iostream>
using namespace std;
int main () {
	int aprobados,reprobados,nota;
	aprobados=0,reprobados=0;
	int f;
	for(f=1;f<=10;f++)
	{
	cout<<("ingrese el valor de la nota:");
	cin>>nota;
	if(nota>=7)
	{
	aprobados=aprobados+1;
	}
	else
	{
	reprobados=reprobados+1;
	}
	}
	cout<<("la cantidad de aprobados es:")<<aprobados;
	cout<<("  / la cantidad de reprobados es:")<<reprobados;
	return 0;
	}
