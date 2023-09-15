#include<iostream>
using namespace std;

void tukarNama(string *x, string y){
    *x=y;
}

int main(){
    string ganti;
    struct data_nilai{
        string nama[10];
        string mata_kuliah[3];
        int nilai[10];
    };
    data_nilai nilaimhs;
    nilaimhs.nama[0] = "Andi";
    ganti="baru";
    cout<<nilaimhs.nama[0];
    tukarNama(&nilaimhs.nama[0],ganti);
    cout<<nilaimhs.nama[0];



    


}