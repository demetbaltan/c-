#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int sifre,islem,tutar,dogum;
	int sifre2=1403;
	int bakiye=1000;
	int dogum2=1999;
	cout<<"lutfen sifrenizi giriniz:";
	cin>>sifre;
	if(sifre==sifre2){
	
	cout<<"Hosgeldiniz\n";
	
   }else{
	cout<<"Sifreyi Yanlis Girdiniz";
	
	return 0;
 } 
    


    cout<<"Islem seciniz:\n";
    cout<<"1:Para Cekmek\n2:Kart Bilgilerim\n";
    cin>>islem;
    
    
    switch(islem){
    	case 1:
    		cout<<"Bakiyeniz:"<<bakiye<<endl;
    	    cout<<"Cekilecek tutari giriniz:";
    	    cin>>tutar;
    	    
    	    if(tutar>bakiye){
    	    	cout<<"Bakiyeniz yetersiz"<<endl;
			}
			if(tutar<=bakiye){
				bakiye=bakiye-tutar;
				cout<<"Kalan Bakiyeniz:"<<bakiye;
			}break;
			
		case 2:
			cout<<"Dogum tarihinizi giriniz:";
			cin>>dogum;
			
			
			if(dogum==dogum2){
				cout<<"Kart Bilgileriniz"<<endl;
				cout<<"Isim Soyisim:Demet Baltan"<<endl;
			    cout<<"Musteri Numaraniz:123456789"<<endl;
				cout<<"Kartinizin son kullanim tarihi:11/24"<<endl;
				cout<<"Bakiyeniz:"<<bakiye<<endl;
				cout<<"Cekebileceginiz toplam tutar:"<<bakiye;
			}else{
				cout<<"Dogum tarihiniz yanlis.";
			}break;
			
			
	}
    

	return 0;
} 

