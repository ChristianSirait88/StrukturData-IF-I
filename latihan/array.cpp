#include<iostream>
using namespace std;

int main(){
    string name[10];

    for (int i = 0; i < 10; i++)
    {
        cout<<"Masukan Nama "<<i<< " : ";
        cin>>name[i];
        
    }
    
    for (int i = 0; i < 10; i++)
    {
        
        cout<<name[i]<<endl;
        
    }
    

}