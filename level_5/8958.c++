// "OOXXOXXOOO"와 같은 OX퀴즈의 결과가 있다. O는 문제를 맞은 것이고, X는 문제를 틀린 것이다. 문제를 맞은 경우 그 문제의 점수는 그 문제까지 연속된 O의 개수가 된다. 예를 들어, 10번 문제의 점수는 3이 된다.
// "OOXXOXXOOO"의 점수는 1+2+0+0+1+0+0+1+2+3 = 10점이다.
// OX퀴즈의 결과가 주어졌을 때, 점수를 구하는 프로그램을 작성하시오.
#include<iostream>

using namespace std;

int str_check(string pro){
    int sum = 0, count;
    for(int j=0; j<pro.size(); j++){
        count = j;
        do
        {
            if(pro[count] != 'O'){
                break;
            }
            else{
                sum += 1;
            }
            count--;
        } while (count >= 0);
    }
    return sum;
}

int main(){
    string pro[100000];
    int num, count = 1, sum;

    cin >> num;

    for(int i=0; i<num; i++){
        cin >> pro[i];
    }

    for(int i=0; i<num; i++){
        printf("%d\n", str_check(pro[i]));
    }

}