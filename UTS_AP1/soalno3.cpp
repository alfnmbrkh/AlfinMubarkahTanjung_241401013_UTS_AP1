#include <iostream>

using namespace std;

int main(){
    int alnier,pds,so;
    float ratarata;
    string nama,nim;
    
    cout<<"Nama Mahasiswa: ";
    getline(cin,nama);
    cout<<"NIM: ";
    cin>>nim;
    cout<<"Nilai Mata Kuliah: "<<endl;
    cout<<"Aljabar Linear: ";
    cin>>alnier;
    cout<<"Probabilitas dan Statistik: ";
    cin>>pds;
    cout<<"Sistem Operasi: ";
    cin>>so;
    cout<<endl;

    cout<<"Aljabar Linear: ";
    alnier>=60 ? 
    cout<<"Lulus.\n" : cout<<"Tidak Lulus. Silahkan Ulangi di Tahun Depan!\n";
    cout<<"Probabilitas dan Statistik: ";
    pds>=60 ? 
    cout<<"Lulus.\n" : cout<<"Tidak Lulus. Silahkan Ulangi di Tahun Depan!\n";
    cout<<"Sistem Operasi: ";
    so>=60 ? 
    cout<<"Lulus.\n" : cout<<"Tidak Lulus. Silahkan Ulangi di Tahun Depan!\n";
    
    ratarata=(alnier+pds+so)/3;

    cout<<"Nilai rata-rata Semester ini: "<<ratarata;
    getchar();
}