#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

class LinkedList
{
private:
    Node *head;

public:
    LinkedList()
    {
        head = nullptr;
    }

    void append(int value)
    {
        Node *newNode = new Node(value);
        if (head == nullptr)
        {
            head = newNode;
            return;
        }

        Node *current = head;
        while (current->next != nullptr)
        {
            current = current->next;
        }
        current->next = newNode;
    }

    ~LinkedList()
    {
        Node *current = head;
        Node *next;
        while (current != nullptr)
        {
            next = current->next;
            delete current;
            current = next;
        }
    };

    void display(){
        Node* current = head;
        while (current!=nullptr){
            cout<<current->data<<endl;
            current=current->next;
        }
    }
};

int main()
{
    LinkedList list;
    list.append(1);
    list.append(7);
    list.append(2);

    list.display();
    return 0;
}
