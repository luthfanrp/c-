#include <iostream>

using namespace std;


struct node
{
    string nama,npm,jurusan;
    node *next;
}databarang;

node *newnode,*head,*tail,*cur,*bantu;

void simpulbaru(string nama,string npm,string jurusan)
{
    newnode=new node;
    newnode->nama=nama;
    newnode->npm=npm;
    newnode->jurusan=jurusan;
    newnode->next=NULL;
}

void tambahbelakang()
{
    if (head==NULL)
    {
        head=newnode;
    }
    else
    {
        tail->next=newnode;
    }
    tail=newnode;
}
void lihat()
{
    cur=head;
    while(cur!=NULL)
    {
        cout<<"Nama    : "<<cur->nama<<endl;
        cout<<"NPM     : "<<cur->npm<<endl;
        cout<<"Jurusan : "<<cur->jurusan<<endl<<endl;
        cur=cur->next;
    }
}

void bubblesort()
{
    node *data,*data1;
    data1=NULL;
    int swapp;
    if (head==NULL)
    {
        cout<<"data kosong "<<endl;
    }
    else{
        do{
            data=head;
            swapp=0;
            while(data->next!=data1)
            {
                if (data->npm>data->next->npm)
                {
                    string temp;
                    temp=data->npm;
                    data->npm=data->next->npm;
                    data->next->npm=temp;
                    data->next->npm=temp;
                    swapp=1;
                }
                data=data->next;
            }
            data1=data;

        }while(swapp);
    }
}
void linearsearch()
{
    string pos;
    int maju=1,pil;
    cin.ignore();
    cout<<"nama mahasiswa yang dicari : ";
    getline(cin,pos);
    bantu=head;
    while(bantu!=NULL)
    {if(bantu->nama!=pos){bantu=bantu->next;maju++;}
        else
        {pil=1;
        break;
        }}
    if(pil==1)
    {
        cout<<"node di temukan ke : "<<maju<<endl;
        cout<<"Nama    : "<<bantu->nama<<endl;
        cout<<"NPM     : "<<bantu->npm<<endl;
        cout<<"Jurusan : "<<bantu->jurusan<<endl<<endl;

    }
    else
    {
        cout<<"node tidak ada"<<endl;
    }
}

void viewafterbublesort()
{
    int ul=1;
    cur=head;
    while (cur!=NULL)
    {
        cout<<ul<<".Data Npm setelah di sorting : "<<cur->npm<<endl;
        cur=cur->next;
        ul++;
    }


}

void menu()
{
    int pil;

       cout<<"\tMENU\t"<<endl;
       cout<< endl;
       cout<<" 1.input data            "<<endl;
       cout<<" 2.cari data             "<<endl;
       cout<<" 3.urutan                "<<endl;
       cout<<" 4.tampilkan data        "<<endl;

       cout << endl;
       cout<<"pilih inputan : ";
       cin>>pil;
       if (pil==1)
       {
           cin.ignore();
           cout<<endl;
           cout<<"input data nama    : " ;
           cin >> databarang.nama;

           cout<<"input data npm     : ";
           cin >> databarang.npm;

           cout<<"input data jurusan : ";
           cin >> databarang.jurusan;

           simpulbaru(databarang.nama,databarang.npm,databarang.jurusan);
           tambahbelakang();
          menu();
       }
        else if (pil==2)
       {
           linearsearch();
           menu();
       }
       else if (pil==3)
       {
           bubblesort();
           viewafterbublesort();
            system("PAUSE");
          menu();
       }
       else if (pil==4)
       {
           lihat();
           menu();
       }

}

int main()
{
    menu();

}

-------------------------------OUTPUT-------------------------------
    MENU

 1.input data
 2.cari data
 3.urutan
 4.tampilkan data

pilih inputan : 1

input data nama    : budi
input data npm     : 987.654
input data jurusan : infor
        MENU

 1.input data
 2.cari data
 3.urutan
 4.tampilkan data

pilih inputan : 1

input data nama    : harto
input data npm     : 123.456
input data jurusan : infor
        MENU

 1.input data
 2.cari data
 3.urutan
 4.tampilkan data

pilih inputan : 2
nama mahasiswa yang dicari : budi
node di temukan ke : 1
Nama    : budi
NPM     : 987.654
Jurusan : infor

        MENU

 1.input data
 2.cari data
 3.urutan
 4.tampilkan data

pilih inputan : 4
Nama    : budi
NPM     : 987.654
Jurusan : infor

Nama    : harto
NPM     : 123.456
Jurusan : infor

        MENU

 1.input data
 2.cari data
 3.urutan
 4.tampilkan data

pilih inputan : 3
1.Data Npm setelah di sorting : 123.456
2.Data Npm setelah di sorting : 987.654
Press any key to continue . . .
        MENU

 1.input data
 2.cari data
 3.urutan
 4.tampilkan data

pilih inputan : 4
Nama    : budi
NPM     : 123.456
Jurusan : infor

Nama    : harto
NPM     : 987.654
Jurusan : infor

        MENU

 1.input data
 2.cari data
 3.urutan
 4.tampilkan data

pilih inputan :
