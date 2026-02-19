#include<iostream>
#include<stack>
using namespace std;

bool isMAtching(char open, char close){
    return{
        open == '(' && close == ')' ||
        open == '[' && close == ']' ||
        open == '{' && close == '}' 
    };
}

bool isBalanced(std::string exp){
    stack<int> s;
    for(auto ch : exp){
        if(ch == '(' || ch == '{' || ch == '['){
            s.push(ch);
        }else{
            if(s.empty() || !isMAtching(s.top(), ch)){
                return false;
            }
            s.pop();
        }
    }
    return s.empty();
}


int main(){
   

    std::string exp;
    cout<<"Enter Exp:"<<endl;
    cin>>exp;

    if(isBalanced(exp)){
        cout<<"Expression is Balanced";
    }else{
        cout<<"Expression is not Balanced";
    }

}