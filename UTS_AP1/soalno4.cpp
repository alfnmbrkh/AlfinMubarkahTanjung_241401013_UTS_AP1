#include <iostream>

using namespace std;

int main(){
    int vokal=0;
    int i=0;
    string mantra;

    cout<<"Masukkan Mantra : ";
    getline(cin, mantra);
    
    while(i<mantra.length()){
        mantra[i]=toupper(mantra[i]);
        if (mantra[i]=='A' || mantra[i]=='I' ||mantra[i]=='U' ||mantra[i]=='E' || mantra[i]=='O' ){
        vokal++;
        }
        i++;
    }
    if (vokal==0){
        cout<<"Mantra tidak valid! Tidak mengandung vokal.";
    }else{
        cout<<"Kekuatan mantra: "<<vokal<<" vokal";
    }

    getchar();
}