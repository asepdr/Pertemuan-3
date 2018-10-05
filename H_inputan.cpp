#include "conio.h"
#include "stdio.h"
#include "string.h"
#include "iostream.h"

main(){
 char huruf[90];
 char pindah[90];
 clrscr();

 cout<<"Input Kata = ";
 	gets(huruf);
 cout<<"Panjang Kata Yang di input = ";
 	cout<<strlen(huruf);

 getch();
}