// Description
// 参考整数排序方法，设计一种为字符串排序的算法，将字符串从小到大输出

#include <iostream>
#include<string.h>
using namespace std;

int main() {
    int t=0; //组数
    cin >> t;
    for (int k=0;k<t;k++){
        char words[100][200]; 
        int n=0;
        cin >>n; //该组字符串数
        //添加改组的字符串到 数组words
        for(int q=0;q<n;q++)
        cin >> words[q];

        //排序：
        //遍历，比较相邻的两个数，如果前一个大于后一个，则在数组内交换位置
        char temp[50];
        for(int i=0; i<n-1; i++)
        for(int j=i+1; j<n ; j++)
        {
            if(strcmp(words[i], words[j])>0){
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
        //打印结果
        for(int p=0; p<n; p++)
            cout<< words[p]<<endl;
            cout<<endl; //每组最后换行一次
    }
     
    
}