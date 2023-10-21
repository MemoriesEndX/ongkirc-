#include <iostream>
#include <string>
#include<conio.h>
#include <cmath>
using namespace std;

// Fungsi untuk menghitung biaya pengiriman dengan ongkir Progresif
double ongkirProgresif(double berat) {
    double biaya = 0;
    if (berat <= 5) {
        biaya = 5000 * berat;
    } else if (berat > 5 && berat <= 10) {
        biaya = 5000 * 5 + 4500 * (berat - 5);
    } else if (berat > 10 && berat <= 30) {
        biaya = 5000 * 5 + 4500 * 5 + 4000 * (berat - 10);
    } else if (berat > 30) {
        biaya = 5000 * 5 + 4500 * 5 + 4000 * 20 + 3500 * (berat - 30);
    }
    return biaya;
}

// Fungsi untuk menghitung biaya pengiriman dengan ongkir Regresif
double ongkirRegresif(double berat) {
    double biaya = 0;
    if (berat <= 5) {
        biaya = 5500 * berat;
    } else if (berat > 5 && berat <= 10) {
        biaya = 5500 * 5 + 5000 * (berat - 5);
    } else if (berat > 10 && berat <= 30) {
        biaya = 5500 * 5 + 5000 * 5 + 4500 * (berat - 10);
    } else if (berat > 30) {
        biaya = 5500 * 5 + 5000 * 5 + 4500 * 20 + 4000 * (berat - 30);
    }
    return biaya;
}

// Fungsi untuk menghitung biaya pengiriman dengan ongkir Volume metrik
double ongkirVolumeMetrik(double panjang, double lebar, double tinggi) {
    double volume = panjang * lebar * tinggi;
    double berat = volume / 6000;
    return 5000 * berat;
}
void menu1(){
    double berat, panjang, lebar, tinggi;
    cout << "**********************************************************************" << endl;
    cout << "MASUKAN BERAT PAKET(KG): ";
    cin >> berat;
    cout << "**********************************************************************" << endl;


    double ongkirP = ongkirProgresif(berat);

    cout << "**********************************************************************" << endl;
    cout << "RINCIAN BIAYA PENGIRIMAN : " << endl;
    cout << "**********************************************************************" << endl;
    cout << "ONGKIR SI REGULER: " << ongkirP << endl;
    cout << "**********************************************************************" << endl;
    cout << "SI REGULER ANDA AKAN SAMPAI ESTIMASI WAKTU 5 HARI"<<endl;
    cout << "**********************************************************************" << endl;
    getch();
    system("cls");

}void exit(){
    cout<<"TERIMAKASIH TELAH MENGGUNAKAN PROMGRAM INI!!!"<<endl;
    exit(0);
}void err(){
    cout<<"INPUT YANG ANDA MASUKAN TIDAK BENAR!!!"<<endl;
}
void menu2(){
    double berat, panjang, lebar, tinggi;
    cout << "*********************************************************************" << endl;
    cout << "MASUKAN BERAT PAKET(KG): ";
    cin >> berat;
    cout << "*********************************************************************" << endl;


    double ongkirR = ongkirRegresif(berat);

    cout << "*********************************************************************" << endl;
    cout << "RINCIAN BIAYA PENGIRIMAN : " << endl;
    cout << "*********************************************************************" << endl;
    cout << "ONGKIR SI CIPAT : " << ongkirR << endl;
    cout << "*********************************************************************" << endl;
    cout << "SI CEPAT ANDA AKAN SAMPAI ESTIMASI WAKTU 3 HARI"<<endl;
    cout << "*********************************************************************" << endl;
    getch();
    system("cls");
}
void menu3(){
    double berat, panjang, lebar, tinggi;
    cout << "*********************************************************************" << endl;
    cout << "MASUKAN BERAT PAKET(KG): ";
    cin >> berat;
    cout << "*********************************************************************" << endl;
    cout << "MASUKAN PANJANG PAKET (CM): ";
    cin >> panjang;
    cout << "*********************************************************************" << endl;
    cout << "MASUKAN LEBAR PAKET (CM): ";
    cin >> lebar;
    cout << "*********************************************************************" << endl;
    cout << "MASUKAN TINGGI PAKET (CM): ";
    cin >> tinggi;


    double ongkirV = ongkirVolumeMetrik(panjang, lebar, tinggi);

    cout << "*********************************************************************" << endl;
    cout << "RINCIAN BIAYA PENGIRIMAN : " << endl;
    cout << "*********************************************************************" << endl;
    cout << "ONGKIR SI CARGO: " << ongkirV << endl;
    cout << "*********************************************************************" << endl;
    cout << "SI CARGO ANDA AKAN SAMPAI ESTIMASI WAKTU 2 HARI"<<endl;
    cout << "*********************************************************************" << endl;
    getch();
    system("cls");
}
int main() {
    string nama;
    int menu;
    bool isExit;

    cout << "--------------------------------------------------------------------" << endl;
    cout << "\t\t\t SELAMAT DATANG \t\t\t" << endl;
    cout << "\t\t MENGHITUNG HARGA ONGKIR PAKET \t" << endl;
    cout << "\t\t MAHASISWA INFORMATIKA UNITIRTA \t" << endl;
    cout << "---------------------------------------------------------------------" << endl;

    cout << "MASUKAN NAMA KAMU: ";
    getline(cin, nama);

    do{

    cout << "---------------------------------------------------------------------" << endl;
    cout <<"SELAMAT DATANG :  " << nama << endl;
    cout << "---------------------------------------------------------------------" << endl;
    cout<<"SILAHKAN MEMILIH MENU"<<endl;
    cout<<"1.MENU PENGITUNGAN ONGKIR SI REGULER : "<<endl;
    cout<<"2.MENU PENGHITUNGAN ONGKIR SI CEPAT : "<<endl;
    cout<<"3.MENU PENGHITUNGAN ONGKIR CARGO : "<<endl;
    cout<<"4.EXIT: "<<endl;
    cout << "---------------------------------------------------------------------" << endl;
    cout<<"MASUKAN PILIHAN MENU : "<<endl;
    cin>>menu;
            if(menu==1){
            menu1();
            }else if(menu==2){
            menu2();
            }else if(menu==3){
            menu3();
            }else if(menu==4){
            exit();
            }else{
            err();
            }


    }while(!isExit);
    return isExit;
}
