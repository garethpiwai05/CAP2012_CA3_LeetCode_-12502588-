class MyCircularDeque {
    private:
    vector<int> arr;
    int front;
    int size;
    int capacity;
public:
    MyCircularDeque(int k) {
      arr.resize(k);
      front = 0;
      size = 0;
      capacity = k;  
    }
    
    bool insertFront(int value) {
      if (isFull()){
        return false;
      } 
      front = front -1 + capacity) % capacity;
      arr[front] = value;
      size++;
      return true;
    }
    
    bool insertLast(int value) {
        if(isfull()){
            return false;
        }
        int rear = (front + size) % capacity ;
        arr[rear]= value;
        size ++;
        return true;  
    }
    int getFront(){
        if(isEmpty()){
            return -1;
        }
        return arr[front];
    }
    int getRear(){
        if(isEmpty()){
            return -1;
        }
        int rear = (front + size - 1) % capacity ;
        return arr[rear];
    }
    
    bool isEmpty() {
       return size == 0; 
    } 
    bool isFull() {
     return size == capacity;   
    }
};
