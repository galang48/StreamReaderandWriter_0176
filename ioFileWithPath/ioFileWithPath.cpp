#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string baris;
    string NamaFile;

    cout << "Masukan nama file : ";
    cin >> NamaFile;

    /// membuka file dalam mode menulis
    ofstream outfile;
    //menunjuk kesebuah nama file
    outfile.open(NamaFile + ".txt", ios::out);

    cout << ">= Menulis file, \'q\' untuk keluar" << endl;

    //unlimited loop untuk menulis
    while (true) {
        cout << "- ";
        // mendapatkan setiap karakter dalam satu baris
        if (baris == "q") break;
        //menulis dan memasukkan nilai dari 'baris' ke dalam file
        outfile << baris << endl;
    }
}

