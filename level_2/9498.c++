// 시험 점수를 입력받아 90 ~ 100점은 A, 80 ~ 89점은 B, 70 ~ 79점은 C, 60 ~ 69점은 D, 나머지 점수는 F를 출력하는 프로그램을 작성하시오.
#include<iostream>

using namespace std;

int main(){
    int a;

    cin >> a;

    if(a >= 90){
        printf("A");
    }
    else if(a >= 80){
        printf("B");
    }
    else if(a >= 70){
        printf("C");
    }
    else if(a >= 60){
        printf("D");
    }
    else{
        printf("F");
    }
}
