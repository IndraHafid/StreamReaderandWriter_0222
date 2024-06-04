// ioFile.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string baris;

    //memebuat file dalam mode menulis.
    ofstream outfile;
    //menunjuk ke sebuah nama file.
    outfile.open("contohfile.txt");

    cout << ">= Menulis File, \'q\' untuk keluar" << endl;

    //unlimited loop untuk menuls 
    while (true) {
        //mendapatkan karakter dalam satu baris 
        getline(cin, baris);
        //loop akan berhenti jika anda memasukan karakter q
        if (baris == "q") break;
        //menulis dan memasukan nilai dari 'baris' kedalam file
        outfile << baris << endl;
    }

    //selesai dalam menulis sekarang tutup filenya
    outfile.close();

    //membuka file dalam mode membaca 
    ifstream infile;
    //menunjuk ke sebuah file
    infile.open("contohfile.txt");

    cout << endl << ">= Membuka dan membaca file" << endl;

    //jika file ada maka
    if (infile.is_open())
    {
        //melakukan perulangan setiap baris
        while (getline(infile, baris))
        {
            //dan tampilkan disini
            cout << baris << '\n';
        }
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
