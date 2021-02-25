#include<iostream>

using namespace std;

int main(){
    int array[10] = {0,0,0,0,0,0,0,0,0,0};
    int a,b,c;
    int n;

    cin >> a;
    cin >> b;
    cin >> c;

    n = a*b*c;

    while (n/10 != 0)
    {
        array[n%10]++;
        n = n/10;
    }

    array[n]++;

    for(int i=0; i<10; i++){
        cout << array[i] << '\n';
    }
    
    
}