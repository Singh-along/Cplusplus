#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int num , rev=0;
    cin>>num;
    while(num>0){
        rev = rev*10 + num%10;
        num = num / 10;
    }
    cout<<rev;
    getch();
	return 0;
}

