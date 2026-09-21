class MyCircularQueue {
private:
    int* arr;
    int front;
    size_t size;
    size_t capacity;

public:
    MyCircularQueue(int k) : arr(new int [k]), size(0), capacity(k), front(0) {}
    ~MyCircularQueue(){
        delete[] arr;
    }
    bool enQueue(int value) {
        if(this->isFull()) return 0;
        arr[(size + front) % capacity] = value;
        size++;
        return 1;
    }
    
    bool deQueue() {
        if(this->isEmpty()) return 0;
        front = (front + 1) % capacity;
        size--;
        return 1;
    } 
    
    int Front() {
        if(this->isEmpty()) return -1;
        return arr[front];
    }
    
    int Rear() {
        if(this->isEmpty()) return -1;
        return arr[(size + front - 1) % capacity];
    }
    
    bool isEmpty() {
        return size == 0;
    }
    
    bool isFull() {
        return size == capacity;
    }
};