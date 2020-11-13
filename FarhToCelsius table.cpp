#include<iostream>
using namespace std;


int main(){
	int S, E, W; 
	cin>>S>>E>>W;
	int celsius = 0;
	if(S>=0 && S<=80 && E>=S && E<=900 && W>=0 && W<=40)
    {for (int i = S ; i <= E ; i += W) 
		{
		celsius = (static_cast<double>(5)/9) * (i - 32);
		cout <<i<<"\t"<< celsius<<"\n";
		}
    }
    else
        exit(0);
     return 0;
}



