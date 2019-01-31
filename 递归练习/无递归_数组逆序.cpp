#include <iostream>
using namespace std;
int main() {
    int n=0;
    cin >>n;
    int nums[101];
    int count=0;
    for (int i=0;i<n;i++){
        cin >> nums[i];
        count++;
    }
    while (count>0){
        count--;
        cout << nums[count]<<" ";
    }
}