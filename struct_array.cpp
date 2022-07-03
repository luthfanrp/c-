#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;



struct buku_07397
{
 char kode[10];
   char judul[50];
   char pengarang[20];
   char penerbit[50];
   //int jmlhal;
};


struct peminjam_07397
{

   char nama[50];
   int jumlh;
   string d,m,y;

buku_07397 mybook1_07397;
buku_07397 mybook2_07397;
};


void input()
{

buku_07397 mybook1_07397,mybook2_07397;

peminjam_07397 satu,dua;


      cout << "Judul Buku : " ;
      gets(mybook1_07397.judul);
      cout << "Nama Pengarang : ";
      gets(mybook1_07397.pengarang);
      cout << "Tahun Terbit : ";
      gets(mybook1_07397.penerbit);


      cout << "Judul Buku : " ;
      gets(mybook2_07397.judul);
      cout << "Nama Pengarang : ";
      gets(mybook2_07397.pengarang);
      cout << "Tahun Terbit : ";
      gets(mybook2_07397.penerbit);



      cout << "Nama Peminjam : " ;
      gets(satu.nama);


      cout << "Jumlah buku yang dipinjam : ";
      cin >> dua.jumlh;


}

void output()
{

   buku_07397 mybook1_07397,mybook2_07397;
    peminjam_07397 satu,dua;
    satu.d = "20-01-2021";

      cout << "\nJudul Buku         : " << mybook1_07397.judul;
      cout << "\nNama Pengarang     : " << mybook1_07397.pengarang ;
      cout << "\nTahun Penerbit     : " << mybook1_07397.penerbit << endl;

      cout << "\nJudul Buku         : " << mybook2_07397.judul;
      cout << "\nNama Pengarang     : " << mybook2_07397.pengarang;
      cout << "\nTahun Penerbit     : " << mybook2_07397.penerbit;
      //cout << endl;
      cout << "\nNama Peminjam                  : " << satu.nama;
      cout << "\nTanggal Peminjam               : " << satu.d;
      cout << "\nJumlah buku yang dipinjam      : " << dua.jumlh;
}

int main()
{
   buku_07397 mybook1_07397,mybook2_07397;
  peminjam_07397 satu,dua;
    //tes.mybook1_07397 = mybook1_07397;
input();
output();
}











------------------------------------------------OUTPUT------------------------------------------------

Judul Buku : menghitung hari
Nama Pengarang : josep
Tahun Terbit : 2002
Judul Buku : kana
Nama Pengarang : alex kan
Tahun Terbit : 2003
Nama Peminjam : budi
Jumlah buku yang dipinjam : 2

Judul Buku         : menghitung hari
Nama Pengarang     : josep
Tahun Penerbit     : 2002

Judul Buku         : kana
Nama Pengarang     : alex kan
Tahun Penerbit     : 2003
Nama Peminjam                  : budi
Tanggal Peminjam               : 20-01-2021
Jumlah buku yang dipinjam      : 2
Process returned 0 (0x0)   execution time : 49.640 s
Press any key to continue.
