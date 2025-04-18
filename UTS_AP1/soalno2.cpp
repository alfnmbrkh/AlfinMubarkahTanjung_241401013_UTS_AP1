#include <iostream>

using namespace std;

int main(){
   string kodbin;
   int biner=1;
   int hasil=0;   

   cout<<"Input kode biner : ";
   cin>>kodbin;

    for(int n=kodbin.length()-1; n>=0; n--){
        if (kodbin[n]=='1' || kodbin[n]=='0'){
            if (kodbin[n]=='1'){
                hasil+=biner;
            }
            biner*=2;
        }
        else{
            cout<<"Pesan Rusak!";
            goto a;
        }
    }

    cout<<"Angka desimal dari biner "<<kodbin<<" adalah = "<<hasil;
    a:
    getchar();
}