
#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include "CustomTypes.h"
#include "Queue.h"
#include "BinaryTree.h"

using namespace std; 

int main(){

	BinaryTree integerTree; 

	integerTree.InitializeTree(); 

	integerTree.Insert(40);
	integerTree.Insert(20);
	integerTree.Insert(10);
	integerTree.Insert(30);
	integerTree.Insert(5);
	integerTree.Insert(12);
	integerTree.Insert(25);
	integerTree.Insert(35);
	integerTree.Insert(60);
	integerTree.Insert(50);
	integerTree.Insert(70);
	integerTree.Insert(45);
	integerTree.Insert(55);
	integerTree.Insert(65);
	integerTree.Insert(75);

	
	cout << endl; 
	cout << endl; 


	cout << "Inorder Traversal : " << endl;
	cout << integerTree.InorderTraversal(); 
	
	cout << endl;
	cout << endl;

	cout << "Preorder Traversal : " << endl;
	cout << integerTree.PreorderTraversal();

	cout << endl;
	cout << endl; 

	cout << "Postorder Traversal : " << endl; 
	cout << integerTree.PostorderTraversal(); 

	cout << endl; 
	cout << endl; 

	cout << "Breadth First Traversal : " << endl; 
	cout << integerTree.BreadthFirstTraversal(); 

	cout << endl; 
	cout << endl; 

	cout << "The number of nodes in the binary tree is: " << endl; 
	cout << integerTree.TreeNodeCount(); 

	cout << endl; 
	cout << endl; 

	cout << integerTree.TreeHeight(); 


    return 0;
}// main 

