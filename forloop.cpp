#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    string words[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for(int i=a; i<=b; i++) {
        if(i <= 9) {
            cout << words[i] << endl;
        } else if (i > 9 && i % 2 == 0) {
            cout << "even" << endl;
        } else if (i > 9 && i % 2 == 1) {
            cout << "odd" << endl;
        }
    }
    return 0;
}