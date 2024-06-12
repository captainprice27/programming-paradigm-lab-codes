// stack implementation using class
// 2021CSB071
// prayas mazumder
// assignment --> 3 ( programming paradigm)

#include <iostream>
using namespace std;

// const int STACK_SIZE = 10;

class MyStack // class name is MyStack
{
    // data members
private:
    int STACK_SIZE;
    int top;
    int *arr;

    // member function
public:
    MyStack(int size)
    {
        STACK_SIZE = size;
        arr = new int[STACK_SIZE];
        top = -1;
    }
    int isIntegerStackEmpty()
    {
        if (top == -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    int isIntegerStackFull()
    {
        if (top == STACK_SIZE - 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    int pushIntegerStack(int d)
    {
        if (isIntegerStackFull())
        {
            cout << "Stack Overflow! Cannot push " << d << "to the stack\n"
                 << endl;
            return 0;
        }
        else
        {
            top++;
            arr[top] = d;
            cout << d << " successfully pushed into stack" << endl;
            return 1;
        }
    }

    int popIntegerStack()
    {
        if (isIntegerStackEmpty())
        {
            cout << "Stack Underflow! Cannot pop from the stack\n"
                 << endl;
            return -1;
        }
        else
        {
            int d = arr[top];
            top--;
            return d;
        }
    }

    int currentSize() // function to print the current size of the stack
    {

        cout << "current size of the stack is --> " << (top + 1) << endl;
        return 1;
    }

    void Display()
    {
        if (isIntegerStackEmpty())
        {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << endl;
        for (int i = currentSize() - 1; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }
        return;
    }

    int MaxSize()
    {
        return STACK_SIZE;
    }
};

// int main()
// {
//     int n; // n is the max size of the stack
//     cout << " enter the size of the stack" << endl;
//     cin >> n;

//     MyStack sp(n);

//     cout << "Stack has been created successfully\n"
//          << endl;
//     sp.currentSize();

//     cout << "Before pushing, Full:\n"
//          << sp.isIntegerStackFull() << endl;
//     cout << "Before pushing, Empty:\n"
//          << sp.isIntegerStackEmpty() << endl;

//     int switch_value;

//     while (true)
//     {
//         cout << " press 0 to view all the opeartions \n " << endl;
//         cout << " enter any operation to perform " << endl;
//         cin >> switch_value;

//         switch (switch_value)
//         {
//         case 0:
//             cout << "Press 1 to Push an Integer to the Stack\n";
//             cout << "Press 2 to Pop an Integer from the Stack\n";
//             cout << "Press 3 get Max Size of Stack\n";
//             cout << "Press 4 get Current Size of Stack\n";
//             cout << "Press 5 to check if Stack is Empty\n";
//             cout << "Press 6 to Display the Stack snapshot \n";
//             cout << "Press 7 to Exit \n";
//             break;
//         case 1:
//         {
//             cout << "\nEnter integer to be pushed to stack: ";
//             int data;
//             cin >> data;
//             sp.pushIntegerStack(data);
//             break;
//         }
//         case 2:
//         {
//             int data = sp.popIntegerStack();
//             if (data == -1)
//                 cout << "Stack Underflow" << endl;
//             else
//             {
//                 cout << data << " successfully popped from Stack" << endl;
//             }
//             break;
//         }

//         case 3:

//             cout << "Max size of stack is: " << sp.MaxSize() << endl;
//             break;
//         case 4:

//             sp.currentSize();
//             break;

//         case 5:

//             if (sp.isIntegerStackEmpty())
//                 cout << "Stack is empty" << endl;
//             else
//                 cout << "Stack isn't empty" << endl;
//             break;
//         case 6:

//             sp.Display();
//             break;

//             // case 7:
//             //     stack.~MyStack();
//             //     cout << "Deleted Stack" << endl
//             //          << "Exiting..." << endl;
//             //     exit(0);
//             //     break;
//         }
//     }
//     return 0;
// }

int main()
{
    MyStack stack1(5); // stack 1 created with size 5 and so on....
    MyStack stack2(10);
    MyStack stack3(1);
    MyStack stack4(4);

    stack1.pushIntegerStack(1); // the value 1 is pushed in stack1 and so on ...
    stack1.pushIntegerStack(4);
    stack1.pushIntegerStack(2);

    stack2.pushIntegerStack(34);
    stack2.pushIntegerStack(4);

    stack3.pushIntegerStack(71);
    stack3.pushIntegerStack(100);

    // stack4 is empty , no push operations done

    cout << "stack1 max size: " << stack1.MaxSize() << endl;
    cout << "stack2 max size: " << stack2.MaxSize() << endl;
    cout << "stack3 max size: " << stack3.MaxSize() << endl;
    cout << "stack4 max size: " << stack4.MaxSize() << endl
         << endl;

    cout << "stack1 current size: " << stack1.currentSize() << endl;
    cout << "stack2 current size: " << stack2.currentSize() << endl;
    cout << "stack3 current size: " << stack3.currentSize() << endl;
    cout << "stack4 current size: " << stack4.currentSize() << endl
         << endl;

    stack1.isIntegerStackEmpty() ? cout << "Stack1 is Empty" << endl : cout << "Stack1 isn't Empty" << endl;
    stack2.isIntegerStackEmpty() ? cout << "Stack2 is Empty" << endl : cout << "Stack2 isn't Empty" << endl;
    stack3.isIntegerStackEmpty() ? cout << "Stack3 is Empty" << endl : cout << "Stack3 isn't Empty" << endl;
    stack4.isIntegerStackEmpty() ? cout << "Stack4 is Empty" << endl : cout << "Stack4 isn't Empty" << endl;
}