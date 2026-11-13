class MinStack {
private:
    stack<int> st;      // normal values
    stack<int> minSt;   // minSt.top() = min of everything currently in st

public:
    MinStack() {}

    void push(int value) {
        st.push(value);
        if (minSt.empty()) minSt.push(value);
        else minSt.push(min(value, minSt.top()));
    }

    void pop() {
        st.pop();
        minSt.pop();
    }

    int top() {
        return st.top();
    }

    int getMin() {
        return minSt.top();
    }
};