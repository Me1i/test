#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Jepni nje numer te plote pozitiv: ";
    cin >> n;
    int s = 0;
    int i = 1;
    while (i <= n) {
        s = s + i;
        i += 2;
    }
    cout << "Shuma e numrave nga 1 deri ne " << n << " eshte: " << s << endl;
    return 0;
}