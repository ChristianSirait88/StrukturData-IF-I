#include <iostream>
using namespace std;

int main(){
    string namaMahasiswa[10];
    string namaDosen[10];
    string nama[10];

    struct Mahasiswa
    {
        string nama[20];
        int nim[20];
        int nilai[10];
        char kelas[6];
    };

    Mahasiswa mhs;

    for (int i = 0; i < 3; i++)
    {
        cin>>mhs.nama[i];
        cin>>mhs.kelas[i];
    }

    for (int i = 0; i < 3; i++)
    {
        cout<<mhs.nama[i];
        cout<<mhs.kelas[i];
    }
    
    
}