#include <iostream>
using namespace std;

struct bank
{
    string nama;
    string nomor;
    string nomorr;

    bank *next;
    bank *prev;
};

bank *head, *tail, *cur, *newNode, *del;
int maksimaldata=5;

int banyakData()
{
    int banyak = 0;
    if( head == NULL )
    {
        return 0;
    }
    else
    {
        cur = head;
        while( cur != NULL )
        {
            cur = cur->next;
            banyak++;
        }
        return banyak;
    }
}

bool cekdatapenuh()
{
    if( banyakData() == maksimaldata)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool cekdatakosong()
{
    if( banyakData() == 0 )
    {
        return true;
    }
    else
    {
        return false;
    }
}

void enqueue(string nama, string nomor, string nomorr)
{
    if( cekdatapenuh() )
    {
        cout << "Antrian Penuh!!!" << endl;
    }
    else
    {
        if( cekdatakosong() )
        {
            head = new bank();
            head->nama = nama;
            head->nomor = nomor;
            head->nomorr = nomorr; //edit
            head->prev = NULL;
            head->next = NULL;
            tail = head;
        }
        else
        {
            newNode = new bank();
            newNode->nama = nama;
            newNode->nomor = nomor;
            newNode->nomorr = nomorr; //edit
            newNode->prev = tail;
            newNode->next = NULL;
            tail->next = newNode;
            tail = newNode;
        }
    }
}

void dequeue()
{
    if( cekdatakosong() )
    {
        cout << "Data Antrian Kosong!!" << endl;
    }
    else
    {
        del = head;
        head = head->next;
        head->prev = NULL;
        delete del;
  }
}

void tampil()
{
    int antrian = 1;
  //cout << "Data Antrian : " << endl;
  if( cekdatakosong() ){
    cout << "Data Antrian Kosong!!" << endl;
  }else{
    cout << "Banyak data antrian : " << banyakData() << endl;
    cur = head;
    while( antrian <= maksimaldata ){

      if( cur != NULL ){
        cout << antrian << ". " << cur->nama << " - " << cur->nomor <<" - "<< cur->nomorr << endl;
        cur = cur->next;
      }else{
        cout << antrian << ". " << "(kosong)" << endl;
      }

      antrian++;
    }
}
}

void menu()
{
    int angka;
    string nama1,nomor1;
    string nomorr1;

    cout << "\tMENU\t" << endl << endl;
    cout << "1. Tambah Data" << endl;
    cout << "2. Hapus Data " << endl;
    cout << "3. Tampil data" << endl;
    cout << "4. Keluar" << endl;
    cout << "pilih nomor = ";
    cin >> angka;
    if (angka == 1)
    {
        cout << "Masukkan nama  = ";
        cin >> nama1;
        cout << "Nomor loket    = ";
        cin >> nomor1;
        cout << "Masukkan nomor antrian  = ";
        cin >> nomorr1;



        enqueue(nama1,nomor1,nomorr1);
      //  system("pause");
      //  system("cls");
        menu();
    }

    else if (angka == 2)
    {
        dequeue();
      //  system("pause");
      //  system("cls");
        menu();
    }

    else if (angka == 3)
    {
        tampil();
        //system("pause");
        //system("cls");
        menu();
    }

    else if (angka == 4)
    {
        cout << "Matikan.....";
    }

    else
    {
        cout << "Inputan yang anda masukkan salah tolong input kembali" << endl;
        //system("pause");
        //system("cls");
        menu();
    }
}

int main()
{
    cout << "Masukkan maksimal antrian  =   ";
    cin >> maksimaldata;
  //  system("cls");

    menu();
}

------------------------------OUTPUT------------------------------
Masukkan maksimal antrian  =   2
        MENU

1. Tambah Data
2. Hapus Data
3. Tampil data
4. Keluar
pilih nomor = 1
Masukkan nama  = budi
Nomor loket    = 2
Masukkan nomor antrian  = 2
        MENU

1. Tambah Data
2. Hapus Data
3. Tampil data
4. Keluar
pilih nomor = 1
Masukkan nama  = harto
Nomor loket    = 1
Masukkan nomor antrian  = 1
        MENU

1. Tambah Data
2. Hapus Data
3. Tampil data
4. Keluar
pilih nomor = 3
Banyak data antrian : 2
1. budi - 2 - 2
2. harto - 1 - 1
        MENU

1. Tambah Data
2. Hapus Data
3. Tampil data
4. Keluar
pilih nomor = 2
        MENU

1. Tambah Data
2. Hapus Data
3. Tampil data
4. Keluar
pilih nomor = 3
Banyak data antrian : 1
1. harto - 1 - 1
2. (kosong)
        MENU

1. Tambah Data
2. Hapus Data
3. Tampil data
4. Keluar
pilih nomor =
