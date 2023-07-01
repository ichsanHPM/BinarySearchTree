#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string info;
    Node* leftchild;
    Node* rightchild;

    //constructor for the node class
    Node(string i, Node * l, Node* r)
    {
        info = i;
        leftchild = l;
        rightchild = r;
    }
};

class BinaryTree {
public:
    Node* ROOT;

    BinaryTree()
    {
        ROOT = Null;                        //initializing root to null
    }

    void insert(string element)             //insert a node in the binary search tree
    {
        Node* newNode = new Node(element, NULL, NULL);              //allocate memory for the new node
        newNode->info = element;                                    //asign value to the data field on the new node
        newNode->leftchild = NULL;                                  //make the leftchild of the new node point to null
        newNode->rightchild = NULL;                                 //make the right child of the new node point to null

        Node* parent = NULL;
        NOde* curentNode = NULL;
        search(element, parent, currentNode);                       //locate the the node which will be the parent of the node to be inserted
    }
};

int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
