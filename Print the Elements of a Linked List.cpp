#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *link;
};
int display(struct node *head)
{
    while(head!= NULL)
    {
        cout<<head->data<<endl;
        head=head->link;
    }
}
int main()
{
    int n,val;
    struct node *head=NULL;
    struct node *temp=NULL;
    struct node *p=NULL;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        cin>>val;
        temp->data=val;
        temp->link=NULL;
        if(head==NULL)
        {
            head=temp;
        }
        else
        {
            p=head;
            while(p->link!=NULL)
            {
                p=p->link;
            }
            p->link=temp;
        }
    }
    display(head);
}

