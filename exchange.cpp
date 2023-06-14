#include <iostream>
using namespace std;

int main() {
    int input, output;
    cout << "USD: ";
    cin >> input;
    output = input * 30.76;
    cout << input << " USD would be " << output << " NTD.";
    return 0;
}
