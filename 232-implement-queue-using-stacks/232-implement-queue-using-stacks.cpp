class MyQueue {
public:
    
    stack<int>s,temps;
    MyQueue() {
        
    }
    
    void push(int x) {
        s.push(x);
    }
    
    int pop() {
        if(temps.empty())
        {
            while(!s.empty())
           {
               temps.push(s.top());
               s.pop();
           }   
        }
        int top=temps.top();
        temps.pop();
        return top;
    }
    
    int peek() {
       if(temps.empty())
       {
           while(!s.empty())
           {
               temps.push(s.top());
               s.pop();
           }
       }
       return temps.top();
    }
    
    bool empty() {
        if(s.size()+temps.size()==0)
        {
            return true;
        }
        return false;
        
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */