#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    int positive_counter = 0;
    int negative_counter = 0;
    int zero_counter = 0;

    cout << "Enter 1st number :";
    cin >> a;

    cout << "Enter 2nd number :";
    cin >> b;

    cout << "Enter 3rd number :";
    cin >> c;

    if(a > 0){
        positive_counter++;
    }

    else if(a < 0){
        negative_counter++;
    }

    else if(a == 0){
        zero_counter++;
    }

    if(b > 0){
        positive_counter++;
    }

    else if(b < 0){
        negative_counter++;
    }

    else if(b == 0){
        zero_counter++;
    }

    if(c > 0){
        positive_counter++;
    }

    else if(c < 0){
        negative_counter++;
    }

    else if(c == 0){
        zero_counter++;
    }

    cout << "Positive: " << positive_counter << endl;
    cout << "Negative: " << negative_counter << endl;
    cout << "Zero: " << zero_counter << endl;

    return 0;
}