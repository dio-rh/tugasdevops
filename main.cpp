#include <iostream>

using namespace std;


int hitungdiskon (int kuantitas) {

    int hargasetelahdiskon,transaksibruto;
    transaksibruto = kuantitas*50000;
  if(transaksibruto>500000)
        hargasetelahdiskon = (transaksibruto)-transaksibruto*0.2;
        else
            hargasetelahdiskon =transaksibruto;
        return hargasetelahdiskon;


        }


        int hitungkembalian (int transaksitotal, int uangpembayaran){

        int kembalian;
        kembalian= transaksitotal-uangpembayaran;;
        return kembalian;
        }

        int main()
        {

        int kuantitas,transaksibersih,kembalian,uangbayar;
        cout  <<"Masukkan kuantitas pembelian : ";
        cin >>kuantitas;
        cout <<"Masukkan uang pembayaran :" ;
        cin >> uangbayar;
        transaksibersih=hitungdiskon(kuantitas);
        kembalian = hitungkembalian(transaksibersih,uangbayar);
        cout<<"Transaksibersih :" <<transaksibersih;
        cout<<"\nuang kembalian : " <<kembalian;

        return 0;
        }





