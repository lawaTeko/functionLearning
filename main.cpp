#include <iostream>
using namespace std;

void panjangkalilebar(double p, double l){
	p * l;
	cout << "hasilnya = " << p * l ;
}

int main(){
	
	double panjang, lebar;
	char repeat_;
	
	do {
	cout << "================================================" << endl;
	cout << "simple program to calculate the area of a square" << endl;
	cout << "================================================" << endl;
	
	cout << "\nmasukan panjang = ";
	cin >> panjang;
	cout << "masukan lebar   = ";
	cin >> lebar;
	
	cout << endl;
	
	panjangkalilebar(panjang, lebar);
	
	cout << endl;
	
	cout << "\nApakah ingin mengulang perhitungan? Yes/No (y/n) : ";
	cin >> repeat_;
	
	}while (repeat_ == 'y' || repeat_ == 'Y');
	
	cout << "Selesai, Terima kasih!" << endl;
	
	cin.get();
	return 0;
}
