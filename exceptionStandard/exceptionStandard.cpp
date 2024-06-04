// exceptionStandard.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <exception>
//untuk objek exception yang akan digunakan
#include <array>
//untuk obyek array yang akan kita gunakan
using namespace std;

int main()
{
    cout << "Awal Program" << endl; //penanda 1:...
    try {
        array<int, 3> data = {3, 5, 7};
        //pesan array iteger 3 elemen
        cout << data.at(5) << endl;
        //memanggil array elemen ke 5
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
