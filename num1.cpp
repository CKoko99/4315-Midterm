
#include <iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
class LinkedList{
    node *head, *tail;
    public:
    LinkedList(){
        head = NULL;
        tail = NULL;
    }
    void addNode(int n){
        node *tmp = new node;
        tmp->data = n;
        tmp->next = NULL;
        if(head == NULL){
            head = tmp;
            tail = tmp;
        }
        else{
            tail->next = tmp;
            tail = tail->next;
        }
    }
    void display(){
        node *tmp;
        tmp = head;
        while(tmp != NULL){
            cout << tmp->data << " ";
            tmp = tmp->next;
        }
    }
    void slice(int start, int end){
        node *tmp;
        tmp = head;
        int i = 0;
        while(tmp != NULL){
            if(i >= start && i <= end){
                cout << tmp->data << " ";
            }
            tmp = tmp->next;
            i++;
        }
    }
};


int main()
{
    cout << "Hello World!" << endl;
    int numArray[5] = {1,2,3,4,5};
    LinkedList list;
    for(int i = 0; i < 5; i++){
        list.addNode(numArray[i]);
    }

    list.slice(1,3);
    return 0;
}