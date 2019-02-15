/*
	In Order Traversal of Tree
		- Akash Verma 2/15/2019
			v.akash75@yahoo.in
*/

#include<iostream>
#include<stack>

using namespace std;

template<typename T>
class Node
{
	public:
		T data;
		Node<T>* left;
		Node<T>* right;
		
		Node()
		{
			this->left = NULL;
			this->right = NULL;
		}
		
		Node(T data)
		{
			this->data = data;
			this->left = NULL;
			this->right = NULL;
		}
};

template<typename T>
class BinaryTree
{
	public:
		Node<T>* root;
		
		
		void in_order(Node<T>* root)
		{
			if(root == NULL)
				return;
			
			stack<Node<T>*> s;
			Node<T>* current = root;
			
			while(current != NULL || !s.empty())
			{
				while(current != NULL)
				{
					s.push(current);
					current = current->left;
				}
				
				current = s.top(), s.pop();
				cout<< current->data <<" ";
				current = current->right;
			}
		} // end in_order()	
};


int main()
{
	Node <int> n1=1 , n2=2, n3=3, n4=4, n5=5, n6=6, n7=7;
	BinaryTree <int> bt;
	bt.root = &n1;
	n1.left = &n2; n1.right = &n3;
	n2.left = &n4; n2.right = &n5;
	n3.left = &n6; n3.right = &n7;
	
	
	bt.in_order(&n1);
	
	return 0;
}
