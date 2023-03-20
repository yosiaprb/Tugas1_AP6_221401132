#include <iostream>

using namespace std;

int main() {
    int a = 6;
    int b = 3;
    int c, d, e;

    cout<<"Hasil dari 6 + 3   = "<<a + b<<endl;     //penjumlahan
    
    cout<<"Hasil dari 6 - 3   = "<<a - b<<endl;     //pengurangan
    
    cout<<"Hasil dari 6 * 3   = "<<a * b<<endl;     //perkalian
    
    cout<<"Hasil dari 6 / 3   = "<<a / b<<endl;     //pembagian
    
    cout<<"Hasil dari 6 % 3   = "<<a % b<<endl;     //sisa bagi

    c = a & b;  //bitwise and
    d = a | b;  //bitwise or
    e = a ^ b;  //bitwise xor
    
    cout<<"Hasil dari 6 AND 2 = "<<c<<endl;
    
    cout<<"Hasil dari 6 OR 2  = "<<d<<endl;
    
    cout<<"Hasil dari 6 XOR 2 = "<<e<<endl;
    
    return 0;
}