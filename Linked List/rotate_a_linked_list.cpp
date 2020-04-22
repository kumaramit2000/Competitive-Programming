/*
Given a singly linked list of size N. The task is to rotate the linked list counter-clockwise by k nodes, where k 
is a given positive integer smaller than or equal to length of the linked list.
*/
/*---------------------------1st way----------------------------*/
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

Node *rotate(struct Node *head, int k);

Node *insert() {
    int n, i, value;
    struct Node *temp, *head = NULL;
    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> value;
        if (i == 0) {
            head = new Node(value);
            temp = head;
            continue;
        } else {
            temp->next = new Node(value);
            temp = temp->next;
        }
    }
    return head;
}

void printList(Node *node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
int main(void) {

    int t, k;

    scanf("%d", &t);
    while (t--) {
        Node *head = insert(); // insert function to build linked list
        scanf("%d", &k);
        head = rotate(head, k); // rotate linked list anti-clockwise  by k nodes
        printList(head);        // print linked list after rotation
    }
    return (0);
}
// } Driver Code Ends
/*This is a function problem.You only need to complete the function given below*/
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */
/*  This function should rotate list counter-clockwise
    by k and return new head (if changed) */
Node* rotate(Node* head, int k) {
    // Your code here
    Node* temp=head;
    vector<int>v;
    int i=0;
    while(temp!=NULL)
    {
        v.push_back(temp->data);
        temp=temp->next;
    }
    vector<int>v1;
    int l=v.size();
    k=k%l;
    for(i=k;i<l;i++)
    {
        v1.push_back(v[i]);
    }
    for(i=0;i<k;i++)
    {
       v1.push_back(v[i]);  
    }
    Node* te=head;
    i=0;
    while(te!=NULL)
    {
        te->data=v1[i];
        i++;
        te=te->next;
    }
    v.clear();
    v1.clear();
    return head;
}


/*---------------------------2nd way----------------------------*/
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

Node *rotate(struct Node *head, int k);

Node *insert() {
    int n, i, value;
    struct Node *temp, *head = NULL;
    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> value;
        if (i == 0) {
            head = new Node(value);
            temp = head;
            continue;
        } else {
            temp->next = new Node(value);
            temp = temp->next;
        }
    }
    return head;
}

void printList(Node *node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
int main(void) {

    int t, k;

    scanf("%d", &t);
    while (t--) {
        Node *head = insert(); // insert function to build linked list
        scanf("%d", &k);
        head = rotate(head, k); // rotate linked list anti-clockwise  by k nodes
        printList(head);        // print linked list after rotation
    }
    return (0);
}
// } Driver Code Ends
/*This is a function problem.You only need to complete the function given below*/
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */
/*  This function should rotate list counter-clockwise
    by k and return new head (if changed) */
Node* rotate(Node* head, int k) 
{
    if(k==0)
    {
        return head;
    }
    Node* kthnode=NULL;
    Node* current=head;
    int cou=1;
    while((cou<k)&&current!=NULL)
    {
        current=current->next;
        cou++;
    }
    if(current==NULL)
    {
        return head;
    }
    kthnode=current;
    while(current->next!=NULL)
    {
        current=current->next;
    }
    current->next=head;
    head=kthnode->next;
    kthnode->next=NULL;
    Node* temp=head;
    return head;
}
