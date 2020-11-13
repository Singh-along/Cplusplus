#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int bin, dec=0, b=1;
	cin>>bin;
	while(bin!=0)
	{
		int l = bin%10;
		bin = bin/10;
		dec += l*b;
		b*=2;
	}
	cout<<dec;
    getch();
	return 0;
}

