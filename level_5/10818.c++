#include<iostream>

using namespace std;

int main(){
    int n, value,min, max;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> value;
        if(i == 0){
            min = value;
            max = value;
        }
        else{
            if(value > max){
                max = value;
            }
            if(value < min){
                min = value;
            }
        }
    }
    printf("%d %d", min, max);
}