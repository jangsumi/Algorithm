#include <iostream>
using namespace std;

int main(){

    int count=0, answer=0, n, n2, min=10000;

    cin >> n;
    cin >> n2;

    for (int j=n; j <= n2; j++, n++){
        count = 0;

        for(int i=2; i<=n; i++) {
            if(n % i==0){
                count += 1;
            }    
        }

        if (count == 1){
            answer += n;
            if (min > n){
                min = n;
            }
        } 
    }

    if (answer == 0 && min == 10000){
        cout << "-1" << endl;
    }

    else {
        cout << answer << endl;
        cout << min << endl;
    }

}