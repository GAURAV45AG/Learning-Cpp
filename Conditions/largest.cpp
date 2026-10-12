#include <iostream>

using namespace std;

void check_largest(int a , int b, int c){
    if(a >= b && a >= c){
        cout << "1st Value is larger!" << endl;
    }

    else if(b >= a && b >= c){
        cout << "2nd Value is larger!" << endl;
    }
    else{
        cout << "3rd Value is larger!" << endl;
    }
    
}

int main(){
    int a;
    int b;
    int c;

    cout << "Enter 1st numbers: ";
    cin >> a;

    cout << "Enter 2nd numbers: ";
    cin >> b;

    cout << "Enter 3rd numbers: ";
    cin >> c;

    check_largest(a, b, c);

}