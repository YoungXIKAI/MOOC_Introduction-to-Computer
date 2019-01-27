#include <iostream>
#include <algorithm>  //引入 max()
using namespace std;
int main() {
    int n=0 ;
    while(1){
        cin >> n ;
        if (n==0){
            break;
        }
        int last_one = -100; //不想让默认值和第一个读到的值一样，但是我不懂怎么做
        int count =1; //重复值的计数器
        int longest =1 ;
        for (int i=0; i<n; i++){
            int this_one;
            cin >>this_one;

            if(last_one == this_one){
                count ++ ;
            }else{
                count =1 ;
            }
            last_one = this_one;
            longest = max(longest, count);
        }
        cout <<longest<<endl;

    }
    
    
    
    return 0;
}