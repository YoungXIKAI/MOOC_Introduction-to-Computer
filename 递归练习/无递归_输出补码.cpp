#include <iostream>
using namespace std;
#include <bitset>

int main() {
    int a;
    while (cin>>a){
        bitset<sizeof(int)*8> bin(a);
        cout <<bin<<endl;
        // cout <<(~bin)<<endl;
   
    }
    return 0;
}