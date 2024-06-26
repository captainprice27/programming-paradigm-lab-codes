#include <iostream>
using namespace std;

class MyStack {
    private:
        int *arr;
        int top;
        int max_size;

    public:
        MyStack(int maxSize) {
            max_size = maxSize;
            arr = new int[max_size];
            top = -1;
        }
        bool isEmpty() {
            return top == -1;
        }
        bool push(int data) {
            if (top >= max_size - 1) 
                return false;
            arr[++top] = data;
            return true;
        }
        int pop() {
            if (isEmpty()) {
                return -1;
            }
            return arr[top--];
        }
        int MaxSize() {
            return max_size;
        }
        int CurrentSize() {
            return top + 1;
        }
        void Display() {
            if(isEmpty()) {
                cout << "Stack is empty" << endl;
                return;
            }
            cout << endl;
            for (int i = CurrentSize() - 1; i >= 0; i--) {
                cout << arr[i] << endl;
            }
            return;
        }
        ~MyStack() {
            delete [] arr;
        }
        MyStack(const MyStack &originalStack) {
            max_size = originalStack.max_size;
            top = originalStack.top;
            arr = new int[max_size];
            for (int i = 0; i < top + 1; i++)
                arr[i] = originalStack.arr[i];
        }

    
};

int main() {
    // Max size of original stack = 5
    MyStack originalStack(5);

    originalStack.push(1);
    originalStack.push(2);
    originalStack.push(3);
    originalStack.push(4);

    originalStack.Display();
    cout << "Max size of originalStack: " << originalStack.MaxSize() << endl;
    cout << "Current size of originalStack: " << originalStack.CurrentSize() << endl << endl;
    MyStack copyStack(originalStack);

    cout << "Max size of copyStack: " << copyStack.MaxSize() << endl;
    cout << "Current size of copyStack: " << copyStack.CurrentSize() << endl;
    copyStack.Display();

    return 0;
}
