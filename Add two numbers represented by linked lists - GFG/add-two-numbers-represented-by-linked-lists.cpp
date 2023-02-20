//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    Node * reverse(Node *root){
        Node *c=root;
        Node *p=NULL;
        Node *n=NULL;
        while(c){
            n=c->next;
            c->next=p;
            p=c;
            c=n;
        }
        return p;
    }
    int len(Node *root){
        int c=0;
        while(root){
            c++;
            root=root->next;
        }
        return c;
    }
    void print(Node *root){
        while(root){
        cout<<root->data<<" ";
        root=root->next;
        }
    }
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        Node *f=reverse(first);
        Node *s=reverse(second);
        
        // print(f);
        // cout<<endl;
        // print(s);
        // cout<<endl;
        
        if(len(s)>len(f)){
            Node *t=f;
            f=s;
            s=t;
        }
        // print(f);
        // cout<<endl;
        // print(s);
        // cout<<endl;
        Node *j=f;
        int cn=0;
        while(f){
            int k=f->data;
            if(s!=NULL) { f->data=(f->data+s->data+cn)%10; cn=(k+s->data+cn)/10;}
            else {f->data=(f->data+cn)%10; cn=(k+cn)/10;}
            
            //cout<<f->data<<"-"<<cn<<" ";
            
            // if(cn!=0){
            // if(s->next==NULL  and f->next!=NULL) f->next->data=(f->next->data+cn);
            // else if(s->next==NULL  and f->next==NULL) f->next=new Node(cn);
            // }
            if(s!=NULL) s=s->next;
            if(f->next==NULL){ if(cn!=0) { f->next=new Node(cn);} break;} 
            if(s==NULL and cn==0) break;
            f=f->next;
            
            
        }
        
        Node *ans=reverse(j);
        return ans;
        
        
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends