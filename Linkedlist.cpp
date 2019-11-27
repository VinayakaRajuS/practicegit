#include<bits/stdc++.h>


using namespace std;


class Node
{
    public:
        int data;
        Node *next;

        Node(const int &val)
        {
            data = val;
            next = NULL;
        }
};

class LinkedList
{
    public:
        Node *head;
        Node *tail;

        LinkedList()
        {
            head = NULL;
            tail = NULL;
        }

        LinkedList &insert(const int &val)
        {
            Node *newNode = new Node(val);
            if(head == NULL && tail == NULL)
            {
                head = tail = newNode;
            }
            else
            {
                tail->next = newNode;
                tail = newNode;
            }
            return *this;
            
        }

        void display()
        {
            Node *curr = head;
            while(curr)
            {
                cout << curr->data << " " << endl;
                curr = curr->next;
            }

        }



};





int main()
{
LinkedList l1;
int n,elem;
cin >> n;
for(int i=0; i<n; i++)
{
    cin >> elem;
    l1.insert(elem);
}
l1.display();





    return 0;
}