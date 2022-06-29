#include<bits/stdc++.h>
using namespace std;

map <char, int> myMap;
void Khoitao(){
    myMap.insert({'(', 0});
    myMap.insert({')', 0});
    myMap.insert({'+', 1});
    myMap.insert({'-', 1});
    myMap.insert({'*', 2});
    myMap.insert({'/', 2});
    myMap.insert({'^', 3});
}
string Processing(string str){
    string postfix = "";
    stack <char> myStack;
    for(int i = 0; i < str.length(); i++){
        if(isalpha(str[i])){
            postfix.push_back(str[i]);
        }
        else if(str[i] == '('){
            myStack.push(str[i]);
        }
        else if(str[i] == ')'){
            while(!myStack.empty()){
                char ans = myStack.top(); myStack.pop();
                if(ans == '(') break;
                else postfix.push_back(ans);
            }
        }
        else {
            while(!myStack.empty() && myMap[str[i]] <= myMap[myStack.top()]){
                postfix.push_back(myStack.top());
                myStack.pop();
            }
            myStack.push(str[i]);
        }
    }
    while(!myStack.empty()){
        postfix.push_back(myStack.top());
        myStack.pop();
    }
    return postfix;
}
main(){
    int t; cin >> t;
    Khoitao();
    while(t--){
        string str; cin >> str;
        cout << Processing(str) << endl;
    }
    return 0;
}
/*
Giải thích:
Đọc string từ trái -> phải
1. Nếu c là chữ cái, cập nhật kết quả (postfix).
2. Nếu c == "(", push vào stack.
3. Nếu c == ")", pop phần tử trong stack và cập nhật kq cho
tới khi gặp "(".
4. Nếu c là toán tử.
Nếu stack không rỗng, ta kiểm tra ưu tiên c với top.
- Nếu c <= top thì pop phần tử top và ghi nhận vào kq. Lặp lại bước so sánh trên.
- Ngược lại, push c vào stack.
*/