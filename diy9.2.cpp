#include <iostream>
using namespace std;

class Overflow {};
class Underflow {};

class Stack {
    int a[3], top = -1;

public:
    void push(int x) {
        if(top == 2)
            throw Overflow();
        a[++top] = x;
    }

    void pop() {
        if(top == -1)
            throw Underflow();
        cout << "Deleted: " << a[top--] << endl;
    }
};

int main() {
    Stack s;

    try {
        s.push(10);
        s.push(20);
        s.pop();
        s.pop();
        s.pop();
    }
    catch(Underflow) {
        cout << "Stack Underflow!";
    }
    catch(Overflow) {
        cout << "Stack Overflow!";
    }

    return 0;
}