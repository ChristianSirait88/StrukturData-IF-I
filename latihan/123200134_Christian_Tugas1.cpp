#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    struct mahasiswa {
        long long nim;
        string nama;
        string alamat;
    };
    mahasiswa mhs[50];
    int a=0,pilih,jumlah;
    string kembali;
    menu:
    cout<<"Menu"<<endl;
    cout<<"1. Input Data"<<endl;
    cout<<"2. Lihat Data"<<endl;
    cout<<"3. Cari Data"<<endl;
    cout<<"Pilih : ";
    cin>>pilih;
    if (pilih==1){
        system ("cls");
        cout<<"<--- Input Data --->\n";
        cout<<"Masukan Jumlah Mahasiswa : ";
        cin>>jumlah;
        for (int i=1;i<=jumlah;i++){
            cout<<"Mahasiswa ke - "<<i<<endl;
            cout<<"NIM     : ";
            cin>>mhs[i].nim;
            cout<<"Nama    : ";
            cin.ignore();
            getline(cin,mhs[i].nama);
            cout<<"alamat  : ";
            getline(cin,mhs[i].alamat);
            a++;
            cout<<endl;
        }
        cout<<"Kembali ke Menu ? (y/n) : ";
        cin>>kembali;
        if (kembali=="y"){
            system ("cls");
            goto menu;
        }
        else {
            return 0;
        }
    }
    else if (pilih==2){ 
        system ("cls");
        cout<<"-- Cetak Data --"<<endl;
        for(int i=1;i<=a;i++){
            cout<<"Mahasiswa ke - "<<i<<endl;
            cout<<"Nim     : "<<mhs[i].nim<<"\n";
            cout<<"Nama    : "<<mhs[i].nama<<"\n";
            cout<<"Alamat  : "<<mhs[i].alamat<<"\n";
            cout<<endl;
        }
        cout<<"Kembali ke Menu ? (y/n) : ";
        cin>>kembali;
        if (kembali=="y"){
            system ("cls");
            goto menu;
        }
        else {
            return 0;
        }
    }
    else if (pilih==3){
        system ("cls");
        bool test =false;
        string cari,carinama;
        long long carinim;
        int temp;
        cout<<"Menu Pencarian\n";
        cout<<"Cari Berdasarkan ?\n";
        cout<<"a. NIM\n";
        cout<<"b. Nama\n";
        cout<<"Masukan Pilihan Anda : ";
        cin>>cari;
        cout<<endl;
        if(cari=="a"){
            cout<<"Masukan nim : ";
            cin>>carinim;
            for(int i=0;i<=a;i++){
                if(mhs[i].nim==carinim){
                    temp=i;
                    test=true;
                    break;
                }
            }
            cout<<"Hasil Pencarian\n";
            if (test==true){
                cout<<"Nim : "<<mhs[temp].nim <<endl;
                cout<<"Nama : "<<mhs[temp].nama <<endl;
                cout<<"Alamat : "<<mhs[temp].alamat <<endl;
            }
            else {
                cout<<"Maaf Nim Tidak Ditemukan Silahkan Kembali ke Menu\n";
            }
        cout<<"Kembali ke Menu ? (y/n) : ";
        cin>>kembali;
        if (kembali=="y"){
            system ("cls");
            goto menu;
        }
        }
        if(cari=="b"){
            cout<<"Masukan Nama : ";
            cin>>carinama;
            for(int i=0;i<=a;i++){
                if(mhs[i].nama==carinama){
                    temp=i;
                    test=true;
                    break;
                }
            }
        cout<<"Hasil Pencarian\n";
        if (test==true){
            cout<<"Nim : "<<mhs[temp].nim <<endl;
            cout<<"Nama : "<<mhs[temp].nama <<endl;
            cout<<"Alamat : "<<mhs[temp].alamat <<endl;
        }
        else {
        cout<<"Maaf Nama Tidak Ditemukan Silahkan Kembali ke Menu\n";
        }
        }
        cout<<"Kembali ke Menu ? (y/n) : ";
        cin>>kembali;
        if (kembali=="y"){
            system ("cls");
            goto menu;
        }
        else {
            return 0;
        }
    }
}