#include<iostream>
#include<malloc.h>
using namespace std;

void tukar(string *x,string *y,string *z){
    *x="125";
    *y= "172";
    *z = "276";

}

int main(){
    string x,y,z;
    x="abu";
    y="ana";
    z="antum";
    cout<<"Nilai Awal x,y,z"<<endl;
    cout<<x<<" "<<y<<" "<<z<<endl;
    tukar(&x, &y,&z);
    cout<<"Nilai Akhir x,y,z"<<endl;
    cout<<x<<" "<<y<<" "<<z<<endl;


}