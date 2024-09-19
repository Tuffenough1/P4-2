#include <iostream>
using namespace std;

int main() {
    
    //Die Variable
    double num1, num2, num3;

    cout << "Enter three numbers, with spaces inbetween them: ";
    cin >> num1 >> num2 >> num3;

    // The Great "If"ening
    if (num1 >= num2 && num1 >= num3)
        cout << "Largest number: " << num1;

    else if (num2 >= num1 && num2 >= num3)
        cout << "Largest number: " << num2;

    else
        cout << "Largest number: " << num3;

    return 0;
}
