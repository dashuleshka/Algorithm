#include <iostream>
#include <fstream>
#include <ostream>
using namespace std;

struct Node
{
    int value;//ключ узла
    Node* left;
    Node* right;
    Node(int a = 0)
    {
        value = a;
        left = nullptr;
        right = nullptr;
    }
};

class BinaryTree{
private:
    Node* head;
    int size;
public:
    BinaryTree()
    {
        head = nullptr;
        //size = 0;
    }

    
    void Inserting(int a) 
    {
        Node* pred;
        pred = head;
        Node* parent;
        parent = nullptr;

        while (pred != nullptr) {
            parent = pred;
            if (a < pred->value) {
                pred = pred->left;
            }
            else if (a > pred->value) {
                pred = pred->right;
            }
            else return;
        }

        Node* z = new Node(a);

        if (parent == nullptr) {
            head = z;
        }
        else if (parent->value > a) {
            parent->left = z;
        }
        else if (parent->value < a) {
            parent->right = z;
        }
    }
    void RecursLeftFoot(Node* tree, ofstream& fout)    
    {
        if (tree != nullptr)
        {
            fout << tree->value << endl;
            RecursLeftFoot(tree->left, fout);
            RecursLeftFoot(tree->right, fout);

        }
    }
    void RecursLeftFoot(BinaryTree* tree, ofstream& fout) {
        if (tree != nullptr)
        {
            fout << tree->head->value << endl;
            RecursLeftFoot(tree->head->left, fout);
            RecursLeftFoot(tree->head->right, fout);

        }
    }
};

int main() {

    ofstream fout("input.txt");
    ifstream fin("output.txt");

    BinaryTree* T = new BinaryTree();
    int n;
    while (!fin.eof()) {
        while (fin >> n)
        {
            T->Inserting(n);
        }
        T->RecursLeftFoot(T, fout);
    }
    return 0;
}
