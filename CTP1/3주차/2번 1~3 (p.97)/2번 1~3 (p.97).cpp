#include <iostream>
using namespace std;

int main(){
    int num;
    if (!(cin >> num) || num >= 1000) {
        return 0;
    }
    cout << num <<endl;
    return 0;
}