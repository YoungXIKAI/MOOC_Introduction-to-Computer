#include <iostream>
using namespace std;
int main() {
    int num_7,num_9_rev; //七进制三位数&九进制三位数的逆序 转换成十进制的值
    int button=0;  //Input的1、2、3
    cin >>button;
    
    // 注意遍历是从0开始，否则会遗漏 X0Y的三位数
    // 000符合其他条件，但是000的十进制不是‘自然数’，故排除
    for (int a=0 ; a<7;a++){
        for(int b=0; b<7 ;b++){
            for(int c=0;c<7;c++){
                
                num_7 = a*7*7 +b*7 +c;
                num_9_rev = a + b*9 + c*9*9;
                if(num_7 == num_9_rev && a!=0){
                    
                    switch(button){
                        case 1 : 
                            cout << num_7 <<endl;
                            break;
                        case 2 : 
                            cout << a<<b<<c<<endl;
                            break;
                        case 3 : 
                            cout << c<<b<<a<<endl;
                            break;
                    }
                
                }
                
            }
        }
        
    }
    
    
    return 0;
}