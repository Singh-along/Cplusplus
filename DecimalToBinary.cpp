#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int bin[32]; 
    int dec, i = 0; 
	cin>>dec;
    while (dec > 0) 
	{ 
        bin[i] = dec % 2; 
        dec = dec/2; 
        i++; 
    } 
    for (int j = i - 1; j >= 0; j--) 
        cout << bin[j]; 
    getch();
    return 0;
}

