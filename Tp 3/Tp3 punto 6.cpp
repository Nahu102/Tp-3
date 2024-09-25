#include <iostream>
using namespace std;
int main () {
	int rts=0;
	int num1=2;
	for(int y=2;y<=100;y+=2)
	{
	rts=rts+y;
	}
	for(int x=1;x<=50;x++)
	{
	cout<<"+"<<num1*x;
	}
	cout<<"="<<rts;
	return 0;
}
