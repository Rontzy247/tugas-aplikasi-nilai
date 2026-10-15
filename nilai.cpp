// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int nilai;
    cout<< "Masukkan Nilai ";
    cin>> nilai;
    if (nilai>90) {
        cout<<"Nilai A";
    }
    else if (nilai>80) {
        cout<<"Nilai B";
    }
    else if (nilai>70) {
        cout<<"Nilai C";
    }
    else {
        cout<<"Nilai D";
    }

    return 0;
}
