#include <iostream>
using namespace std;

int unitCalc(int unit){

    int remainingUnit;

    if(unit <= 100){

        return unit * 2; 
    }

    else if(unit <= 200){

        remainingUnit = unit - 100;

        return 200 + remainingUnit * 3;
    }

    else {

        remainingUnit = unit - 200;

        return 500 + remainingUnit * 5;
    }

}
int main(){
    int unit;

    cout << "Enter unit: " ;
    cin >> unit;
    
    while(unit < 0){
        cout << "Invalid Unit!! Enter again : ";
        cin >> unit;
    }

    int Totalbill = unitCalc(unit);
    cout << "Total bill of " << unit << " is " << Totalbill << endl;
    

    return 0;
}