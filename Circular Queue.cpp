using namespace std;
#include<iostream>
#include<process.h>
#define size 5
class queue{
	private:
		int front,rear;
		int x[size];
	public:
		queue(){
			front=-1;
			rear=-1;
		}
		void insert(int num);
		void del();
		void traverse();
		void search(int num);	
};

void queue::insert(int num){
	if(rear==size-1){
		cout<<"Queue is full...\n";
		return;
	}
	else if(front==-1&&rear==-1){
		front=0;
		rear=0;
		x[rear]=num;
		cout<<endl<<x[rear]<<" is inserted...";
	}
	else{
		if(front==-1)
			front=0;
		rear=(rear+1)%size;
		x[rear]=num;		
		cout<<endl<<x[rear]<<" is inserted...";
	}
}
void queue::del(){
	if(front==-1){
		cout<<"\nQueue is empty...";
		return;
	}
	else {
		if(front==rear){
			cout<<"\nonly one element in queue "<<x[front];
			front=rear=-1;
		}
		else{
			cout<<x[front]<<" is deleted...";
			front=(front+1)%size;
		}
	}
}
void queue::traverse(){
	int i;
	if(front==-1)
	{
		cout<<"Queue is empty\n";
		return;
	}
	else{
		for(i=front;i!=rear;i=(i+1)%size)
			cout<<"->"<<x[i];
		cout<<"->"<<x[i]<<"\n";		
	}
}
void queue::search(int num){
	int i,pos,index=0;
	if(front==-1)
	{
		cout<<"Queue is empty\n";
		return;
	}
	else{
		for(i=0;i<size;i++)
		{
			if(num==x[i])
			{	
				index=1;
				pos=i;
				break;
			}
		}
		if(index==1)
			cout<<"\nelement found at index "<<pos<<" and position "<<pos+1<<endl;
		else
			cout<<"Element not found\n";
	}
}
int main(){
	int choice,num;
	char ans;
	queue obj;
	do{
		cout<<"************Menu************\n";
		cout<<"Press 1 to insert an element\n";
		cout<<"Press 2 to delete an element\n";
		cout<<"Press 3 to traverse.....\n";
		cout<<"Press 4 to search an element\n";
		cout<<"Press 5 exit\n";
		cout<<"Enter Choice->";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"enter number";
				cin>>num;
				obj.insert(num);
				break;
			case 2:
				obj.del();
				break;
			case 3:
				obj.traverse();
				break;
			case 4:
				cout<<"enter number to be searched...";
				cin>>num;
				obj.search(num);
				break;
			case 5:
				exit(0);
				break;
		}
		cout<<"\ndo you want to continue???";
		cin>>ans;
	}while(ans=='y'||ans=='Y');
}
