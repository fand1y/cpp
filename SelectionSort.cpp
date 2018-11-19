#include <iostream>
#include <iomanip>
using namespace std;
const int i=5;
int main(){

const int n=5; 
float save, x[n+1]={0.0, -0.5, -0.9, 0.3, 1.9, -0.3 }; //bilangan yang akan disort
int min_pos, i, j,pass;
for(int pass=1;pass<n;pass++)
	{
	min_pos=pass;
	for(int i=pass+1;i<=n;i++)//pola pembandingan
	{
		min_pos=pass;
		if(x[i]<x[min_pos])
		{
			min_pos=i;
		}
	save = x[pass];
	x[pass]= x[min_pos];
	x[min_pos]= save;
   }
}
   for (int i=1;i<=n;i++) { 
   cout << setw(5) << right << x[i] << endl; 
   }
	
   return 0;
}
