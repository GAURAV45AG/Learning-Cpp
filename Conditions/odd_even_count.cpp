#include <iostream>
using namespace std;

main(){

    int n;
    int oddcount = 0;
    int evencount = 0;

    cout << "Enter your number: ";
    cin >> n;

    for(int i = 1; i <= n ; i++){
        if(i % 2 == 0){
            evencount++;
            cout << i << " is Even" << '\n';

        } else {
            oddcount++;
            cout << i << " is Odd" << '\n';
        }
    }
    cout << "Total even numbers: " << evencount << '\n';
    cout << "Total odd numbers: " << oddcount << '\n';
    return 0;
}