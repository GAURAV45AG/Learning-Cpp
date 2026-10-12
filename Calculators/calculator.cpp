#include <iostream>
using namespace std;

double add(double a , double b){
    return a + b;
}

double sub(double a , double b){
    return a - b;
}

double multi(double a , double b){
    return a * b;
}

double divide(double a, double b){
    return a / b;
}

int main(){
    double a;
    double b;
    char op;
    double result;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter operator: ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> b;

    if(op == '+'){
        result = add(a, b);
        cout << result << endl;
    }

    else if(op == '-'){
        result = sub(a,b);
        cout << result << endl;
    }

    else if(op == '*'){
        result = multi(a, b);
        cout << result << endl;
    }

    else if(op == '/' && b != 0){
        result = divide(a, b);
        cout << result << endl;
    }

    else if(op == '/' && b == 0){
        cout << "Cannot divide by zero!" << endl;
    }

    else{
        cout << "Invalid Operator!" << endl;
    }
    return 0;
}