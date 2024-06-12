// using c++ class to store and add two polynomials using linked list
// 2021csb071 prayas mazumder

#include <iostream>
using namespace std;

class Node
{
public:
    int coefficient;
    int exponent;
    Node *next;

    Node(int coeff, int exp)
    {
        coefficient = coeff;
        exponent = exp;
        next = nullptr;
    }
};

class LinkedList
{
public:
    Node *head;

    LinkedList()
    {
        head = nullptr;
    }

    void insert(int coeff, int exp)
    {
        Node *newNode = new Node(coeff, exp);
        if (head == nullptr || exp > head->exponent)
        {
            newNode->next = head;
            head = newNode;
        }
        else
        {
            Node *current = head;
            while (current->next != nullptr && current->next->exponent >= exp)
            {
                current = current->next;
            }
            newNode->next = current->next;
            current->next = newNode;
        }
    }

    void display()
    {
        Node *current = head;
        while (current != nullptr)
        {
            cout << " " << current->coefficient << "x^" << current->exponent << " ";
            current = current->next;
        }
        cout << endl;
    }
};

LinkedList addPolynomials(LinkedList poly1, LinkedList poly2)
{
    LinkedList result;
    Node *current1 = poly1.head;
    Node *current2 = poly2.head;

    while (current1 != nullptr && current2 != nullptr)
    {
        if (current1->exponent == current2->exponent)
        {
            result.insert(current1->coefficient + current2->coefficient, current1->exponent);
            current1 = current1->next;
            current2 = current2->next;
        }
        else if (current1->exponent > current2->exponent)
        {
            result.insert(current1->coefficient, current1->exponent);
            current1 = current1->next;
        }
        else
        {
            result.insert(current2->coefficient, current2->exponent);
            current2 = current2->next;
        }
    }

    while (current1 != nullptr)
    {
        result.insert(current1->coefficient, current1->exponent);
        current1 = current1->next;
    }

    while (current2 != nullptr)
    {
        result.insert(current2->coefficient, current2->exponent);
        current2 = current2->next;
    }

    return result;
}


int main()
{
    LinkedList poly1;
    int m, n, terms;
    cout << "how many ternms  the first polynomial has " << endl;
    cin >> terms;

    for (int i = 0; i < terms; i++)
    {
        cout << "enter coefficient and exponent of  term " << i + 1 << endl;
        cin >> m >> n;
        poly1.insert(m, n);
    }

    cout << "Polynomial 1: ";
    poly1.display();

    LinkedList poly2;
    int k, l, TERMS;
    cout << "how many ternms  the second polynomial has " << endl;
    cin >> TERMS;
    
    for (int j = 0; j < terms; j++)
    {
        cout << "enter coefficient and exponent of  term " << j + 1 << endl;
        cin >> k >> l;
        poly2.insert(k, l);
    }

    cout << "Polynomial 2: ";
    poly2.display();
    cout<<endl;

    LinkedList result = addPolynomials(poly1, poly2);
    cout << "Added Polynomial: ";
    result.display();
    cout << endl;

    return 0;
}
