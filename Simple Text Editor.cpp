//https://www.hackerrank.com/challenges/simple-text-editor/problem?h_r=next-challenge&h_v=legacy&isFullScreen=false
#include<bits/stdc++.h>
using namespace std;

stack<string> del;
stack<int> insert;
stack<int> lastOp;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int ops;
    cin>>ops;
    string text="";
    while(ops-->0){
    int opType;
    cin>>opType;
     int k;
     string temp;
     int len;
    switch(opType){
        case 1:
          cin>>temp;
          text = text+temp;
           len = temp.length();
          insert.push(len);
          lastOp.push(1);
          break;
        case 2:
          cin>>k;
          temp="";
           len = text.length()-1;
          while(k-->0)
          {
            temp += text[len--];
            text.pop_back();
          }
        lastOp.push(2);
          reverse(temp.begin(), temp.end());
          del.push(temp);
          temp  = "";
          break;
        case 3:
          cin>>k;
          cout<<text[k-1]<<endl;
          break;
        case 4:
          int op = lastOp.top();
          lastOp.pop();
          if(op==1){
            k = insert.top();
            insert.pop();
            while(k-->0){
              text.pop_back();
            }
          } else{
            temp = del.top();
            del.pop();
            text = text+temp;
            temp="";
          }
          // cout<<" undo "<<text<<endl;
          break;
      }
    }
    return 0;
}

