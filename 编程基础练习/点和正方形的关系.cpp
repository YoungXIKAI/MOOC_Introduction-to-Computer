// Description
// 有一个正方形，四个角的坐标（x,y)分别是
// （1，-1），（1，1），（-1，1），（-1，-1），x是横轴，y是纵轴。
// 写一个程序，判断一个给定的点是否在这个正方形内。


#include <iostream>
using namespace std;

int main(){
    float a,b;
    char d;
    cin >> a >> d >> b;
    if(-1<=a && a<=1 && -1<=b && b<=1){
        cout << "yes" <<endl;
    }
    else{
        cout << "no" <<endl;
    }
}

// 对于0.0,0.0的sample input, 
// 用JSCPP的在线编译器（Run with JSCPP）会报错（貌似是不能把0.0当成float读）
// 但是 Run in cloud就能跑，哎，好气呀！（这样提交仍然是可以过的）

// 大腿说它这个不是真的c++编译器，是用javascript模仿的
// 我也不懂，不知所措，瑟瑟发抖