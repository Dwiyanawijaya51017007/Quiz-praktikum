#include <iostream.h>
#include <conio.h>

main () {
char nama[20],jrs[20];
float Y,A,N,K,D,W,I,TONT,TOT,NK,NMD,NQZ,NFL,NA;
cout <<"Menghitung nilai akhir mahasiswa "<<endl<<endl;
cout <<"masukkan nama 		: " ; cin>> nama;
cout <<"masukkan jurusan   : " ; cin>>jrs;
cout <<"nilai kehadiran	   : " ; cin>>Y;
cout <<"nilai tugas 1 		: " ; cin>>A;
cout <<"nilai tugas 2 		: " ; cin>>N;
cout <<"nilai tugas 3 		: " ; cin>>K;
cout <<"nilai mid 			: " ; cin>>D;
cout <<"nilai quiz			: " ; cin>>W;
cout <<"nilai final			: " ; cin>>I;
TONT = (A+N+K)/3;
TOT = TONT*20/100;
NK  = Y*20/100;
NMD = D*20/100;
NQZ = W*20/100;
NFL = I*20/100;
NA  = TOT+NK+NMD+NQZ+NFL ;
cout<<"\n Nama mahasiswa = "<<nama;
cout<<"\n jurusan mahasiswa = "<<jrs;
cout<<"\n nilai akhir mahasiswa : " <<NA;
getch ();
}
