#include <iostream>
using namespace std;

int main() {
    char odpoved;
    
    
    cout << "Jaké mesto je nejvetsi?" << endl;
    cout << "a) Brno" << endl;
    cout << "b) Praha" << endl;
    cout << "c) Olomouc" << endl;
    cin >> odpoved;
    if (odpoved == 'a' || odpoved == 'b' || odpoved == 'c') {
        if (odpoved == 'a') {
            cout << "ne" << endl;
        } else if (odpoved == 'b') {
            cout << "ano" << endl;
        } else {
            cout << "ne" << endl;
        }
    } else {
        cout << "ne" << endl;
    }
    
    cout << "Jake mesto je nejmensi?" << endl;
    cout << "a) Praha" << endl;
    cout << "b) Olomouc" << endl;
    cout << "c) Brno" << endl;
    cin >> odpoved;
    if (odpoved == 'a' || odpoved == 'b'|| odpoved == 'c') {
        if (odpoved == 'a') {
            cout << "ne" << endl;
        } else if (odpoved == 'b') {
            cout << "ano" << endl;
        } else {
            cout << "ne" << endl;
        }
    } else {
        cout << "ne" << endl;
    }
    
    cout << "Ktere z mest je hlavni mesto?" << endl;
    cout << "a) Praha" << endl;
    cout << "b) Brno" << endl;
    cout << "c) Olomouc" << endl;
    cin >> odpoved;
    if (odpoved == 'a' || odpoved == 'b' || odpoved == 'c') {
        if (odpoved == 'a') {
            cout << "ano" << endl;
        } else if (odpoved == 'b') {
            cout << "ne" << endl;
        } else {
            cout << "ne" << endl;
        }
    } else {
        cout << "ne" << endl;
    }
    
    return 0;
}