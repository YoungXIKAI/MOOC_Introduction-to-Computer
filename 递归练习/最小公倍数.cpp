#include <iostream>
using namespace std;
int main() {
    int a,b,m,n,temp,gcd;
    char c;
    cin >> a >>c>>b;
    m=a;
    n=b;
    while(b!=0){
        a = a%b;
        temp=b;
        b = a;
        a = temp;
    }
    gcd =a;
    cout<<int(m*n/gcd)<<endl;
}