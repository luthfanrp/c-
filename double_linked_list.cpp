#include<iostream>


using namespace std;
 char reply;
//void printReverse();
struct node
{
    int value;
    struct node* next;
    struct node* prev;
};
struct node* head;
struct node* tail;

void init()
{
    head=NULL;
    tail=NULL;
}

void insertFirst(int element)
{
    struct node* newItem;
    newItem=new node;
    if(head==NULL)
    {
        head=newItem;
        newItem->prev=NULL;
        newItem->value=element;
        newItem->next=NULL;
        tail=newItem;
    }
    else
    {
        newItem->next=head;
        newItem->value=element;
        newItem->prev=NULL;
        head->prev=newItem;
        head=newItem;
    }
}

void printReverse()   //BALIK OUTPUT
{
    struct node* temp;
    temp=tail;
    while(temp!=NULL)
    {
        cout<<temp->value<<"->";
        temp=temp->prev;
    }
    cout<<endl;
}

void printList()   //CETAK OUTPUT
{
    struct node* temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->value);
        temp=temp->next;
    }
   // puts("");
   printReverse(); //MENUJU KE BALIK OUTPUT

}
int element;
int main()


{
    init();

    int choice;
    do {



            //int element;
            cout<<"Masukkan angka : ";
            cin>>element;
           insertFirst(element);
            //printList();
        cout << "Tambah angka lagi ? <y/n> : ";

        cin >> reply;
      }
    while (reply == 'y' || reply == 'Y');

    //insertFirst(element);

            printList();
}

-----------------------OUTPUT-----------------------
Masukkan angka : 1
Tambah angka lagi ? <y/n> : y
Masukkan angka : 2
Tambah angka lagi ? <y/n> : y
Masukkan angka : 3
Tambah angka lagi ? <y/n> : n
3->2->1->1->2->3->  


