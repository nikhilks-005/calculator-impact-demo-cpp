#include <iostream>
using namespace std;

void hi() {
    for (int i = 0; i < 5; i++) {
        cout << "hi: i = " << i << endl;
    }
}

void hello() {
    // for (int i = 0; i < 5; i++)
    for (int i=0;i<10;i++)
    {
        cout << "hello: i = " << i << endl;
    }
}

int main() {
    hi();
    hello();
    return 0;
}