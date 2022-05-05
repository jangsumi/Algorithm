#include <iostream>
using namespace std;

int main(){

    int h, m;
    cin >> h >> m;

    m = m - 45;

    if (h == 0 && m < 0){
        h = 23;
        m = 60 + m;
    }

    else if (m < 0){
        h -= 1;
        m = 60 + m;
    }

    cout << h << " " << m;

}