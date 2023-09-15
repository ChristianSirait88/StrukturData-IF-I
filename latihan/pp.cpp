#include <iostream>
using namespace std;



int main(){
    int jumlahMahasiswa;
    struct dataMahasiswa 
    {
        string nama[10];
        int nilai_bahasa[10];
        int nilai_matematika[10];

    };
    dataMahasiswa mhs;   

    cout<<"Masukan Total Mahasiswa : ";
    cin>>jumlahMahasiswa;
    for (int i = 0; i < jumlahMahasiswa; i++)
    {
        cout<<"Nama : ";cin>>mhs.nama[i];
        cout<<"Nilai Bahasa";cin>>mhs.nilai_bahasa[i];
        cout<<"Nilai Matematika : ";

    }
    

}