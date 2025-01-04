class MyCircularQueue {
public:
    vector<int>q;
    int rearPos, frontPos , sz, k;
    MyCircularQueue(int k) {
        sz = 0;
        frontPos = 0;
        rearPos = -1;
        this -> k = k;
     

        for(int i = 0; i < k; i++) q.push_back(-1);
    }
    
    bool enQueue(int value) {

        if(sz < k && q[(rearPos + 1) % k] == -1)
        {
          //  cout << q[frontPos] << " ";
             q[(rearPos + 1) % k] = value;
             sz++;
             rearPos = (rearPos + 1) % k;

             return true;
        }
        
        return false;
       
        
    }
    
    bool deQueue() {

        if(sz == 0) return false;

       
        q[frontPos] = -1;
        sz--;
       // rearPos--;
        frontPos = (frontPos + 1) % k;

         cout << rearPos << " " << frontPos << " " << q[frontPos] << " ";
        
        return true;
    }
    
    int Front() {

        if(sz == 0) return -1;

        return q[frontPos];
    }
    
    int Rear() {

        if(sz == 0) return -1;

        return q[rearPos];

    }
    
    bool isEmpty() {
        
        return sz == 0;
    }
    
    bool isFull() {
        return sz == k;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */