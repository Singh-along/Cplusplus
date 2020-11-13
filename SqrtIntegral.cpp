#include <iostream>
#include <conio.h>
using namespace std;
int main()
{	int x;
	cin>>x;
    if (x == 0 || x == 1) 
    	cout<<x; 
    int i = 1, root = 1; 
    while (root <= x) 
    { 
      i++; 
      root = i * i; 
    }
    cout<<i-1;
    getch();
    return 0;
}

