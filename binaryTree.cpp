#include <iostream>
using namespace std;

class Node 
{
public:
    int info;
    Node *leftchild;
    Node *rightchild;

    //Construktur for the node class
    Node()
    {
         leftchild = nullptr; //Initialized left child to null
        rightchild = nullptr; //Initialized right child to null
    }
};

class BinaryTree
{
public:
    Node *ROOT;

    BinaryTree()
    {
        ROOT = nullptr; //Initialized ROOT to null
    }

    void insert()
    {
        int x;
        cout << "Masukkan nilai: ";
        cin >> x;
        
        