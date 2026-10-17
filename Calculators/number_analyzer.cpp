#include <iostream>
using namespace std;

int largest(int a, int b, int c, int d){
    if(a >= b && a >= c && a >= d){
        return a;
    }

    else if(b >= c && b >= a && b >= d){
        return b;
    }

    else if(c >= a && c >= b && c >= d){
        return c;
    }

    else if(d >= a && d >= b && d >= c){
        return d;
    }

    return 0;
}

int smallest(int a , int b, int c, int d){
    if(a <= b && a <= c && a <= d){
        return a;
    }

    else if(b <= c && b <= a && b <= d){
        return b;
    }

    else if(c <= a && c <= b && c <= d){
        return c;
    }

    else if(d <= a && d <= b && d <= c){
        return d;
    }
    
    return 0;
}

int sum_of_nums(int a , int b, int c, int d){
    return a + b + c + d;
}

int main(){
    int a, b, c ,d , maxNum, minNum, add;
    int second_Largest = 0;

    cout << "Enter 1st number :";
    cin >> a;

    cout << "Enter 2nd number :";
    cin >> b;

    cout << "Enter 3rd number :";
    cin >> c;

    cout << "Enter 4th number : ";
    cin >> d;

    maxNum = largest(a,b,c,d);

    if(maxNum == a){
        if(b >= c && b >= d){
            second_Largest = b;
        }

        else if(c >= b && c >= d){
            second_Largest = c;
        }

        else if(d >= b && d >= c){
            second_Largest = d;
        }
    }

    else if(maxNum == b){
        if(a >= c && a >= d){
            second_Largest = a;
        }

        else if(c >= a && c >= d){
            second_Largest = c;
        }

        else if(d >= a && d >= c){
            second_Largest = d;
        }


    }

    else if(maxNum == c){
        if(a >= b && a >= d){
            second_Largest = a;
        }

        else if(b >= a && b >= d){
            second_Largest = b;
        }
        
        else if(d >= a && d >= b){
            second_Largest = d;
        }
    }

    else if(maxNum == d){
        if(a >= b && a >= c){
            second_Largest = a;
        }

        else if(b >= a && b >= c){
            second_Largest = b;
        }

        else if(c >= a && c >= b){
            second_Largest = c;
        }
    }

    minNum = smallest(a, b, c, d);

    add = sum_of_nums(a, b, c, d);

    cout << "Largest number : " << maxNum << endl;
    cout << "Second Largest : " << second_Largest << endl;
    cout << "Smallest number : " << minNum << endl;
    cout << "Sum of numbers : " << add << endl;

    if(add % 2 == 0){
        cout << "Addition of numbers is Even!!" << endl;
    }

    else{
        cout << "Addition of numbers is Odd!!" << endl;
    }

    return 0;

}