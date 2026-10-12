#include <iostream>
using namespace std;

void table(int n, int l){
    int result;

    for(int i = 1 ; i <= l; i++){
        result = n * i;
        cout << result << endl;
    }
}

int main(){
    int n;
    int l;

    cout << "Enter number: ";
    cin >> n;

    cout << "Enter limit: ";
    cin >> l;
    
    if(l <= 0){
        cout << "Invalid limit!" << endl;
    } 

    else{
        table(n,l);
    }
    return 0;
}