//Boilerplate for a tree
#include <iostream>
#define COUNT 10
using namespace std;
#include <queue>



class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node (int d){
        data = d;
        left = NULL;
        right=NULL;
    }
};

void printKLevel(Node* head){
        queue<Node*> temp;
        temp.push(head);
        temp.push(NULL);
        // cout << "HERE";
        cout << "Level 0 " << endl;
        while(!temp.empty()){
            Node* tempPtr = temp.front();
            if(tempPtr){
                cout << tempPtr->data << " "; 
                if(tempPtr->left)
                    temp.push(tempPtr->left);
                if(tempPtr->right)
                    temp.push(tempPtr->right);  

                temp.pop();                  
            }
            if(!tempPtr){
                cout << endl;
                cout << "Level change " << endl;
                // temp.push(NULL);
                temp.pop();

                            if(!temp.empty()){
                temp.push(NULL);
            }
            else{
                cout << endl;
                cout << "END" << endl;
            }
            }

           
        }

}



void printTree(Node *root, int space){
   if (root == NULL)
      return;
   space += COUNT;
   printTree(root->right, space);
   for (int i = COUNT; i < space; i++)
      cout<<"\t";
   cout<<root->data<<"\n";
   printTree(root->left, space);
}



using namespace std;
int main() {
    // cout<<"Hello World!";
    Node *head = new Node(1);
    head->left = new Node(2);
    head->right = new Node(3);
    head->left->left = new Node(4);
    head->left->right = new Node(5);
    head->right->left = new Node(6);
    head->right->right = new Node(7);
    head->left->left->left = new Node(8);
    head->left->right->left = new Node(9);
    head->left->right->right = new Node(10);
    head->right->right->right = new Node(11);
    // printTree(head,0);
    queue<int> gquiz;
    //    gquiz.push(10);
    // gquiz.push(20);
    // gquiz.push(30);
    // // cout << gquiz.front();
    // gquiz.pop();

    // cout << gquiz.front();
    // cout << head->data;




    printKLevel(head);



    
    
}
