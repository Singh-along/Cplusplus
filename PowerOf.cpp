#include<iostream>
using namespace std;

int main() {
    long res=1;
	int x, n;
    cin>>x>>n;
    if(n>=0 && x>=0)
    {    
    for(int i=1; i<=n; i++)
    	{
         res*=x;
    	}
	}
	cout<<res;
}

