#include <iostream>
using namespace std;

int main(){
    int a, b, c, secondLargest;

    cout << "Enter 1st number :";
    cin >> a;

    cout << "Enter 2nd number :";
    cin >> b;

    cout << "Enter 3rd number :";
    cin >> c;

    if(a == b || b == c || a == c){
        cout << "Numbers must be different!!" << endl;
    }

    else{

    if(a > b && a > c){
        if(b > c){
            secondLargest = b;
        }

        else {
            secondLargest = c;
        }
    }

    else if(b > a && b > c){

        if(a > c){
            secondLargest = a;
        }

        else{
            secondLargest = c;
        }
    }

    else if(c > a && c > b){

        if(a > b){
            secondLargest = a;
        }

        else{
            secondLargest = b;
        }
    }
    cout << secondLargest << endl;
    }

    return 0;
}