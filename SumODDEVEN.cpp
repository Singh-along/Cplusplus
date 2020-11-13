#include<iostream>
using namespace std;

int main() {
	long n;
	int rem, sumodd=0, sumeven=0;
	cin>>n;
	while(n!=NULL)
	{rem=n%10;
	 if(rem%2==0)
	 	sumeven+=rem;
	 else
	 	sumodd+=rem;
	 n/=10;
	}
	cout<<sumeven<<' '<<sumodd;
}

