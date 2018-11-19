#include <iostream>
using namespace std;
int main()
{
	cout <<"---------------------------TABEL PERKALIAN------------------------------\n";

	for(int i=1;i<=10;i++)
		{
		cout << endl;
			for(int j=1;j<=5;j++)
			{
			cout << i << "x" << j << "=" << i*j <<"\t\t";
			}
		}
		cout<<endl;
			for(int i=1;i<=10;i++)
			{
				cout << endl;
				for(int j=6;j<=10;j++)
				{	
					cout<< i << "x" << j << "=" << i*j << "\t\t";
				}	
			}
	cin.get();
	return 0;
	
}
