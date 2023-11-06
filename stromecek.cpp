#include <iostream>
#include <string>

using namespace std;

void vanocnistromecek (int vyska, int sirkakmene, int vyskakmene) {
    for (int i = 0; i < vyska; i++) {
        for (int j = 0; j < vyska - i - 1; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "#";
        }
        cout << endl;
    }
}

int main () {
    int vyska, sirkakmene, vyskakmene;
    cout << "zadejte vysku koruny stromu: ";
    cin >> vyska;
    cout << "zadejte sirku kmene: ";
    cin >> sirkakmene;
    cout << "zadejte vysku kmene: ";
    cin >> vyskakmene;

    vanocnistromecek (vyska, sirkakmene, vyskakmene);
    return 0;
}