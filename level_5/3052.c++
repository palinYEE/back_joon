#include<iostream>

using namespace std;

int main(){
    int array[42] = {0,};
    int a, b, count=0;

    for(int i=0; i<10; i++){
        cin >> a;
        array[a%42]++;
    }
    for(int i=0; i<42; i++){
        if(array[i] != 0){
            count++;
        }
    }
    cout << count << endl;
}