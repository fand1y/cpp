#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int nilai,a;
	
	cout << "Masukkan Batas Segitiga = "; cin >> nilai;
	
	for (int i=0;i<=nilai;i++)
	{
		for (int k=0;k<= (2*nilai)-(2*i);k++) //space
		{
		cout << " ";
		}
		for (int j=0;j<=i;j++)//looping angka
		{
			if(j==0||i==j)
			{
			a=1;
			}
			else
			{
			a=a*(i+1-j)/j;
			}
			cout  <<  "  " << a;
			
		}
		cout << "\n";
	}
	getch();
	return 0;
}
