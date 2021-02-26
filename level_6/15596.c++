#include<iostream>
#include<vector>

using namespace std;

long long sum(vector<int> &a) {
	long long ans = 0;
    // iterator 는 반복자를 의미한다. 반복자는 컨테이너에 저장된 원소를 순회하고 접근하는 일반화된 방법을 제공한다.
    //반복자는 컨테이너와 알고리즘이 하나로 동작하게 묶어주는 인터페이스 역할을 한다
    for(vector<int>::iterator iter = a.begin(); iter < a.end(); iter++)
        ans += *iter;
	return ans;
}

