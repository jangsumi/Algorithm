#include <iostream>
using namespace std;

int main(){
    int num1, num2;
    int num3, num4, num5, num6;
    int num2_1, num2_10, num2_100;

    cin >> num1 >> num2;

    num2_1 = num2 % 10;
    num2_10 = (num2/10) % 10;
    num2_100 = (num2/100) % 10;

    num3 = num1 * num2_1;
    num4 = num1 * num2_10;
    num5 = num1 * num2_100;

    num6 = num1 * num2;

    cout << num3 << endl;
    cout << num4 << endl;
    cout << num5 << endl;
    cout << num6 << endl;    
}