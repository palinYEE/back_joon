#include<iostream>

using namespace std;

int main(){
    int a, b, count;

    cin >> count;
    int array[1000];

    for(int i=0; i<count; i++){
        cin >> a; 
        cin >> b;

        array[i] = a+b;
    }

    for(int i=0; i<count; i++){
        printf("%d\n", array[i]);
    }

}