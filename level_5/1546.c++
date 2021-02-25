#include<iostream>

using namespace std;

int main(){
    float array[100000];
    float num, max, sum=0;

    cin >> num;

    for(int i=0; i<num; i++){
        cin >> array[i];
        if(i==0){
            max = array[i];
        }
        else{
            if(max < array[i]){
                max = array[i];
            }
        }
    }

    for(int i=0; i<num; i++){
        array[i] = (float)((float)array[i]/max)*100;
        sum += array[i];
    }

    for(int i=0; i<num; i++){
        printf("%f ",array[i]);
    }
    printf("%f", (float)sum/num);
}