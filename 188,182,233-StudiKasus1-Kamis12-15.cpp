#include<iostream>
#include <iomanip>
using namespace std;

class Pertamina{
	friend ostream &operator<<(ostream &out, Pertamina &bensin);
	friend istream &operator>>(istream &in, Pertamina &bensin);
	public:
		setPertamina(int pertamax, int pertalite, float beli, int pilih){
			this->beli = beli;
			this->pilih = pilih;
		}
		
		void hitungTotal(){
			if(pilih == 1){
				hasil = beli * pertamax;
			}else if(pilih == 2){
				hasil = beli * pertalite;
			}
		}
			
		
	private:
		int pertamax = 9000;
		int pertalite = 7000;
		float beli;
		int pilih;
		int hasil;
};


ostream &operator<<(ostream &out, Pertamina &bensin) {
	out<<"==================================="<<endl;
	out<<"          Total Pembayaran        "<<endl;
	out<<"==================================="<<endl;
	out<<" Petamax  = 9000/L"<<endl;
	out<<" Pertalite = 7000/L"<<endl;
	cout<<" "<<endl;
	 if (bensin.pilih == 1) {
        out<<" Pertamax ";
    }else if(bensin.pilih == 2){
        out<<" Pertalite ";
    }else{
        out<<" Tidak Diketahui";
    }
    
     out<<bensin.beli<<" Liter \n";
    out<<" Total Bayar"<<" Rp. "<<bensin.hasil <<"   \n";
}

istream &operator>>(istream &in, Pertamina &bensin){
	cout<<"====================================\n";
	cout<<"|\t      Struk\t\t   |\n";
	cout<<"|\t  PERTAMINA MANTAP\t   |\n";
	cout<<"====================================\n";
	cout<<" 1. Pertamax\n 2. Pertalite\n";
	
	cout<<" Masukan Pilihan Anda : ";
	in>>bensin.pilih;
	cout<<" Berapa bensin yang ingin dibeli : ";
	in>>bensin.beli;
	cout<<" "<<endl;
	bensin.hitungTotal();
	return in;
	
}


int main(){
Pertamina x;
	cin>>x;
	cout<<x;
}
