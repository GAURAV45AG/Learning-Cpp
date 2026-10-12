#include <iostream>
using namespace std;

int main() {
    int positive_counter = 0;
    int negative_counter = 0;
    int zero_counter = 0;

    for (int i = 1; i <= 10; i++) {
        int num;

        cout << "Enter number " << i << ": ";
        cin >> num;

        if (num > 0) {
            positive_counter++;
        }
        else if (num < 0) {
            negative_counter++;
        }
        else {
            zero_counter++;
        }
    }

    cout << "\nPositive numbers: " << positive_counter << '\n';
    cout << "Negative numbers: " << negative_counter << '\n';
    cout << "Zero numbers: " << zero_counter << '\n';

    return 0;
}
