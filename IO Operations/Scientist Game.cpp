#include <iostream>
using namespace std;

int main() {
    int num, originalNum, remainder, result = 0;
    
    cin >> num;
    originalNum = num;

    while (originalNum != 0) {
        // remainder contains the last digit
        remainder = originalNum % 10;
        
        result += remainder * remainder * remainder;
        
        // removing last digit from the orignal number
        originalNum /= 10;
    }

    if (result == num)
        cout  << "Give to Scientist Armstrong";
    else
        cout << "Dont Give to Scientist Armstrong";

    return 0;
}
  