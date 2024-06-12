// generic stack implementation
// 2021 csb071
// prayas mazumder
// assignment --> 2 ( programming paradigm)

#include <iostream>
using namespace std;

struct stack
{
    int size;
    int top;
    int *arr;
};

int isGenericStackEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isGenericStackFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

template <typename T>
int pushGenericStack(struct stack *ptr, T &d)
{
    if (isGenericStackFull(ptr))
    {
        cout << "Stack Overflow! Cannot push " << d << "to the stack\n"
             << endl;
        return 0;
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = d;
        cout << d << " successfully pushed into stack" << endl;
        return 1;
    }
}

// template < typename A >
int popGenericStack(struct stack *ptr)
{
    if (isGenericStackEmpty(ptr))
    {
        cout << "Stack Underflow! Cannot pop from the stack\n"
             << endl;
        return -1;
    }
    else
    {
        int d = ptr->arr[ptr->top];
        ptr->top--;
        return d;
    }
}

int currentSize(struct stack *ptr) // function to print the current size of the stack
{

    cout << "current size of the stack is --> " << ((ptr->top) + 1) << endl;
    return 1;
}
// void display_elements(struct stack *ptr)
// {
//     int i;
//     for (i = 0; i <= ((ptr->top) + 1); i++)
//     {
//         cout << ptr[i];
//     }
// }

int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10; // hence its the max size of the stack
    sp->top = -1;  // initialized stack with top = -1 , means stack is empty
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    cout << "Stack has been created successfully\n"
         << endl;
    cout << "Before pushing, Full:\n"
         << isGenericStackFull(sp) << endl;
    cout << "Before pushing, Empty:\n"
         << isGenericStackEmpty(sp) << endl;

    // for float data type -->

    float a1 = 23.45, b1 = 45.17, c1 = 56.14;
    pushGenericStack(sp, a1);
    pushGenericStack(sp, b1);
    pushGenericStack(sp, c1);
    cout << endl;
    currentSize(sp);
    cout << endl;

    // for double data type -->

    double a2 = 73.454585, b2 = 15.1745356, c2 = 05.1447891;
    pushGenericStack(sp, a2);
    pushGenericStack(sp, b2);
    pushGenericStack(sp, c2);
    cout << endl;
    currentSize(sp);
    cout << endl;

    // for int data type -->

    int a = 1, b = 50, c = 12, d = 71;
    pushGenericStack(sp, a);
    pushGenericStack(sp, b);
    pushGenericStack(sp, c);
    pushGenericStack(sp, d);

    cout << endl;
    currentSize(sp);
    cout << endl;

    // pushIntegerStack(sp, 46); // Stack Overflow since the size of the stack is 10
    cout << "After pushing, Full: ??\n"
         << isGenericStackFull(sp) << endl;
    cout << "After pushing, Empty:?? \n"
         << isGenericStackEmpty(sp) << endl;

    cout << "Popped number from the stack is -->\n"
         << popGenericStack(sp) << endl; // --> Last in first out!
    cout << "Popped number from the stack is -->\n"
         << popGenericStack(sp) << endl; // --> Last in first out!
    cout << "Popped number from the stack is -->\n"
         << popGenericStack(sp) << endl; // --> Last in first out!
    return 0;
}
