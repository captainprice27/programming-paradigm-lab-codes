// stack implementation
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

int isIntegerStackEmpty(struct stack *ptr)
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

int isIntegerStackFull(struct stack *ptr)
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

int pushIntegerStack(struct stack *ptr, int d)
{
    if (isIntegerStackFull(ptr))
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

int popIntegerStack(struct stack *ptr)
{
    if (isIntegerStackEmpty(ptr))
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

int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10; // hence its the max size of the stack
    sp->top = -1;  // initialized stack with top = -1 , means stack is empty
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    cout << "Stack has been created successfully\n"
         << endl;
    cout << "Before pushing, Full:\n"
         << isIntegerStackFull(sp) << endl;
    cout << "Before pushing, Empty:\n"
         << isIntegerStackEmpty(sp) << endl;
    pushIntegerStack(sp, 1);
    pushIntegerStack(sp, 69);
    pushIntegerStack(sp, 75);
    pushIntegerStack(sp, 71);
    pushIntegerStack(sp, 21);
    pushIntegerStack(sp, 76);
    currentSize(sp);
    pushIntegerStack(sp, 63);
    pushIntegerStack(sp, 74);
    pushIntegerStack(sp, 79);
    pushIntegerStack(sp, 56); // ---> Pushed 10 values
    currentSize(sp);

    pushIntegerStack(sp, 46); // Stack Overflow since the size of the stack is 10
    cout << "After pushing, Full:\n"
         << isIntegerStackFull(sp) << endl;
    cout << "After pushing, Empty: \n"
         << isIntegerStackEmpty(sp) << endl;

    cout << "Popped number from the stack is -->\n"
         << popIntegerStack(sp) << endl; // --> Last in first out!
    cout << "Popped number from the stack is -->\n"
         << popIntegerStack(sp) << endl; // --> Last in first out!
    cout << "Popped number from the stack is -->\n"
         << popIntegerStack(sp) << endl; // --> Last in first out!
    return 0;
}
