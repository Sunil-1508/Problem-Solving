//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


struct node
{
    int data;
    struct node* next;
    
    node(int x){
        data = x;
        next = NULL;
    }
    
};

/* Function to print linked list */
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}


// } Driver Code Ends
/*
  Reverse a linked list
  The input list will have at least one element  
  Return the node which points to the head of the new LinkedList
  Node is defined as 
    struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;
*/

class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        
        
        
        
        node *c=head;
        node *p=NULL;
        node *n=NULL;
        
        int cnt=0;
        
        while(c!=NULL and cnt<k){
            n=c->next;
            c->next=p;
            p=c;
            c=n;
            cnt++;
        }
        
        if(n!=NULL) head->next=reverse(n,k);
        
        
        return p;
        
        
        
    //     // Complete this method
    //     node *c=head;
    //     node *p=NULL;
    //     node *n=NULL;
    //     node *t=head;
    //     node *x=NULL;
    //     node *ans=head;
    //     int f=0;
    //     while(c!=NULL){
    //         int s=k;
    //         while(s-- and c!=NULL){
    //             n=c->next;
    //             c->next=p;
    //             p=c;
    //             c=n;
    //         }
    //         if(c==NULL){
    //             x->next=p;
    //             break;
    //         }
    //         if(f==0){ ans=c; f=1; } c=n; c=p;
    //         if(t) t->next=n;
    //         if(x) x->next=c;
    //         x=t;
    //         t=n;
    //         c=n;
    //         p=NULL;
            
            
    //         //cout<<c->data<<" "<<n->data<<" "<<x->data<<" "<<t->data<<endl;
            
    //   }
        
        
    //     return ans;
    }
};


//{ Driver Code Starts.

/* Drier program to test above function*/
int main(void)
{
    int t;
    cin>>t;
     
    while(t--)
    {
        struct node* head = NULL;
        struct node* temp = NULL;
        int n;
        cin >> n;
         
        for(int i=0 ; i<n ; i++)
        {
            int value;
            cin >> value;
            if(i == 0)
            {
                head = new node(value);
                temp = head;
            }
            else
            {
                temp->next = new node(value);
                temp = temp->next;
            }
        }
        
        int k;
        cin>>k;
        
        Solution ob;
        head = ob.reverse(head, k);
        printList(head);
    }
     
    return(0);
}


// } Driver Code Ends