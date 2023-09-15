#include <iostream>
#include <cstring>
using std::cout;
int main()
{  struct data_nilai	{ 	
		char nomhs[10];
		char nama[16];
		float nilai;
};
  struct data_nilai nilaimhs;
  strcpy(nilaimhs.nomhs,"123090000");
  strcpy(nilaimhs.nama,"Sponsbob");
  nilaimhs.nilai=95.00;
  cout << "Nama  : " << nilaimhs.nama << "\n";
  cout << "Nomhs : " << nilaimhs.nomhs << "\n";
  cout << "Nilai : " << nilaimhs.nilai;
 }
