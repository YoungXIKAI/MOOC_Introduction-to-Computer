// Description
// 给定三角形的三边长度，根据海伦公式求出三角形面积。

#include <iostream>
#include <cmath> //The function sqrt() is defined in <cmath>
#include <iomanip>
using namespace std;
int main() {
    int n;
    float a,b,c; //input的三边长不都是整数，用int会Wrong answer
    double s,p;  
    cin >> n ;
    for (int i=0; i<n ;i++){
        cin >> a >> b >>c;
        p = (a+b+c)/2;
        s = sqrt(p*(p-a)*(p-b)*(p-c));
        cout<< fixed <<setprecision(2); //可以让后续cout内容保留两位小数
        cout<< s <<endl;
    }
        return 0;
}