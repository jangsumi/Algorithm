#include <iostream>
using namespace std;

int main(){
    int arr[3], max=0, answer=0;

    for(int i=0; i<3; i++){
        cin >> arr[i];
    }

    if (arr[0] == arr[1] && arr[1] == arr[2]){
        answer = 10000 + arr[0] * 1000;
    }

    else if (( (arr[0] == arr[1]) && (arr[0] != arr[2]) ) || ( (arr[0] == arr[2]) && (arr[0] != arr[1]) ) || ((arr[0] == arr[1]) && (arr[1] != arr[2]) )){
        answer = 1000 + arr[0] * 100;
    }
    else if (arr[0] != arr[1] && arr[1] != arr[2]){
        for(int j=0; j<3; j++){
            if (max < arr[j]){
                max = arr[j];
            }
        }
        answer = max * 100;
    }    

    cout << answer;
}