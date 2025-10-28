#include <iostream>
#include <string>
using namespace std;

// FUNCTION DEFINITIONS dengan FORMAL PARAMETERS
// --------------------------------------------------
// Formal parameters: nama, age
void displayUserInfo(string nama, int age) {
    cout << "Nama: " << nama << endl;
    cout << "Usia: " << age << " tahun" << endl;
}

// Formal parameters: panjang, lebar
double hitungLuasPersegiPanjang(double panjang, double lebar) {
    return panjang * lebar;
}

// Formal parameters: angka1, angka2, operator
double kalkulator(double angka1, double angka2, char operasi) {
    switch(operasi) {
        case '+': return angka1 + angka2;
        case '-': return angka1 - angka2;
        case '*': return angka1 * angka2;
        case '/': return angka1 / angka2;
        default: return 0;
    }
}

// Formal parameters: arr[], size
void tampilkanArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    // ACTUAL PARAMETERS dalam pemanggilan fungsi
    // --------------------------------------------------
    
    // Contoh 1: Actual parameters literal values
    cout << "=== Contoh 1 ===" << endl;
    displayUserInfo("Budi Santoso", 25);  // Actual parameters: "Budi Santoso", 25
    cout << endl;
    
    // Contoh 2: Actual parameters variables
    cout << "=== Contoh 2 ===" << endl;
    string namaMahasiswa = "Siti Aminah";
    int usiaMahasiswa = 22;
    displayUserInfo(namaMahasiswa, usiaMahasiswa);  // Actual parameters: namaMahasiswa, usiaMahasiswa
    cout << endl;
    
    // Contoh 3: Actual parameters dalam perhitungan
    cout << "=== Contoh 3 ===" << endl;
    double p = 10.5;
    double l = 5.2;
    double luas = hitungLuasPersegiPanjang(p, l);  // Actual parameters: p, l
    cout << "Luas persegi panjang: " << luas << endl;
    cout << endl;
    
    // Contoh 4: Actual parameters mixed (variables dan literal)
    cout << "=== Contoh 4 ===" << endl;
    double hasil = kalkulator(15.5, 3.2, '+');  // Actual parameters: 15.5, 3.2, '+'
    cout << "Hasil kalkulasi: " << hasil << endl;
    cout << endl;
    
    // Contoh 5: Actual parameters array
    cout << "=== Contoh 5 ===" << endl;
    int numbers[5] = {1, 2, 3, 4, 5};
    tampilkanArray(numbers, 5);  // Actual parameters: numbers, 5
    
    return 0;
}
