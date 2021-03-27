#include<stdio.h>

int main(){
    char word[100001];
    int cnt[26] = {0, }; //배열 크기를 알파벳 개수로 맞추기
    fgets(word, sizeof(word), stdin);

    for(int i=0; word[i] != '\0'; i++){
        if('a' <= word[i]){
            word[i] = word[i] - 32; // 대문자로 변경
        }
        cnt[word[i]-'A']++;
    }

    int max = 0; char c = '?';
    for(int alpha = 0; alpha <= 'Z' - 'A'; alpha++){
        if(cnt[alpha] > max){
            max = cnt[alpha];
            c = alpha;
        }
        else if(cnt[alpha] == max){
            c = '?';
        }
    }
    printf("%c", (c == '?')? '?': c+65);
    return 0;
}