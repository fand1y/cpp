#include <iostream>
#include <conio.h>
using namespace std;
int factorial(int n);
int main ()
{
	int n;
	cout << "Input n= ";
	cin >> n;
	cout << factorial(n);
	getche();
}

int factorial (int n) 
{ 
int fact;
if(n==1)
	return fact= 1;
	 
else
	fact= n *factorial(n-1); //fungsi rekurif
	  
return fact;
}
