#include <iostream>

int main(){
    double temp;
    char unit;
    double result;

    std::cout << "Enter your unit of Temprature: ";
    std::cin >> unit;

    std::cout << "Enter Temprature: ";
    std::cin >> temp;

    switch(unit){
        case 'c':
        result = (temp * 1.8) + 32 ;
        break;

        case 'f':
        result = (temp - 32) / 1.8;
        break;

        default:
        "Invaild unit";
    }

    std::cout << result << '\n';
            
    return 0;
}