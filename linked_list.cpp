#include <iostream>

using namespace std;

struct node{
    int data;
    node *link;
};

struct node *head;

void insert(int x)
{
    node *temp = new node();
    temp ->data = x;
    temp ->link = head;
    head = temp;
    temp=NULL;
}

void ninsert(int x, int loc){
    node *temp1 = new node();
    temp1 -> data = x;
    temp1 -> link = NULL;
    if(loc == 1){
        head = temp1;
        return;
    };

    node *temp2 = head;
    for(int i = 0; i < loc - 2; i++){
        temp2 = temp2 -> link;
    };
    temp1 -> link = temp2 -> link;
    temp2 -> link = temp1;
    cout << "\n temp2: "<< temp2 <<endl;
}

void print()
{
    node* temp = head;
    cout << "list is ";
    while(temp != NULL)
    {
        cout<<temp->data<<"  ";
        temp=temp->link;
    }
}

int main()
{
    head = NULL;
    cout << head << endl;
    int n,i,x;
    cout << "Enter the no. of elements ";
    //cin>>n;
    /*for(i=0;i<n;i++)
    {
        cout<<endl<<"enter the element ";
        cin >>x;
        insert(x);
        print();
    }*/

    ninsert(5,1);
    ninsert(6,2);
    ninsert(7,3);
    print();
    node* test = head;
    cout << "1 address: " << test;
    test = test -> link;
    cout << "2 address: "  << test;
    return 0;
}
