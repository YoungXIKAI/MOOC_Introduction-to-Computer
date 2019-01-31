#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    int n;
    float c1=0,c2=0,c3=0,c4=0;
    cin >> n;
    for (int i=0 ;i<n;i++){
        int a;
        cin >>a;
        if (a<19){
            c1++;
        }
        else if (a>=19 && a<36){
            c2++;
        }        
        else if (a>=36 && a<61){
            c3++;
        }         
        else if (a>60){
            c4++;
        }         
    }
    int sum;
    sum = c1+c2+c3+c4;
    float p1,p2,p3,p4;
    p1 = 100*c1/sum;
    p2 = 100*c2/sum;
    p3 = 100*c3/sum;
    p4 = 100*c4/sum;
    
    
    printf("1-18: %.2f%%\n", p1);
    printf("19-35: %.2f%%\n", p2);
    printf("36-60: %.2f%%\n", p3);
    printf("Over60: %.2f%%\n", p4);
    return 0;
}