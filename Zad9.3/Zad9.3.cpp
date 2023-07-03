#include <iostream>
#include<locale.h>
#include<vector>
#include<cstdlib>
#include<ctime>
#include<algorithm>
using namespace std;
void autor(void) {
    cout << endl;
    for (int i = 1; i <= 120; i++) cout << "*";
    cout << "Autor programu: Simon Dudek\n\n";
    for (int i = 1; i <= 120; i++) cout << "*";
    cout << "\n\n";
}
void wyswietl(int i) {
    cout << i << endl;
}
int main() {
    int temp;
    setlocale(LC_ALL, "");
    autor();
    vector<int> B;
    srand(time(NULL));
    B.insert(B.begin(), rand() % (10000 - 0 + 1) + 0);
    for (int i = 1;i < 1000;i++) {
        temp = rand() % (10000 - 0 + 1) + 0;
        if (temp <= B[0]) {
            B.insert(B.begin(), temp);
        }
        else {
            int x = 1;
            while (x < B.size() && temp > B[x]) {
                x++;
            }
            B.insert(B.begin() + x, temp);
        }
    }
    for_each(B.begin(), B.end(), wyswietl);
    system("pause");
    return 0;
}