#include "conio.h"
#include "string.h"
#include "iostream.h"

main() {
 char k1[20];
 char k2[20];
 clrscr();

 cout<<"Masukan Kalimat1 = ";
 	cin>>k1;
 cout<<"Masukan Kalimat2 = ";
 	cin>>k2;

 strcat(k1,k2);

 cout<<"Hasil Penggabukan = "<<k1;
 getch();

}