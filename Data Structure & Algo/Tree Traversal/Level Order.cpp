/*
	Level Order Traversal of Tree
		- Akash Verma 2/15/2019
			v.akash75@yahoo.in
*/

#include<iostream>
#include<queue>

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
		
		
		void level_order(Node<T>* root)
		{
			queue <Node<T>*> q;
			
			if(root == NULL)
				return;
				
			Node<T>* current = root;
			
			while(current != NULL || !q.empty())
			{
				cout<<current->data <<" ";
				
				if(current->left != NULL)
					q.push(current->left);
				if(current->right != NULL)
					q.push(current->right);
				if(! q.empty())
				current = q.front(), q.pop();
				else
					break;
			}
			
			cout<< "\n";
		} // end level_order()	
};


int main()
{
	Node <int> n1=1 , n2=2, n3=3, n4=4, n5=5, n6=6, n7=7;
	BinaryTree <int> bt;
	bt.root = &n1;
	n1.left = &n2; n1.right = &n3;
	n2.left = &n4; n2.right = &n5;
	n3.left = &n6; n3.right = &n7;
	
	
	bt.level_order(&n1);
	
	return 0;
}
