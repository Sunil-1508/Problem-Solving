//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
struct Node* modifyTheList(struct Node *head);
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

void print(Node *head)
{
    Node *temp=head;
	while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}


// } Driver Code Ends
/*Complete the function below
Node is as follows:
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};
*/
class Solution{
    public:
    
    Node* reverse(Node *h){
        Node *c=h;
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
    struct Node* modifyTheList(struct Node *head)
    {
        //add code here.
        
        Node *c1=head;
        
        Node *f1=head;
        Node *f2=head;
        Node *f=head;
        
        while(f->next and f->next->next){
            f1=f1->next;
            f=f->next->next;
        }
        
        //cout<<f1->data;
        // Node *c2=f1;
        // while(c2->next){
        //     c2=c2->next;
        // }
        
        //cout<<c2->data;
        
       
        Node *c2=reverse(f1->next);
        //f1->next->next=NULL;
         
        Node *g=c2;
        //cout<<c2->data<<" "<<c1->data<<" "<<f1->data;
        while(c1!=c2){
            int t=c1->data;
            c1->data=(c2->data-c1->data);
            c2->data=t;
            
            c1=c1->next;
            if(c1==c2 or c1->next==c2) break;
            c2=c2->next;
            
        }
        
        f=reverse(g);
        

        
        //cout<<f1->data<<" "<<f1->next->next->data<<" ";
        
        
        return head;
        
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		struct Node *head = NULL,*temp=NULL;
		while(n--){
		    int a;
            cin>>a;
			Node *newNode = new Node(a);
			if(head==NULL)
                head=newNode;
            else
                temp->next=newNode;
            temp=newNode;
		}
		Solution obj;
		head = obj.modifyTheList(head);
		print(head);
		
	}
    return 0;
}
// } Driver Code Ends