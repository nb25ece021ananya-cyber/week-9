#include <iostream>
using namespace std;

class MathError {};
class DivideByZero : public MathError {};

int main() {
    try {
        throw DivideByZero();
    }

    catch(DivideByZero) {
        cout << "Divide By Zero Exception";
    }

    catch(MathError) {
        cout << "Math Error";
    }

    return 0;
}