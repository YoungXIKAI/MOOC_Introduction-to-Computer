// Description
// 一个句子的每个单词之间也许有多个空格，过滤掉多余的空格，只留下一个空格

#include <iostream>
using namespace std;
int main() {
	//可以不用HINT里的 gets(str)
    char str[100];
    while(cin>>str)
        cout<<str<<" " ;

    return 0;
}