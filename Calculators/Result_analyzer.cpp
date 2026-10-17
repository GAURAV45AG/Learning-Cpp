#include <iostream>

using namespace std;

int totalMarks(int a, int b, int c, int d){
    
    return a + b + c + d;
}

int HighestMarks(int a, int b, int c, int d){

    if(a >= b && a >= c && a >= d){
        return a;
    }

    else if(b >= a && b >= c && b >= d){
        return b;
    }

    else if(c >= a && c >= b && c >= d){
        return c;
    }

    else{
        return d;
    }
}

int LowestMarks(int a, int b, int c, int d){

    if(a <= b && a <= c && a <= d){
        return a;
    }

    else if(b <= a && b <= c && b <= d){
        return b;
    }

    else if(c <= a && c <= b && c <= d){
        return c;
    }

    else{
        return d;
    }
}

int main(){
    int a, b, c, d;
    
    cout << "Enter marks of 1st subject: ";
    cin >> a;

    while(a < 0 || a > 100){
        cout << "Invalid Marks! Enter again: ";
        cin >> a;
    }

    cout << "Enter marks of 2nd subject: ";
    cin >> b;

    while(b < 0 || b > 100){
        cout << "Invalid Marks! Enter again: ";
        cin >> b;
    }   

    cout << "Enter marks of 3rd subject: ";
    cin >> c;

    while(c < 0 || c > 100){
        cout << "Invalid Marks! Enter again: ";
        cin >> c;
    }

    cout << "Enter marks of 4th subject: ";
    cin >> d;

    while(d < 0 || d > 100){
        cout << "Invalid Marks! Enter again: ";
        cin >> d;
    }

    int totalmarks = totalMarks(a,b,c,d); 
    double average = totalmarks / 4.0;
    int maxnum = HighestMarks(a,b,c,d);
    int min_num = LowestMarks(a,b,c,d);

    cout << "Total Marks: " << totalmarks << endl;
    cout << "Average of Marks: " << average << endl;

    cout << "Highest Marks: " << maxnum << endl;
    cout << "Lowest Marks: " << min_num << endl;

    if(a < 33 || b < 33 || c < 33 || d < 33){
        cout << "You Failed!!" << endl;
    }

    else{
        cout << "You Passed!" << endl;
    }

    return 0;
}