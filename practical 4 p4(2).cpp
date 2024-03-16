#include <iostream>
#include <string>
using namespace std;

string max(string a, string b) {
    return (a > b) ? a : b;
}

string max(string a, string b, string c) {
    return max(max(a, b), c);
}

int main() {
    string str1, str2, str3;
    cout << "Enter three strings: ";
    cin >> str1 >> str2 >> str3;

    cout << "The maximum string is: " << max(str1, str2, str3) << endl;

    return 0;
}
