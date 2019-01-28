// Description
// 输入一行单词序列，相邻单词之间由1个或多个空格间隔，
// 请按照字母顺序输出这些单词（即按照字符串中字母的ASCII码排序，区分大小写，
// 当首字母相同时，比较第2个字母，依次类推），要求重复的单词只输出一次。



#include <iostream>
#include<string.h>
using namespace std;
int main() {
    char str[100][50],temp[50];
    int n=0;
    
    while(cin>>temp){
        int flag =1;
        for(int i=0;i<n;i++){
            if(strcmp(str[i],temp)==0){ //strcmp() 逐个字符比较，相同则return=0
                flag = 0; //重复，不添加该单词
                break;
            }
        }
        //对不重复的单词，添加入数组str
        if (flag == 1){
            for(int q=0;q<50;q++)
                str[n][q]=temp[q];
            n++;
        }
    }
    //数组建立好，排序：
    //遍历，比较相邻的两个数，如果前一个大于后一个，则在数组内交换位置
    char temp2[50];
    for(int i=0; i<n-1; i++)
    for(int j=i+1; j<n ; j++)
    {
        if(strcmp(str[i], str[j])>0){
            strcpy(temp2, str[i]);
            strcpy(str[i], str[j]);
            strcpy(str[j], temp2);
        }
    }
    for(int p=0; p<n; p++)
        cout<< str[p]<<endl;
}