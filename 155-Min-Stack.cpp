class MinStack {
public:
    
    vector<int>v;
    priority_queue<int, vector<int>, greater<int>>pq;
    map<int, int>mp;
    int sz;

    MinStack() {

        sz = 0;
      //  mn = (1 << 31);
                
    }
    
    void push(int val) {
        v.push_back(val);
        pq.push(val);
        sz++;
        mp[val]++;        
    }
    
    void pop() {
        
        if(sz > 0)
        {
            //pq.pop();
            mp[v[v.size() - 1]]--;
            v.resize(v.size() - 1);
            sz--;
        
        }
        
    }
    
    int top() {
        
        if(sz > 0)
        return v[sz - 1];

        else return -1;
    }
    
    int getMin() {

        while(!mp[pq.top()])
        {
            pq.pop();
        }
        return pq.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */