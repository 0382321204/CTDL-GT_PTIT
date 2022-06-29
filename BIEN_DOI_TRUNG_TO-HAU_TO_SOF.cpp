// Using inbuilt stack library to create stack
#include <iostream>
#include <stack>
using namespace std;

int priority (char alpha){
    if(alpha == '+' || alpha =='-') return 1;
    if(alpha == '*' || alpha =='/') return 2;
    if(alpha == '^') return 3;
    return 0;
}
string convert(string infix)
{
    int i = 0;
    string postfix = "";
    stack <char> s;

    while(infix[i]!='\0')
    {
        if(infix[i]>='a' && infix[i]<='z'|| infix[i]>='A'&& infix[i]<='Z')          
        {
            postfix += infix[i];
            i++;
        }
        else if(infix[i]=='(')
        {
            s.push(infix[i]);
            i++;
        }
        else if(infix[i]==')')
        {
            while(s.top()!='('){
                postfix += s.top();
                s.pop();
            }
            s.pop();
            i++;
        }
        else            
        {
            while (!s.empty() && priority(infix[i]) <= priority(s.top())){
                postfix += s.top();
                s.pop();
            }
            s.push(infix[i]);
            i++;
        }
    }
    while(!s.empty()){
        postfix += s.top();
        s.pop();
    }
    return postfix;
}

int main()
{   
    int t; cin >> t;
    while(t--){
        string infix;
        cin >> infix;
        cout << convert(infix) << endl;
    }
    return 0;
}