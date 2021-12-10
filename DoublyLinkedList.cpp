#include<iostream>
using namespace std;
class Node{
	private:
		int info;
		Node *next,*prev;
	public:
		Node(){
			info=0;
			next=NULL;
			prev=NULL;
		}
		void insert_at_end();
		void insert_at_begin();
		void insert_at_key(int);
		void traverse();
		void delete_at_first();
		void delete_at_end();
};

Node *start,*temp;

void Node::insert_at_begin(){
	Node *newNode;
	newNode = new Node;
	cout<<"\nEnter info:";
	cin>>newNode->info;
	if(!newNode){
		cout<<"Overflow!!!";
		return;
	}
	else if(start==NULL){
		start = newNode;
	}
	else{
		newNode->next=start;
		start->prev=newNode;
		start=newNode;
	}
}

void Node::insert_at_end(){
	Node *newNode;
	newNode = new Node;
	cout<<"\nEnter info:";
	cin>>newNode->info;
	if(!newNode){
		cout<<"Overflow!!!";
		return;
	}
	else if(start==NULL){
		start = newNode;
	}
	else{
		temp=start;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newNode;
		newNode->prev=temp;
	}
}

void Node::insert_at_key(int ele){
	int key,check=0;
	Node *newNode;
	newNode = new Node;
	cout<<"\nEnter key position:";
	cin>>key;
	if(!newNode){
		cout<<"Overflow!!!";
		return;
	}
	else if(start==NULL){
		newNode->next=NULL;
		newNode->prev=NULL;
		newNode->info=ele;
		start = newNode;
	}
	else{
		int i=1;
		temp=start;
		while(i<=(key-1)){
			temp=temp->next;
			i++;
		}
		newNode->info=ele;
		newNode->prev=temp;
		newNode->next=temp->next;
		temp->next=newNode;
		newNode->next->prev=newNode;
		cout<<"\ninfo inserted successfully.....";
	}
}

void Node::delete_at_first(){
	if(start==NULL){
		cout<<"List is empty";
	}
	else{
		temp=start;
		start=start->next;
		if(start!=NULL)
			start->prev=NULL;
	}
}

void Node::delete_at_end(){
    if (start == NULL)
        cout<<"\nList is empty\n";
    temp = start;
    while (temp->next != NULL)
        temp = temp->next;
    if (start->next == NULL)
        start = NULL;
    else 
        temp->prev->next = NULL;
}

void Node::traverse(){
	if(start==NULL){
		cout<<"list is empty";
	}
	else{
		temp=start;
		while(temp!=NULL){
			cout<<"=> "<<temp->info<<" ";
			temp=temp->next;
		}
	}
} 

int main(){
	int choice,ele,num;
	char ans;
	Node obj;
	do{
		cout<<"************Menu************\n";
		cout<<"Press 1 to insert at first\n";
		cout<<"Press 2 to insert at end\n";
		cout<<"Press 3 to insert at key\n";
		cout<<"Press 4 to traverse.....\n";
		cout<<"Press 5 to delete first node\n";
		cout<<"Press 6 to delete last node\n";
		cout<<"Press 7 exit\n";
		cout<<"Enter Choice:";
		cin>>choice;
		switch(choice)
		{
			case 1:
				obj.insert_at_begin();
				break;
			case 2:
				obj.insert_at_end();
				break;
			case 3:
				cout<<"Enter information to be added:";
				fflush(stdin);
				cin>>ele;
				obj.insert_at_key(ele);
				break;
			case 4:
				obj.traverse();
				break;
			case 5:
				obj.delete_at_first();
				break;
			case 6:
				obj.delete_at_end();
				break;
			case 7:
				exit(0);
				break;
		}
		cout<<"\ndo you want to continue???";
		cin>>ans;
	}while(ans=='y'||ans=='Y');
}
