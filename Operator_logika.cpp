#include "conio.h"
#include "iostream.h"

main(){
  float a,b,c,d,m;
  clrscr();

  //input
  cout<<"Masukan Nilai M : ";
  	cin>>m;
  cout<<"------------------";

  //Proses
  a = m >= 0 && m >=150;
  b = m >= 0 && m <=150;
  c = m >= 0 || m <=150;
  d = m <= 0 || m >=150;
  cout<<endl;
  clrscr();

  //output
  cout<<"OPERATOR LOGIKA"<<endl;
  cout<<"====================="<<endl;
  cout<< "<" << m << ">=0 && " << m << ">=150>-->"<<a<<endl;
  cout<< "<" << m << ">=0 && " << m << "<=150>-->"<<b<<endl;
  cout<< "<" << m << ">=0 || " << m << "<=150>-->"<<c<<endl;
  cout<< "<" << m << ">=0 || " << m << ">=150>-->"<<d<<endl;
  getch();
}