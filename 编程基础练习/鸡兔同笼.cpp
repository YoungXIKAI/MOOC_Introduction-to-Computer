// Description
// 一个笼子里面关了鸡和兔子（鸡有2只脚，兔子有4只脚，没有例外）。
//已经知道了笼子里面鸡和兔子的总数a和脚的总数b，问笼子里面有多少只鸡，有多少只兔子

#include <iostream>
using namespace std;
int main() {
    int a,b;
    int tutu,jiji;
    cin >> a >> b;
    tutu = b/2-a;
    jiji = a - tutu;
    
    
    cout << jiji <<" "<<tutu<<endl;
    return 0;
}