#include<iostream>

using namespace std;

int main(){
    int max, num; 
    int array[10];

    for(int i=1; i<10; i++){
        cin >> array[i];
    }
    max = array[1];
    num = 1;
    for(int i=1; i<10; i++){
        for(int j=i+1; j<10; j++){
            if(max < array[j])
            {
                max = array[j];
                num = j;
            }
        }
    }

    printf("%d\n%d", max, num);
}