#include<iostream>

using namespace std;

int main(){
    int num1, num2, count;
    int value[10000];
    float percent[10000];
    float avg;
    
    cin >> num1;

    for(int i=0; i<num1; i++){
        cin >> num2;
        avg = 0;
        count = 0;
        for(int j=0; j<num2; j++){
            cin >> value[j];
            avg += value[j];
        }
        avg = avg/num2;
        for(int j=0; j<num2; j++){
            if(avg < value[j]){
                count++;
            }
        }
        percent[i] = ((float)count/num2)*100;
    }

    for(int i=0; i<num1; i++){
        printf("%.3f%% ", percent[i]);
    }
}