#include <iostream>

using namespace std;

int main()
{
    float a,b;
    char aritmatika;

    cout << "Calculator By Fandly \n \n";

    // memasukkan input
    cout << "Masukkan nilai pertama: ";
    cin >> a;
    
    cout << "Pilih Operator +,-,/,*: ";
    cin >> aritmatika;
    
    cout << "Masukkan nilai kedua: ";
    cin >> b;

    cout << "\nHasil perhitungan: ";
    cout << a << aritmatika << b;
    
    if (aritmatika == '+'){
    	hasil = a+b;
	}else if (aritmatika == '-'){
		hasil = a-b;
	}else if (aritmatika == '/'){
		hasil = a/b;
	}else if (aritmatika == '-'){
		hasil = a*b;
	}
	
	cout << "=" << hasil << endl;
    cin.get();
    return 0;
}
