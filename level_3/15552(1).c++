#include<iostream>

using namespace std;

int main(){
    int array[1000000];
    int a,b, count;

    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> count;

    for(int i=0; i<count; i++){
        cin >> a;
        cin >> b;
        array[i] = a+b;
    }

    for(int i=0; i<count; i++){
        cout << array[i] << '\n';
    }
}