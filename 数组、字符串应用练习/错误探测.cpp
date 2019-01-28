// Description
// 给出由0和1组成的矩阵，如果矩阵的每一行和每一列的1的数量都是偶数，则认为符合条件。
// 你的任务就是检测矩阵是否符合条件，或者在仅改变一个矩阵元素的情况下能否符合条件。
// "改变矩阵元素"的操作定义为0变成1，1变成0。


#include <iostream>
using namespace std;

int check(int n){
    int a[100][100]={0};
    // i->行（第0行放该列的和）， j->列（第0列放该行的和）
    for (int i=1; i<=n; i++){ 
        for (int j=1; j<=n; j++){
            cin >> a[i][j];
            a[0][j] += a[i][j];
            a[i][0] += a[i][j];
        }
    }
    //统计符合要求的行、列各有多少个,如果两个值=n,则OK
    int valid_row=0, valid_col=0;
    for (int i=1;i<=n;i++){
        if(a[i][0]%2==0)  valid_row ++;
    }
    for (int j=1;j<=n;j++){
        if(a[0][j]%2==0)  valid_col ++;
    }    
    
    if(valid_row==n && valid_col==n)
        cout << "OK"<< endl;
    //符合要求的行列数刚好各差一个，找出那个坐标（其对应的行列含有1的数目同为奇数），
    else if (valid_row+1==n && valid_col+1==n){
        for (int i=1; i<=n; i++){ 
            for (int j=1; j<=n; j++){
                if(a[0][j]%2==1 && a[i][0]%2==1){
                    cout << "Change bit ("<<i<<","<<j<<")"<< endl;
                    return 0;
                }
            }
        }
    }
    else cout << "Corrupt"<< endl;

    return 0;
}


int main() {
    
    int n=0;
    cin >>n;
    while(n>0){
        check(n);
        cin >>n;
    }
    
    return 0;

}
