#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
int main()
{
   char c;
   int space = 0, chars = 0, numbers = 0;
   cin.get(c);     // String entered
   cout <<endl; 
      while (c != '$')
	{
         if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
         chars++;
       }
         else if (c >= '0' && c <= '9'){
         numbers++;
       }
		 else if (c == ' ' || c == '\n'){
         space++;
       }
		cin.get(c);
    }
cout << chars << " "<< numbers <<" "<< space;
getch();
return 0;
}
