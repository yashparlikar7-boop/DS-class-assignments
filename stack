#include <iostream>
using namespace std;

#define MAX 100

class ArrayStack {
    int arr[MAX];
    int top;
    public:
    ArrayStack() {top = -1;}

    bool isEmpty() {return top == -1;}
    bool isFull() {return top == MAX - 1;}

    void push(int x){
        if(isFull()){
            cout << "Overflow"; return;
        }    
        arr[++top] = x;
    }
    int pop(){
        if(isEmpty()){
            cout << "Underflow"; return -1;
        }
 
        return arr[top--];
    }
    int peek(){
        if(isEmpty()){
            cout << "Stack is empty" << endl;
             return -1;
        }
 
        return arr[top];
    }
    void display(){
        if(isEmpty()){
            cout << "Stack is empty" << endl;
            return;
        }
 
       cout <<"stack:";
       for(int i = top; i >= 0; i--){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()  {
    ArrayStack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    cout << "Top element is: " << s.peek() << endl;

    cout << "popped: " << s.pop() << endl;
    s.display();

    return 0;
}
