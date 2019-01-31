// Description
// 所谓角谷猜想，是指对于任意一个正整数，如果是奇数，则乘3加1，如果是偶数，则除以2，得到的结果再按照上述规则重复处理，最终总能够得到1。如，假定初始整数为5，计算过程分别为16、8、4、2、1。 
// 程序要求输入一个整数，将经过处理得到1的过程输出来。


#include <iostream>
using namespace std;

void muti(int num);
void add(int num);
void infer(int num){
    if(num==1)
        cout<< "End" <<endl;
    else if(num%2==1)
        muti(num);
    else
        add(num);
}

void muti(int num){
    int result=0;
    result = num*3+1;
    cout << num <<"*3+1="<<result<<endl;
    
    infer(result);
}

void add(int num){
    int result=0;
    result = num/2;
    cout << num <<"/2="<<result<<endl;
    infer(result);
}

int main() {
    int a=0;
    cin >> a;
    infer(a);
    return 0;
}