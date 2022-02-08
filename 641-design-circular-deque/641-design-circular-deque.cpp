class MyCircularDeque {
public:
    int* arr;
    int front;
    int last;
    int size;
    int capacity;
    MyCircularDeque(int k) {
        arr = new int[k];
        front = -1;
        last = -1;
        size = 0;
        capacity = k;
    }
    
    bool insertFront(int value) {
        if(size == capacity) return false;
        if(front == -1){
            arr[0] = value;
            front=0;
            last=0;
        }else{
            front = (front+capacity-1)%capacity;
            arr[front] = value;
        }
        size++;
        return true;
    }
    
    bool insertLast(int value) {
        if(size == capacity) return false;
        if(last == -1){
            arr[0] = value;
            front = 0;
            last = 0;
        }else{
            last = (last+1)%capacity;
            arr[last] = value;
        }
        size++;
        return true;
    }
    
    bool deleteFront() {
        if(!size) return false;
        front = (front+1)%capacity;
        size--;
        return true;
    }
    
    bool deleteLast() {
        if(!size) return false;
        last = (last+capacity-1)%capacity;
        size--;
        return true;
    }
    
    int getFront() {
        if(!size) return -1;
        return arr[front];
    }
    
    int getRear() {
        if(!size) return -1;
        return arr[last];
    }
    
    bool isEmpty() {
        return size==0;
    }
    
    bool isFull() {
        return size==capacity;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */