#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;



int self_num(int *table){
    int temp, num = 1;
    // table 생성
    for(int i=1; i<=10000; i++){
        table[i] = i;
    }

    for(int num1 = 1; num1<10000; num1++){
        num = num1;
        while(1){
            // printf("%d + %d + %d = %d\n", (num/10), num%10, num, temp);
            temp = ((num/10000)%10)+((num/1000)%10) + ((num/100)%10)+ ((num/10)%10) + (num%10) + num;
            if(temp > 10000){
                break;
            }
            // printf("%d\n", temp);
            // printf("%d + %d + %d = %d\n", (num/10), num%10, num, temp);
            table[temp] = 0;
            num = temp;
        }
        // printf("-----------\n");
    }


    return 0;
}

int main(){
    int table[10001] = {0, };
    self_num(table);
    for(int i=1; i<=10000; i++){
        if(table[i] != 0){
            printf("%d\n", table[i]);
            // printf("");
        }
    }
}