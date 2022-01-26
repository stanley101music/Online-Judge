#include<iostream>
#include<algorithm>
using namespace std;

//always start from 1
/*
typedef struct node{
	int id;
	node *next;
	node *prev;
}Node;

int main()
{
	int n,k;
	
	while(cin>>n>>k)
	{
		if(n==0)break;
		if(k==1)
		{
			cout<<1<<'\n';
			continue;
		}
		
		Node *head=new Node;
		Node *cur=new Node;
		cur->id=1;
		cur->prev=NULL;
		cur->next=NULL;
		head=cur;
		for(int i=2;i<=n;i++)
		{
			Node *temp=new Node;
			temp->id=i;
			cur->next=temp;
			temp->prev=cur;
			temp->next=NULL;
			cur=cur->next;
		}
		cur->next=head;
		head->prev=cur;
		
		Node *tmp=head;
		Node *tmp2;
		while(tmp->prev!=tmp->next)
		{
			for(int i=0;i<k;i++)
			{
				tmp=tmp->next;
				tmp2=tmp;
			}
				
			for(int i=0;i<k;i++)
				tmp2=tmp2->next;
			
			// XX~tmp2~tmp~XX
			if(tmp->next==tmp2)
			{
				tmp->prev->next=tmp2;
				tmp2->prev=tmp->prev;
			}	
			//XX~tmp~tmp2~XX
			else if(tmp2->next=tmp)
			{
				tmp2->next=tmp->next;
				tmp->next->prev=tmp2;
			}
			else
			{
				tmp2->prev->next=tmp2->next;
				tmp2->next->prev=tmp2->prev;
				tmp->next->prev=tmp2;
				tmp->prev->next=tmp2;
				tmp2->next=tmp->next;
				tmp2->prev=tmp->prev;
				tmp=tmp2;
			}			
		}
		cout<<tmp->id<<'\n';
	}
}
*/

int p[101];

int find(int s,int k,int n)
{
	while(k)
	{
		s=(s+1)%n;
		if(p[s]!=-1)
			k--;
	}
	return s;
}


int main()
{
	int n,k,m;
	
	while(cin>>n>>k)
	{
		if(n==0)break;
		m=n;
		
		for(int i=0;i<n;i++)
			p[i]=i;
		int s=(k-1)%n;
		
		for(int i=1;i<m;i++)
		{
			p[s]=-1;
			swap(p[find(s,k,n)],p[s]);
			s=find(s,k,n);
		}		
		
		cout<<(m-p[s])%n+1<<'\n';
	}
	return 0;
}
