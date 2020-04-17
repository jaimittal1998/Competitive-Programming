#include <bits/stdc++.h>
using namespace std;

struct node{
	int item;
	node *left,*right;
};

node* create_node(int key)
{
	node* temp = new node;
	temp->item = key;
	temp->left = temp->right = NULL;
	return temp;
}

node* insert_node(node* Node, int key)
{
	if(Node==NULL)
		return create_node(key);
		
	if(key < Node->item)
		Node->left = insert_node(Node->left,key);
	else if(key > Node->item)
		Node->right = insert_node(Node->right,key);
		
	return Node;
		
}

void display_tree(node *Node,int count)
{
	if(Node==NULL)
		return;
	
	count+=10;	
	display_tree(Node->right,count);
	for(int i=10;i<count;i++)
	{
		cout<<' ';
	}
	cout<<Node->item;
	display_tree(Node->left,count);
	
}

int main()
{
	int num;
	cout<<"ENTER No. of Nodes:";
	cin>>num;
	node* root = NULL;
	root = insert_node(root,20);
	for(int i=0;i<num;i++)
	{
		int input;
		cin>>input;
		insert_node(root,input);
	}
	display_tree(root, 0);	
	return 0;
}
