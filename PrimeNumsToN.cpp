#include <iostream>
using namespace std;

int main(){
	int n, count=0;
    cin>>n;
    for(int i=2; i<=n;i++)
    {	count=0;
        for(int j=2;j<=i;j++)
        {	
        	if ((i%j) == 0)
            	count++;
        }
        if(count<2)
        	cout<<i<<endl;
    }
    
}

