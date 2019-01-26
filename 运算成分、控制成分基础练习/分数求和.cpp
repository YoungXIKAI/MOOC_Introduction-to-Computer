// Description
// 输入n个分数并对他们求和，用约分之后的最简形式表示。

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
    int q=0, p=1;
    
    for (int i=0;i<n;i++){
        int a,b;
        char c;
        cin >>a>>c>>b;
        // p是分母，q是分子，最初q/p是0/1，每个循环求它和读到分数的和
        q=q*b+p*a;
        p*=b;
        // 求新分数（目前的分数和）的最大公约数g
        // 分子分母都除以g就可以化简分数
        // 这里最大公约数是靠穷举硬莽的（因为数不大）
        // 优雅的算法是‘辗转相除法求最大公约数’
        int g ;
        g=(q<p)?q:p;
        while(1)
        {if(q%g==0&&p%g==0)break;
        g--;
        }
        q/=g;
        p/=g;

    }
    
    if(p==1){
        cout << q<< endl;
    }
    else{
        cout << q<<"/" << p << endl;
    }
    
    return 0;
}