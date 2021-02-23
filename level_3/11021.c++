// Case #1: 2
// Case #2: 5
// Case #3: 7
// Case #4: 17
// Case #5: 7

#include<iostream>

using namespace std;

int main(){
    int count, a, b;

    int array[100000];
    cin >> count;
    for(int i=0; i<count; i++){
        cin >> a;
        cin >> b;

        array[i] = a+b;
    }

    for(int i=0; i<count; i++){
        printf("Case #%d: %d\n", i+1, array[i]);
    }
}