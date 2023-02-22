//{ Driver Code Starts
#include<iostream>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node *next;
    
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node* sortedMerge(struct Node* a, struct Node* b);

/* Function to print Nodes in a given linked list */
void printList(struct Node *n)
{
    while (n!=NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

/* Driver program to test above function*/
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        int data;
        cin>>data;
        struct Node *head1 = new Node(data);
        struct Node *tail1 = head1;
        for (int i = 1; i < n; ++i)
        {
            cin>>data;
            tail1->next = new Node(data);
            tail1 = tail1->next;
        }

        cin>>data;
        struct Node *head2 = new Node(data);
        struct Node *tail2 = head2;
        for(int i=1; i<m; i++)
        {
            cin>>data;
            tail2->next = new Node(data);
            tail2 = tail2->next;
        }

        Node *head = sortedMerge(head1, head2);
        printList(head);
    }
    return 0;
}

// } Driver Code Ends


 

/* Link list Node
struct Node {
  int data;
  struct Node *next;
  
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
//Function to merge two sorted linked list.
Node* sortedMerge(Node* h1, Node* h2)  
{  
    // code here
    int first;
    if(h1->data<h2->data){ first=h1->data; h1=h1->next;}
    else{ first=h2->data; h2=h2->next;}
    Node *t=new Node(first);
    Node *ans=t;
    while(h1!=NULL and h2!=NULL){
        if(h1->data<h2->data){
            t->next=new Node(h1->data);
            h1=h1->next;
            
        }
        else{
            t->next=new Node(h2->data);
            h2=h2->next;
        }
        t=t->next;
        
        
    }
    if(h1!=NULL){
        while(h1!=NULL){
            t->next=new Node(h1->data);
            h1=h1->next;
            t=t->next;
        }
        }
    if(h2!=NULL){
        while(h2!=NULL){
            t->next=new Node(h2->data);
            h2=h2->next;
            t=t->next;
        }
        }
    return ans;
}  