// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
/* Link list Node */
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node *start = NULL;

struct Node* segregate(struct Node *head);

// Function to sort a linked list of 0s, 1s and 2s
void printList(struct Node *Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
void insert(int n1) {
    int n, value, i;
    // scanf("%d",&n);
    n = n1;
    struct Node *temp;
    for (i = 0; i < n; i++) {
        scanf("%d", &value);

        if (i == 0) {
            start = new Node(value);
            temp = start;
            continue;
        } else {
            temp->next = new Node(value);
            temp = temp->next;
            temp->next = NULL;
        }
    }
}

int main() {

    int n;

    int t;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        insert(n);
        struct Node *newHead = segregate(start);
        printList(newHead);
    }

    return 0;
}// } Driver Code Ends
/*
  Sort the list of 0's,1's and 2's
  The input list will have at least one element
  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

// This function is to segregate the elememtns in the linked list
// This will do the required arrangement by changing the links
Node* segregate(Node *head) {
    
    // Add code here
    Node* temp=head;
    int zc=0,oc=0,tc=0;
    while(temp!=NULL)
    {
        int x=temp->data;
        if(x==0)
        {
            zc++;
        }
        else if(x==1)
        {
            oc++;
        }
        else
        {
            tc++;
        }
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL)
    {
        if(zc>0)
        {
            temp->data=0;
            zc--;
        }
        else if(oc>0)
        {
            temp->data=1;
            oc--;
        }
        else
        {
            temp->data=2;
            tc--;
        }
        temp=temp->next;
    }
    return head;
}
