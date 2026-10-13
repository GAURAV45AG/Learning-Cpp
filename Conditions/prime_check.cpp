#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter number : ";
    cin >> n;

    int isPrime = 1;

    if(n <= 1){
        cout << "Not a Prime Number" << endl;
    }

    else{
        for(int i = 2; i < n; i++){
            if(n % i == 0){
                isPrime = 0;
            }
        }
        if(isPrime == 1){
            cout << "Prime number" << endl;
        }

        else{
            cout << "Not a Prime number" << endl;
        }
}
}