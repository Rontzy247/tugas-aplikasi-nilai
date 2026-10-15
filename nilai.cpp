// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int nilai;
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

    system("pause");
    return 0;
}
