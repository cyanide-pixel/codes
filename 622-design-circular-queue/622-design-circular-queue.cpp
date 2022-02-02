class MyCircularQueue {
public:
    
    int n;
	vector<int> qu;
    
    MyCircularQueue(int k) {
        
        n=k;
    }
    
    bool enQueue(int value) {
        
        if(qu.size()==n) return false;
		qu.push_back(value);
		return true;
        
    }
    
    bool deQueue() {
        
        if(qu.size()==0) return false;
		qu.erase(qu.begin());
		return true;
        
    }
    
    int Front() {
        
        if(qu.size()==0) return -1;
		return qu[0];
        
    }
    
    int Rear() {
        
        if(qu.size()==0) return -1;
		return qu.back();
        
    }
    
    bool isEmpty() {
        
        if(qu.size()==0) return true;
		return false;
        
    }
    
    bool isFull() {
        if(qu.size()==n) return true;
		return false;
        
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