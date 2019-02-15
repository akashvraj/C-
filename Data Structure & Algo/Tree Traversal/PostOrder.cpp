/*
	Post Order Traversal of Tree
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
		
		
		void post_order(Node<T>* root)
		{
			if(root == NULL)
				return;
			
			stack<Node<T>*> s;
			Node<T>* current = root;
			
			do
			{
				//Move to left node
				while(current!=NULL)
				{
					//Push current's right child and then current into the stack
					if(current->right)
						s.push(current->right);
					s.push(current);
					
					//Set current to current's left child
					current = current->left;
				}
				
				//Pop item from stack and set it as current
				current = s.top() , s.pop();
				
				/*
					If the popped item has a right child and right child is not processed yet,
					then make sure right child is processed before current.
				*/
				if(current->right && (!s.empty() && s.top() == current->right))
				{
					s.pop(); //Remove right child from stack
					s.push(current); // Push current/parent back to stack
					current = current->right; //change current so that right child is processed next
				}
				else
				{
					cout<<current->data <<" ";
					current=NULL;
				}
				
			}while(!s.empty());
				
			
			
		} // end post_order()	
};


int main()
{
	Node <int> n1=1 , n2=2, n3=3, n4=4, n5=5, n6=6, n7=7;
	BinaryTree <int> bt;
	bt.root = &n1;
	n1.left = &n2; n1.right = &n3;
	n2.left = &n4; n2.right = &n5;
	n3.left = &n6; n3.right = &n7;
	
	
	bt.post_order(&n1);
	
	return 0;
}
