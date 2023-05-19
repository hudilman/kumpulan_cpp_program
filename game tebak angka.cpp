#include <iostream>
#include <cstdlib>
#include <ctime>
 
#define MINACAK 1
#define MAXACAK 10
   
using namespace std;
   
int random_jawaban(){
	srand(time(NULL));
    int jawaban = (rand()%(MAXACAK-MINACAK+1)) + MINACAK;
    return jawaban;
}
   
int main() {
    
    cout << "SELAMAT DATANG DI GAME TEBAK ANGKA" << endl;
	cout << "==================================" << endl << endl;
	     
	cout << "Angka yang akan ditebak berada dalam batasan : " << MINACAK << " sampai " << MAXACAK << endl << endl;

    int tebakan = 10;
	bool menang = false;
	int angka;
	
	do {
	    cout << "Masukkan tebakan anda: ";
	    cin >> angka;
	    tebakan--;
	     
	    if (angka==random_jawaban()) {
	        menang = true;
	        cout << "Benar!" << endl;
	    } else {
	        if (angka<random_jawaban()) {
	            cout << "Tebakan anda terlalu kecil" << endl;
	        } else {
	            cout << "Tebakan anda terlalu besar" << endl;
	        }
	        cout << "Kesempatan tersisa : " << tebakan << endl;
	    }
	    cout << endl;
	     
	} while ((tebakan>0) && (!menang));
	 
	if (menang) {
	    cout << "Selamat, Anda telah memenangkan permainan ini!" << endl;
	} else {
	    cout << "Maaf, Anda kurang beruntung!" << endl;
	    cout << "Angka yang akan ditebak adalah " << random_jawaban() << endl;
	}
	
    return 0;
}
