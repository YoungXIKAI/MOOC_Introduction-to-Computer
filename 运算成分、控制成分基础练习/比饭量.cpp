// Description
// 3个人比饭量，每人说了两句话：
// A说：B比我吃的多，C和我吃的一样多
// B说：A比我吃的多，A也比C吃的多
// C说：我比B吃得多，B比A吃的多。
// 事实上，饭量和正确断言的个数是反序的关系。
// 请编程按饭量的大小输出3个人的顺序。

#include <iostream>
using namespace std;
int main() {
    int fa,fb,fc; //每人说错的次数
    int A,B,C; //饭量,假定为0,1,2三个Level(根据题意，认为三者饭量不同)
    
    for(A=0;A<3;A++){
        for(B=0;B<3;B++){
            for(C=0;C<3;C++){
                fa = !(B>A) + !(A==C);
                fb = !(A>B) + !(A>C) ;
                fc = !(C>B) + !(B>A) ;
                if(A==fa&& B==fb &&C==fc){
                    int value;
                    value = A*100+B*10+C;
                    switch(value){  //其实是要按小到大的顺序排
                        case 12: cout<<"ABC";break; 
                        case 21: cout<<"ACB";break;
                        case 102: cout<<"BAC";break;
                        case 120: cout<<"CAB";break;
                        case 201: cout<<"BCA";break;
                        case 210: cout<<"CBA";break;
                        default : cout<<"ERR";break;
                    }
                    
                }
                
            }
        }
    }
    return 0;
}