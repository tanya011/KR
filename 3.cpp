#include <bits/stdc++.h>
int const S = 5;
using namespace std;

class SetofStacks{
vector<stack<int>> *stacks;
public:
SetofStacks(){
    stacks = new vector<stack<int>>();
};
~SetofStacks(){};

void push(int v){
    if(stacks->size()==0){
        stack<int> newstack;
        newStack.push(v);
        stacks->push_back(newstack);
    }
    else{
        stack<int> &st = stacks->back();
        if(st.size()!=S){
            st.push(v);
        }
        else{
            stack<int> newstack;
            newstack.push(v);
            stacks->push_back(newstack);
        }
    }
}
void pop(){
    stack <int> st;
    st = stacks->back();
    if(!st.empty()){
        cout << st.top();
        st.pop();
    }
    else{
        stacks->pop_back();
        pop();
    }
}
};
