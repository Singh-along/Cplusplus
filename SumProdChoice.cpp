#include <iostream>
#include <conio.h>
using namespace std;
int sums(int n)
{
	int S=0;
	for(int i=1; i<=n; i++)
		S+=i;
	return S;
}
int prods(int n)
{
	int P=1;
	for(int i=1; i<=n; i++)
		P*=i;
	return P;
}
int main()
{
	int N, C, S=0, P=1;
	cin>>N>>C;
	if(C==1)
		cout<<sums(N);
	else if(C==2)
		cout<<prods(N);
	else
		cout<<"-1";	
	return 0;
}
