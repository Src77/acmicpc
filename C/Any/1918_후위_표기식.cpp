#include <bits/stdc++.h>
using namespace std;
int order(char a){
    if(a == '*' || a == '/') return 3;
    if(a == '+' || a == '-') return 2;
    if(a == ')' || a == '(') return 1;
    return 0;
}
int main(){
    string in, ans;
    stack<string> val;
    stack<char> op;
    cin>>in;
    for(auto &c : in){
        if(isalpha(c)){
            val.push(string({c}));
        }
        else{
            if(order(c) == 1){
                if(c == '(')op.push(c);
                else{
                    while(op.top() != '('){
                        string temp = val.top();
                        val.pop();
                        temp = val.top() + temp + op.top();
                        val.pop();
                        op.pop();
                        val.push(temp);
                    }
                    op.pop();
                }
            }
            else if(op.empty()){
                op.push(c);
            }
            else if(order(op.top()) < order(c)){
                op.push(c);
            }
            else{
                while(!op.empty() && op.top()!= '(' && order(c) <= order(op.top())){
                    string temp = val.top();
                    val.pop();
                    temp = val.top() + temp + op.top();
                    val.pop();
                    op.pop();
                    val.push(temp);
                }
                op.push(c);
            }
        }
    }
    while(!op.empty()){
        string temp = val.top();
        val.pop();
        temp = val.top() + temp + op.top();
        val.pop();
        op.pop();
        val.push(temp);
    }
    cout<<val.top();
}