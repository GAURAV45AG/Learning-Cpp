#include <iostream>
using namespace std;

int factorial(int n){
    
    int result = 1;

    if(n >= 0){
        for(int i = 1; i <= n; i++){
            result = i * result;
        }
    } 

    return result;
}
int main(){
    int n;
    int result;

    cout << "Enter number: ";
    cin >> n;

    if(n >= 0){
    result = factorial(n);
    cout << "Factorial of " << n << " is: "<< result << endl;
    }

    else{
        cout << "Please enter a positive integer!" << endl;
    }
    
    return 0;
}