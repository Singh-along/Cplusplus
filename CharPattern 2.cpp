#include<iostream>
using namespace std;


int main()
	{
	 int n;
     cin>>n; char ch = 'A' + n;
	 for(int i=1; i<=n; i++)
    	{
		 ch--;  
         char x=ch;
		 for(int j=1; j<=i;j++)
        	{        	
			 cout<<x++;
			}
         cout<<endl;
        }
        
   	}



