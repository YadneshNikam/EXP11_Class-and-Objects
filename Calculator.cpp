//yadnesh Nikam
// 24070123134
#include <iostream>
using namespace std;
class Calculator {
    public:
    float add(float a, float b) {
        return a + b;
    }
    float subtract(float a, float b) {
        return a - b;
    }

};
float multiply(float a, float b) {
        return a * b;
    }
    float divide(float a, float b) {
      return a / b;
}

int main() {
    Calculator calc;
    float num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "Addition: " << calc.add(num1, num2) << endl;
    cout << "Subtraction: " << calc.subtract(num1, num2) << endl;
    cout << "Multiplication: " << multiply(num1, num2) << endl;
    cout << "Division: " <<divide(num1, num2) << endl;

    return 0;
}
/*Enter first number: 10
Enter second number: 20
Addition: 30
Subtraction: -10
Multiplication: 200
Division: 0.58*/

