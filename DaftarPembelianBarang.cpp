#include <iostream>
#include <iomanip>

using namespace std;

int main() {
int i,j,k;
string nama,alamat;
string nama_barang[10]; 
double barang[10],satuan[10],hasil[10]; 

double total=0;
double diskon=0;
double netto=0;

cout << "Input : \n";
cout << "Nama Toko : ";
getline(cin,nama);
cout << "Alamat : ";
getline(cin,alamat);

for (i=0;;i++) //looping penginputan data
{

	cout << "\n";
	cout << "Nama Barang : ";
	cin >> nama_barang[i];
	if(nama_barang[i] =="habis") //if untuk memberhentikan input
	{
		satuan[i]= 0;
		hasil [i]=0;
		break;
	}
	cout << "Jumlah Barang : ";
	cin >> barang[i];
	cout << "Jumlah Harga Satuan : ";
	cin >> satuan[i];
}


cout << "\n\t\tDAFTAR PEMBELIAN BARANG\n";
cout << "Nama : "<< nama <<"\t\t\tAlamat : "<< alamat;
cout << "\n";
cout << setw(70) << setfill('-') << "\n";
cout <<"No.\tNAMA BARANG\tJUMLAH\t HARGA SATUAN\t JUMLAH HARGA\n";
cout << setw(70) << setfill('-') << "\n";

for(k=0;k<i;k++) //menampilkan hasil input
{
	hasil[k] = barang[k]*satuan[k];
	cout << k+1 << "\t" << nama_barang[k] << "\t\t" << barang[k]<< "\t " << satuan[k]<<"\t\t " << hasil[k] <<"\n";
}

for(j=0;j<i;j++)//menjumlahkan data pada array hasil
{
	total = total+hasil[j];

}

if (total>50000 && total<100000) //if untuk harga
    {
        diskon = total * 5 / 100;
    }
else if (total>100000) //if untuk harga
    {
        diskon = total * 10 / 100;
    }

netto = total - diskon ;

cout << "\n\nTOTAL HARGA = \t" << total << "\n";
cout << "DISKON = \t" << diskon << "\n";
cout << "HARGA NETTO = \t" << netto << "\n";

cin.get();
return 0;
}
