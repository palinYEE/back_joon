#include<iostream>
#include<cmath>

using namespace std;

int c[1000];

int main(){
    int a, b;
    int count = 0;
    int sum = 0;

    cin >> a;
    cin >> b;

    while(b != 0){
        c[count] = (b%10)*a;
        cout << c[count] << '\n';
        b = b/10;
        count ++;
    }

    for(int i=0; i<count; i++){
        sum += c[i] * pow(10,i);
    }

    cout << sum << '\n';
}