#include <iostream>
using namespace std;

int main(){
    float detik,menit,jam,hari;
    cout <<"konversi waktu\n"<<"input detik:";
    cin >>detik;
    jam =detik/3600;
    menit=detik /60;
    hari=detik/86400;
    cout<<"nilainya itu:"<<detik<<"detik \n";
    cout <<"nilainya itu:"<<menit<<"menit\n";
    cout <<"nilainya itu:"<<jam<<" jam\n";
    cout <<"nilainya itu:"<<hari<<"hari";
    cin.get ();}
