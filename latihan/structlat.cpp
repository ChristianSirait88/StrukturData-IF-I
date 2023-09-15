#include<iostream>
using namespace std;
int main(){
    int pilihMenu,banyakPelanggan;
    int angka=0;
    string kembaliMenu;
    struct sewaKaset
    {
        int noUrut[10];
        string namaPeminjam[10];
        string kaset[10];
        int lamaPinjam[10];
    };
    sewaKaset kst;
    awal:
    cout<<"Data Sewa Kaset"<<endl;
    cout<<"1. Input Nama Pembeli"<<endl;
    cout<<"2. Cari Peminjam"<<endl;
    cout<<"3. Pembayaran"<<endl;
    cout <<"pilih";
    cin>>pilihMenu;

    if (pilihMenu==1)
    {
        cout<<"Banyak Data : ";
        cin>>banyakPelanggan;

        for (int i = 0; i < banyakPelanggan; i++)
        {
            angka++;
            cout<<"Nomor Urut : "<<angka<<endl;
            kst.noUrut[i] = angka;
            cout<<"Nama : ";
            cin>>kst.namaPeminjam[i];
            cout<<"Kaset : ";
            cin>>kst.kaset[i];
            cout<<"Lama Pinjam : ";
            cin>>kst.lamaPinjam[i];
        }

        cout<<"Menu?";
        cin>>kembaliMenu;
        if (kembaliMenu =="y" || kembaliMenu =="Y"){
            goto awal;
        }
        else
        {
            exit;
        }
          
    }

     else if (pilihMenu==2)
    {
        string cariPeminjam;
        int j;
        cout<<"Cari Peminjam : ";
        cin>>cariPeminjam;

        for (int i = 0; i < angka; i++)
        {
            if (kst.namaPeminjam[i] == cariPeminjam)
            {
                j=i;
                break;
            }
            
        }
        cout<<"Nomor  = "<<kst.noUrut[j]<<endl;
        cout<<"Nama = "<< kst.namaPeminjam[j]<<endl;
        cout<<"kaset = "<< kst.kaset[j]<<endl;
        cout<<"Lama Pinjam = "<<kst.lamaPinjam[j]<<endl;
        cout<<"total bayar = "<<kst.lamaPinjam[j]*10000<<endl;

        cout<<"Menu?";
        cin>>kembaliMenu;
        if (kembaliMenu =="y" || kembaliMenu =="Y"){
            goto awal;
        }
        else
        {
            exit;
        }
          
    }
    

}