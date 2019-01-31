// Description
// 给定一个正整数（不超过9位），判断其是否为回文数。
// 所谓回文数是指正向看与逆向看相等的数。如，123454321，12344321。
// 若是，输出yes,若不是，输出no

#include <iostream>
#include <string>
using namespace std;


int reverse(int num, int rev){
    rev= rev*10 + num%10;
    bool aaa = (num/10)>0;
    if((num/10)>0)
        return reverse(num/10,rev);

    return rev;
}

int main() {
    int num=0,rev=0,final=0;
    cin >> num;
    final=reverse(num,rev);
    
    if(final == num)
        cout<<"yes"<<endl;
    else cout<<"no"<<endl;
}

