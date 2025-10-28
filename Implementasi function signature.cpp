#include <iostream>
#include <string>
#include <vector>
using namespace std;

// FUNCTION SIGNATURES (Deklarasi/Prototipe)
// --------------------------------------------------
// Signature: return_type function_name(parameter_types);
double hitungTotalHarga(double harga, int kuantitas);
void tampilkanDataMahasiswa(string nama, int nim, double ipk);
bool isValidEmail(string email);
vector<int> filterBilanganGenap(const vector<int>& numbers);
void prosesData();

// FUNCTION DEFINITIONS (Implementasi)
// --------------------------------------------------
double hitungTotalHarga(double harga, int kuantitas) {
    return harga * kuantitas;
}

void tampilkanDataMahasiswa(string nama, int nim, double ipk) {
    cout << "Nama: " << nama << endl;
    cout << "NIM: " << nim << endl;
    cout << "IPK: " << ipk << endl;
    cout << "------------------------" << endl;
}

bool isValidEmail(string email) {
    // Validasi sederhana format email
    return email.find('@') != string::npos && 
           email.find('.') != string::npos;
}

vector<int> filterBilanganGenap(const vector<int>& numbers) {
    vector<int> hasil;
    for(int num : numbers) {
        if(num % 2 == 0) {
            hasil.push_back(num);
        }
    }
    return hasil;
}

void prosesData() {
    cout << "Memproses data..." << endl;
    // Implementasi proses data
}

// OVERLOADED FUNCTION SIGNATURES
// --------------------------------------------------
int tambah(int a, int b);
double tambah(double a, double b);
string tambah(string a, string b);

// OVERLOADED FUNCTION DEFINITIONS
// --------------------------------------------------
int tambah(int a, int b) {
    return a + b;
}

double tambah(double a, double b) {
    return a + b;
}

string tambah(string a, string b) {
    return a + b;
}

// CLASS DENGAN METHOD SIGNATURES
// --------------------------------------------------
class Kalkulator {
private:
    double memory;
    
public:
    // Constructor signature
    Kalkulator();
    
    // Method signatures
    double tambah(double a, double b);
    double kurang(double a, double b);
    double getMemory() const;
    void setMemory(double value);
    void reset();
};

// CLASS METHOD DEFINITIONS
// --------------------------------------------------
Kalkulator::Kalkulator() : memory(0) {}

double Kalkulator::tambah(double a, double b) {
    memory = a + b;
    return memory;
}

double Kalkulator::kurang(double a, double b) {
    memory = a - b;
    return memory;
}

double Kalkulator::getMemory() const {
    return memory;
}

void Kalkulator::setMemory(double value) {
    memory = value;
}

void Kalkulator::reset() {
    memory = 0;
}

int main() {
    // Demonstrasi penggunaan fungsi-fungsi
    cout << "=== DEMONSTRASI FUNCTION SIGNATURE ===" << endl;
    
    // Menggunakan fungsi hitungTotalHarga
    double total = hitungTotalHarga(25000, 3);
    cout << "Total harga: Rp " << total << endl;
    
    // Menggunakan fungsi tampilkanDataMahasiswa
    tampilkanDataMahasiswa("Ahmad Rizki", 12345, 3.75);
    tampilkanDataMahasiswa("Dewi Lestari", 12346, 3.82);
    
    // Menggunakan fungsi isValidEmail
    string email1 = "user@example.com";
    string email2 = "invalid-email";
    cout << "Email '" << email1 << "' valid: " << boolalpha << isValidEmail(email1) << endl;
    cout << "Email '" << email2 << "' valid: " << boolalpha << isValidEmail(email2) << endl;
    
    // Menggunakan fungsi filterBilanganGenap
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> genap = filterBilanganGenap(numbers);
    cout << "Bilangan genap: ";
    for(int num : genap) {
        cout << num << " ";
    }
    cout << endl;
    
    // Demonstrasi overloaded functions
    cout << "tambah(5, 3) = " << tambah(5, 3) << endl;
    cout << "tambah(2.5, 3.7) = " << tambah(2.5, 3.7) << endl;
    cout << "tambah('Hello', ' World') = " << tambah("Hello", " World") << endl;
    
    // Demonstrasi class dengan method signatures
    Kalkulator calc;
    cout << "Kalkulator: 10 + 5 = " << calc.tambah(10, 5) << endl;
    cout << "Memory value: " << calc.getMemory() << endl;
    calc.reset();
    cout << "After reset - Memory value: " << calc.getMemory() << endl;
    return 0;
}
