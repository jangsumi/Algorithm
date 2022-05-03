#include <iostream>
using namespace std;

int main(){
    int num, num1, num10, num100, count=0;
    int numarr[3];

    cin >> num;

    if (num < 100){
        count = num;
    }

    else if (num == 1000){
        num = 999;
    }

    if (num >= 100 && num <= 999){
        for (;num>=100;num--){
            num1 = num%10;
            num10 = (num/10)%10;
            num100 = (num/100)%100;

            if(num100 - num10 == num10 - num1){
                count++;
            }
        }
        count += 99;
    }
    cout << count;
}