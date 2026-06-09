#include <iostream>

using namespace std;

void helloCPP(int);

int main() {
    int times;
    cout << "enter int"<<endl;
    cin >> times;
    helloCPP(times);
}

void helloCPP(int n) {
    for (int i=0; i < n; i++)
    cout << "hello c++"<<endl;
}