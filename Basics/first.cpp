#include <iostream>
using namespace std;


int square(int n){
    return n * n ;
}
int main(){
    int n;

    cout << "Enter a number: ";
    cin >> n;

    int result = square(n);

    cout << result * 2 << endl;
    return 0;
}