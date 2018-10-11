#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main()

 {
    int a;
    cout << "menentukan bilangan bulat genap atau ganjil "<<endl;
    cout << "masukkan bilangan : "; cin >> a;
    
    
    if ( a % 2 == 0 )
        cout << "bilangan genap " << endl;
    else
        cout << "bilangan ganjil " << endl;
    
    return 0;
}



