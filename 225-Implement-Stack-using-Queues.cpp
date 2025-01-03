class MyStack {
public:
     queue<int>q, qq;
    MyStack() {
        
        
    }
    
    void push(int x) {

        q.push(x);
        
    }
    
    int pop() {

        int n;

      
            while(!qq.empty())
            {
               
                q.push(qq.front());
                qq.pop();
            }
        
        while(!q.empty())
        {
            if(q.size() == 1)
            {
                 n = q.front();
                 q.pop();
               //  break;
            }

            else if(q.size() > 1)
            {
                qq.push(q.front());
                q.pop();
            }
            
        }

        while(!qq.empty())
            {
               
                q.push(qq.front());
                qq.pop();
            }

        return n;
    }
    
    int top() {
        
        int n;

          while(!qq.empty())
            {
               
                q.push(qq.front());
                qq.pop();
            }
        
        while(!q.empty())
        {

                 if(q.size() == 1) 
                 {
                    n = q.front();
                    q.pop();
                    qq.push(n);
                 }

                 else
                 {
                    qq.push(q.front());
                    q.pop();
                 }
                 
            
           
        }

        while(!qq.empty())
            {
               
                q.push(qq.front());
                qq.pop();
            }

       return n;
    }
    
    bool empty() {
        
        return q.empty() && qq.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */