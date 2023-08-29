//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    public:
    Node * reverse(Node *head){
        Node *c=head;
        Node *n=NULL,*p=NULL;
        
        while(c){
            n=c->next;
            c->next=p;
            p=c;
            c=n;
        }
        
        return p;
    }
    
    Node *compute(Node *head)
    {
        Node *a=reverse(head);
        
        Node *t=a;
        int v=t->data;
        Node *p=t;
        t=t->next;
        
        while(t){
            
            if(t->data>=v){
                p->next=t;
                v=t->data;
                p=t;
            }
            t=t->next;
            
        }
        
        p->next=t;
            
        
        return reverse(a);
        
    }
    
};
   


//{ Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}

// } Driver Code Ends