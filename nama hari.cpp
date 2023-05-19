#include <iostream>
 
int main() {
 
    int hari;
 	std::cout<<"Mohamad Ilman HUda - 201011402171 \n\n";
    std::cout << "Masukkan hari dalam angka : ";
    std::cin >> hari;
 
    switch (hari) {
 
        case 1:
 
            std::cout << "\nHari ke 1 adalah Senin.\n" << std::endl;
            break;
 
        case 2:
 
            std::cout << "\nHari ke 2 adalah Selasa.\n" << std::endl;
            break;
 
        case 3:
 
            std::cout << "\nHari ke 3 adalah Rabu.\n" << std::endl;
            break;
 
        case 4:
 
            std::cout << "\nHari ke 4 adalah Kamis.\n" << std::endl;
            break;
 
        case 5:
 
            std::cout << "\nHari ke 5 adalah Jumat.\n" << std::endl;
            break;
 
        case 6:
 
            std::cout << "\nHari ke 6 adalah Sabtu.\n" << std::endl;
            break;
 
        case 7:
 
            std::cout << "\nHari ke 7 adalah Minggu.\n" << std::endl;
            break;
 
        default:
 
            std::cout << "\nKode salah! hanya ada 7 hari dalam seminggu!\n" << std::endl;
            break;
    }
 
    return 0;
}
