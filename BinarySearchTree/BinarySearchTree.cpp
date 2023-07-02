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

        if (parent == NULL)                                         //if the parent is null (tree is empty)
        {
            root = newNode;                                         //mark  the new node as root
            return;                                                 //exit
        }
        if (element < parent->info)                               //if the value in the data field of the new node is less than that of the parent
        {
            parent->leftchild = newNode;                            //make the left child of the parent point to the new node
        }
        else if (element > parent->info)                          //if the value in the data field of the new node is greater than of the parent
        {
            parent->rightchild = newNode;                           //make the right child of the parent point to the new node
        }
    }

    void search(string element, Node*& parent, Node*& curentNode)
    {
        //this function searches the curentNode of the specifield Node as well as the curent node of its parent
        curentNode = ROOT;
        parent = NULL;
        while ((curentNode != NULL) && (curentNode->info != element))
        {
            parent = curentNode;
            if (element < curentNode->info)
                curentNode = curentNode->leftchild;
            else
                curentNode = curentNode->rightchild;
        }
    }

    void inorder(Node* ptr)
    {
        if (ROOT == NULL)
        {
            cout << "Tree is empty" << endl;
            return;
        }
        if (ptr != NULL)
        {
            inorder(ptr->leftchild);
            cout << ptr->info << " ";
            inorder(ptr->rightchild);
        }
    }

    void preorder(Node* ptr)
    {
        if (ROOT == NULL)
        {
            cout << "Tree is empty" << endl;
            return;
        }
        if (ptr != NULL)
        {
            cout << ptr->info << " ";
            preorder(ptr->leftchild);
            preorder(ptr->rightchild);
        }
    }

    void postorder(Node* ptr)
    {
        //performs the postorder traversal of the tree
        if (ROOT == NULL)
        {
            cout << "Tree is empty << endl;
                return; "
        }
        if (ptr != NULL)
        {
            postorder(ptr->leftchild);
            postorder(ptr->righchild);
            cout << ptr->info << " ";
        }
    }
};

int main()
{
    Binary tree obj;
    while (true)
    {
        cout << "\nMenu" << endl;
        cout << "1. Implement insert operation" << endl;
        cout << "2. Perform inorder traversal" << endl;
        cout << "3. Perform preorder traversal" << endl;
        cout << "4. Perform postorder traversal" << endl;
        cout << "5. Exit" << endl;
        cout << "\nEnter your choice (1-5) : ";

        char ch;
        cin >> ch;
        cout << endl;

        switch (ch)
        {
        case '1':
        {
            cout << "Enter a word: "
                string word;
            cin >> word;
            obj.insert(word);
            break;
        }
        case '2':
        {
            obj.inorder(obj.ROOT);
            break;
        }
        case '3':
        {
            obj.preorder(obj.ROOT);
            break;
        }

        }
    }
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
