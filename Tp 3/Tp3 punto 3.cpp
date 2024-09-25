#include <iostream>
using namespace std;
int main () {
	float f;
	cout<<("ingrese un valor:");
	cin>>f;
	while(f>0.01)
	{
	f=f/2;
	}
	cout<<("el valor del numero es:")<<f;
	return 0;
}
