#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *ptr;
} *head=NULL, *rear=NULL;
void display_list(){
	node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"->";
		temp=temp->ptr;
	}
}
void add_node(){
	int info;
	cout<<"\nENTER THE DATA = ";
	cin>>info;
	node *temp= new node;
	temp->data=info;
	temp->ptr=head;
	head=temp;
	display_list();
}
void add_between_node(int a,int b){
	node *temp=head;
 while(temp!=NULL)
 {
	if(temp->data==a)
	{
		node *add= new node;
		add->data=b;
		add->ptr=temp->ptr;
		temp->ptr=add;
	}
   temp=temp->ptr;
 }
	display_list();
}
void delete_node(){
	node *temp=head;
	node *token;
	while(temp->ptr!=NULL){
		token=temp;
		temp=temp->ptr;
	}
	free(token->ptr);
	token->ptr=NULL;
	display_list();
}
int main()
{
	char ch; int val,new_data;
	start:
	cout<<"ENTER THE ELEMENTS IN THE LIST:- ";
	add_node();
	add:
	cout<<"\nDO YOU WISH TO ENTER MORE(Y/N)= ";
	cin>>ch;
	if(ch=='Y'||ch=='y')
	  goto start;
	cout<<"\nENTER THE NODE(VALUE) AFTER WHICH YOU WANT TO ENTER NEW NODE = ";
	cin>>val;
	cout<<"\nENTER THE DATA FOR NEW NODE = ";
	cin>>new_data;
	add_between_node(val,new_data);
	return 0;
}
