#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char line[101]={'\0'},word_a[101]={'\0'},word_b[101]={'\0'},words[101][101]={'\0'};
    cin.getline(line,101);
    cin.getline(word_a,101);
    cin.getline(word_b,101);
    //从line里拆分单词
    int i=0;
    int index=0; //为单词计数
    int k=0;  
    while(line[i]!='\0'){
        if(line[i]==' '){ //读到空格，准备新单词
            index++;
            i++;
            k=0;
            
        }
        else{
            words[index][k]=line[i];
            k++;
            i++;
        }
    }
    
    for(int m=0;m<index+1;m++){
        if(strcmp(words[m],word_a)==0)
            strcpy(words[m],word_b);
        cout<<words[m];
        if(m<index)
        cout<<" "; //除了最后一个单词，结尾加空格
    }
    return 0;
}

