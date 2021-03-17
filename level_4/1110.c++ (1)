#include<iostream>

using namespace std;

int main(){
    int n, count = 0;
    int m = 0;
    cin >> n;
    int ori = n;
    do
    {
        if(count != 0){
            n = m;
        }
        m = n/10 + n%10;
        m = (n%10)*10 + m%10;
        count += 1;

    } while (ori != m);

    printf("%d", count);
    
}