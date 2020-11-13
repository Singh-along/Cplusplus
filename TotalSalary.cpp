#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int basic, allow;
	char a;
	cin>>basic>>a;
    if(a=='A')
        allow=1700;
    else if(a=='B')
        allow=1500;
    else 	
        allow=1300;
 basic = round(1.59*basic) ;
   int total = basic + allow ;
  cout << total ;
}

