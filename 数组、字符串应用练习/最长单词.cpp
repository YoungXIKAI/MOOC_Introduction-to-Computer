// Description
// 输入一个以'.'结尾的简单英文句子，单词之间用空格分隔，
// 没有缩写形式和其它特殊形式；输出该句子中最长的单词。


#include <iostream>
#include <string.h>
using namespace std;
int main() {
    char sentence[1000];
    char str[100][100];
    int n=0; //从句子中录入第n个单词
    int index = 0; //该单词的第index个字母
    cin.get(sentence,1000,'.');
    int len_sen = strlen(sentence);

    //以空格为分解，每个单词存入一个二级数组
    for (int i=0;i<=len_sen;i++){
        if (sentence[i] == ' '){
            str[n][index] = '\0'; //一定要给每个单词一个结尾！
            n++;
            index=0;
            continue;
        }
        str[n][index]=sentence[i];
        index++;
    }
    
    // 临时数组longword，储存目前读到的最长单词
    char longword[100];
    for (int i=0;i<n+1;i++){
        if(strlen(str[i])>strlen(longword)){
            for(int j=0;j<100;j++)
                longword[j] = str[i][j];
        }
    }
    cout<<longword<<endl;

}