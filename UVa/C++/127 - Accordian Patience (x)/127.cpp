#include<iostream>
#include<stack>
using namespace std;

typedef struct Node{
	stack<pair<char,char>> card;
	struct Node *next;
	struct Node *prev;
}node;

int main()
{
	char rank,suit;
	
	while(1)
	{
		node *temp=new node;
		node *head=new node;
		int total=52;
		for(int i=1;i<=52;i++)
		{
			//Input  EX:AH QS 2H 
			rank=getchar();            //A,2~9,T,J,Q,K
			if(rank=='#') return 0;    // END OF INPUT
			suit=getchar();            //Clubs,Diamonds,Hearts,Spades
			getchar();                 //space | enter
		
			// Linked stack
			//head
			if(i==1)
			{
				node *pile=new node;
				pile->card.push(make_pair(rank,suit));
				pile->prev=NULL;
				pile->next=NULL;
				head=pile;
				temp=pile;	
			}
			//others
			else
			{
				node *pile=new node;
				pile->card.push(make_pair(rank,suit));
				pile->next=NULL;
				pile->prev=temp;
				temp->next=pile;
				temp=temp->next;
			}			
		}	
		
		//BUG!!??
		for(node *tmp=head;tmp!=NULL;tmp=tmp->next)
		{
			//check if rank||suit is same
			//left3->left1
			if((tmp->prev->prev->prev->card.top().first==tmp->card.top().first || 
			   tmp->prev->prev->prev->card.top().second==tmp->card.top().second) && 
			   tmp->prev!=NULL && tmp->prev->prev!=NULL && tmp->prev->prev->prev!=NULL)
			{
				tmp->prev->prev->prev->card.push(tmp->card.top());
				tmp->prev->next=tmp->next;
				tmp->next->prev=tmp->prev;
				total--;
			}
			else if((tmp->prev->card.top().first==tmp->card.top().first ||
			        tmp->prev->card.top().second==tmp->card.top().second) &&
			        tmp->prev!=NULL)
			{
				tmp->prev->card.push(tmp->card.top());
				tmp->prev->next=tmp->next;
				tmp->next->prev=tmp->prev;
				total--;
			}
		}
		
		if(total==1)
			cout<<"1 pile remaining:";
		else
			cout<<total<<" pile remaining";
		
		
		for(node *tmp=head;tmp!=NULL;tmp=tmp->next)
		{
			cout<<' '<<tmp->card.size();
		}
	}
	
}
