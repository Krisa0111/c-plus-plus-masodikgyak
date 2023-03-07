#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

double decimalToDouble(string decimal) {
    // Check if the input string contains only whitespace, integer, and newline characters
    if (decimal.find_first_not_of(" \t\r0123456789") != string::npos) {
        return 0;
    }

    double result;
    stringstream ss(decimal);
    ss >> result;
    return result;
}


void uintToHex(unsigned int num, char* hex) {
    stringstream ss;
    ss << hex << num;
    string str = ss.str();
    strcpy(hex, str.c_str());
}


int main() {
    // decimal to double
    string decimal = "3.14159";
    double pi = decimalToDouble(decimal);
    cout << "Decimal: " << decimal << endl;
    cout << "Double: " << fixed << setprecision(5) << pi << endl;

    // unsigned int to hexadecimal char array
    unsigned int num = 3735928559;
    char hex[9]; // pre-allocate a char array to store the hexadecimal representation
    uintToHex(num, hex); // pass the unsigned int and the pre-allocated char array as parameters
    cout << "Unsigned int: " << num << endl;
    cout << "Hexadecimal: " << hex << endl;


    return 0;
}
