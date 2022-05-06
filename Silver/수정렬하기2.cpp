#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int testcase;

    cin >> testcase;

    int num[testcase];
    
    for (int i=0; i<testcase; i++){
        cin >> num[i];
    }

    sort(num, num + testcase);

    for (int i=0; i<testcase; i++){
        printf("%d\n",num[i]);
    }
}