#include <bits/stdc++.h>

using namespace std;

class Node
{

public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

Node *initalizeLinkedListArray(vector<int> &nums, Node *&tail)
{

    Node *temp = new Node(nums[0]);
    Node *head = temp;
    tail = temp;
    for (int i = 1; i < nums.size(); i++)
    {
        Node *init = new Node(nums[i]);
        temp->next = init;
        temp = init;
        tail = temp;
    }

    return head;
}

void displayLinkedList(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void InsertAtHead( int Val , Node *&head)
{
    Node*temp = new Node(Val);
    temp->next = head;
    head = temp;
}

void InsertAtTail(int Val , Node*&tail)
{
    Node*temp = new Node(Val);
    tail->next = temp;
    tail = temp;
}
void deleteAtTail(Node*&head , Node*&tail){
    if(head == NULL)
    {
        return;
    }
    if(head == tail){
        delete head;
        head = NULL;
        tail = NULL;
        return;
    }

    Node*mover = head;
    while (mover->next->next!=NULL)
    {
        mover = mover->next;
    }
    Node*temp = tail;
    tail = mover;
    tail->next = NULL;
    delete temp;
}
void deleteAtHead(Node*&head , Node*&tail){
    if(head == NULL)
    {
        return;
    }
    if(head == tail){
        delete head;
        head = NULL;
        tail = NULL;
        return;
    }

    Node*temp = head->next;
    delete head;
    head = temp;

}

int main()
{

    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8};

    Node *tail = NULL;
    Node *head = initalizeLinkedListArray(nums, tail);

    displayLinkedList(head);

    InsertAtTail(9 , tail);
    InsertAtTail(10 , tail);
    cout<<endl;
    deleteAtTail(head,tail);
    displayLinkedList(head);
    cout<<endl;
    deleteAtHead(head,tail);
    displayLinkedList(head);

    return 0;
}