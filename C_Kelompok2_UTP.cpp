#include <iostream>
#include <conio.h>
using namespace std;
void Rokok(){
	
	string udud[7]={"1. Lucky Strike",
	"2. Djarum",
	"3. Class Mild",
	"4. U Mild",
	"5. Gudang Garam",
	"6. Malboro",
	"7. Dunhill"};
	cout<<"List Rokok"<<endl;
	for(int i=0; i<7; i++){
		cout<<udud[i]<<endl;
	}
}
void timer(){
    int x;
    for (x=60; x>=0; x--){
        cout<<"          Mohon bersabar           "<< endl;
        cout<<"Rokok Anda Sedang Dalam Proses..."<< endl;
        system("cls");
    }
}
int main(){
	Rokok();
	int pilih, total, uang, kembalian;
	int harga[7]={24000, 26000, 26500, 25200, 22000, 32000, 30800};
	cout<<endl;
	cout<<"Ketik angka Rokok yang ingin anda beli : ";
	cin>>pilih;
	system ("cls");
	
	if(pilih ==1){
		timer();
		cout<<"Lucky Strike = Rp.24.000"<<endl;
		cout<<"Jumlah bungkus : ";
		cin>>pilih;
		total= pilih*harga[0];
		cout<<"Total harga : Rp."<<total<<endl;
		cout<<"Masukkan uang anda : Rp.";
		cin>>uang;
		if(uang>=total){
		kembalian= uang-total;
		cout<<"Kembalian = Rp."<<kembalian<<endl;
		}else{
			cout<<"Uang anda tidak mencukupi";
			getch();
			system("cls");
			main();
		}
	}
	else if(pilih ==2){
		timer();
		cout<<"Djarum = Rp.26.000"<<endl;
		cout<<"Jumlah bungkus : ";
		cin>>pilih;
		total= pilih*harga[1];
		cout<<"Total harga : Rp."<<total<<endl;
		cout<<"Masukkan uang anda : Rp.";
		cin>>uang;
		if(uang>=total){
		kembalian= uang-total;
		cout<<"Kembalian = Rp."<<kembalian<<endl;
		}else{
			cout<<"Uang anda tidak mencukupi";
			getch();
			system("cls");
			main();
		}
	}
	else if(pilih ==3){
		timer();
		cout<<"Class Mild = Rp.26.500"<<endl;
		cout<<"Jumlah bungkus : ";
		cin>>pilih;
		total= pilih*harga[2];
		cout<<"Total harga : Rp."<<total<<endl;
		cout<<"Masukkan uang anda : Rp.";
		cin>>uang;
		if(uang>=total){
		kembalian= uang-total;
		cout<<"Kembalian = Rp."<<kembalian<<endl;
		}else{
			cout<<"Uang anda tidak mencukupi";
			getch();
			system("cls");
			main();
		}
	}
	else if(pilih ==4){
		timer();
		cout<<"U Mild = Rp.25.200"<<endl;
		cout<<"Jumlah bungkus : ";
		cin>>pilih;
		total= pilih*harga[3];
		cout<<"Total harga : Rp."<<total<<endl;
		cout<<"Masukkan uang anda : Rp.";
		cin>>uang;
		if(uang>=total){
		kembalian= uang-total;
		cout<<"Kembalian = Rp."<<kembalian<<endl;
		}else{
			cout<<"Uang anda tidak mencukupi";
			getch();
			system("cls");
			main();
		}
	}
	else if(pilih ==5){
		timer();
		cout<<"Gudang Garam = Rp.22.000"<<endl;
		cout<<"Jumlah bungkus : ";
		cin>>pilih;
		total= pilih*harga[4];
		cout<<"Total harga : Rp."<<total<<endl;
		cout<<"Masukkan uang anda : Rp.";
		cin>>uang;
		if(uang>=total){
		kembalian= uang-total;
		cout<<"Kembalian = Rp."<<kembalian<<endl;
		}else{
			cout<<"Uang anda tidak mencukupi";
			getch();
			system("cls");
			main();
		}
	}
	else if(pilih ==6){
		timer();
		cout<<"Malboro = Rp.32.000"<<endl;
		cout<<"Jumlah bungkus : ";
		cin>>pilih;
		total= pilih*harga[5];
		cout<<"Total harga : Rp."<<total<<endl;
		cout<<"Masukkan uang anda : Rp.";
		cin>>uang;
		if(uang>=total){
		kembalian= uang-total;
		cout<<"Kembalian = Rp."<<kembalian<<endl;
		}else{
			cout<<"Uang anda tidak mencukupi";
			getch();
			system("cls");
			main();
		}
	}
	else if(pilih ==7){
		timer();
		cout<<"Dunhill = Rp.30.800"<<endl;
		cout<<"Jumlah bungkus : ";
		cin>>pilih;
		total= pilih*harga[6];
		cout<<"Total harga : Rp."<<total<<endl;
		cout<<"Masukkan uang anda : Rp.";
		cin>>uang;
		if(uang>=total){
		kembalian= uang-total;
		cout<<"Kembalian = Rp."<<kembalian<<endl;
		}else{
			cout<<"Uang anda tidak mencukupi";
			getch();
			system("cls");
			main();
		}
	}else{
		cout<<"Menu tidak tersedia";
		getch();
			system("cls");
			main();
	}
}
