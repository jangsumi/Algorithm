#include <iostream>
using namespace std;

int main(){


int testcase, n, answer=0;
cin >> testcase;

for (int j=0; j<testcase; j++){

    cin >> n;
    int count=0;

    for (int i=2; i<=n; i++){
        if(n % i==0){
            count += 1;
        }
    }

    if (count == 1){
        answer += 1;
    }
}

cout << answer << endl;

}