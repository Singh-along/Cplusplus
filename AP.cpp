#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int arr[50], x,i=1,j=0, temp;
	cin>>x;
	while(j<x)
	{
		temp= (3 * i) + 2;  // AP - 3(N) + 2
		if(temp%4 != 0)
		{
			arr[j]=temp;
			i++; j++;
		}
		else
			i++;
	}
	for(int k=0;k<x;k++)
		cout<<arr[k]<<' ';
	return 0;
}
