// lawaTeko, Kairatu
// menghitung luas persegi sederhana
#include <iostream>
using namespace std;

void panjangkalilebar(double p, double l){
	p * l;
	cout << "hasilnya = " << p * l ;
}

int main(){
	
	double lenght, width;
	char repeat_;
	
	do {
	cout << "================================================" << endl;
	cout << "simple program to calculate the area of a square" << endl;
	cout << "================================================" << endl;
	
	cout << "\nmasukan panjang = ";
	cin >> lenght;
	cout << "masukan lebar   = ";
	cin >> width;
	
	cout << endl;
	
	panjangkalilebar(lenght, widht);
	
	cout << endl;
	
	cout << "\nApakah ingin mengulang perhitungan? Yes/No (y/n) : ";
	cin >> repeat_;
	
	}while (repeat_ == 'y' || repeat_ == 'Y');
	
	cout << "Selesai, Terima kasih!" << endl;
	
	cin.get();
	return 0;
}
