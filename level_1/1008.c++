#include<iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a;
    cin >> b;
    
    printf("%.9f", static_cast<double>(a)/static_cast<double>(b));
    // cout << static_cast<double>(a)/static_cast<double>(b) << '\n';
}