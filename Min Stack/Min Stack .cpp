class MinStack {
public:
    stack<int> stk;
    stack<int> stk_min;
    void push(int x) {
        stk.push(x);
        if (stk_min.empty()){
            stk_min.push(x);
        }else{
            int min = stk_min.top();
            if(x < min){
                stk_min.push(x);
            }else{
                stk_min.push(min);
            }
        }
    }

    void pop() {
        stk.pop();
        stk_min.pop();
    }

    int top() {
       return stk.top(); 
    }

    int getMin() {
        return stk_min.top();
    }
};