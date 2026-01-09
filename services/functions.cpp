#include <iostream>
using namespace std;

void hi() {
    int value = 10;
    for (int i = 0; i < value; i++) {
        cout << "hi: i = " << i << endl;
    }
}

void hello() {
    int value = 10;
    for (int i = 0; i < value; i++) {
        cout << "hello: i = " << i << endl;
    }
}

int main() {
    hi();
    hello();
    return 0;
}