// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
int main() {
    // Write C++ code here
    SetConsoleOutputCP(CP_UTF8);
    
    int nilai;

    cout<< "═════════ INPUT NILAI ═════════";
    cout<< "Masukkan Nilai ";
    cin>> nilai;
    if (nilai>90) {
        cout<<"Nilai A"<<endl;
    }
    else if (nilai>80) {
        cout<<"Nilai B"<<endl;
    }
    else if (nilai>70) {
        cout<<"Nilai C"<<endl;
    }
    else {
        cout<<"Nilai D"<<endl;
    }
    cout<< "◼◻◼◻◼◻◼◻◼◻◼◻◼◻◼◻◼◻◼◻◼";
    system("pause");
    return 0;
}
