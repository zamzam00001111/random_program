#include <iostream>
using namespace std;

class sk_array {
  public :
    void input();
    void output();
  private :
    string dosen[3];
    string matkul[3];
    float nilai[3];
    int min[3], max[3];
    float jumlah_nilai, rata2;
};

void sk_array::input() {
  cout << "Inputan Nilai Mahasiswa \n";
  for(int i = 0; i < 3; i++) {
    cout << "Nama Dosen "<<i+1<<" : "; 
    cin >> dosen[i];
  }
  for(int i = 0; i < 3; i++) {
    cout << "Matakuliah "<<i+1<<" : "; 
    cin >> matkul[i];
  }
  for(int i = 0; i < 3; i++) {
    cout << "Nilai "<<i+1<<" : "; 
    cin >> nilai[i];
  }
  for(int i = 0; i < 3; i++) {
    cout << "Nilai Min. "<<i+1<<" : "; 
    cin >> min[i];
  }
  for(int i = 0; i < 3; i++) {
    cout << "Nilai Max. "<<i+1<<" : "; 
    cin >> max[i];
  }
  cout<<endl;
  cout<<endl;
}

void sk_array::output() {
  jumlah_nilai = 0;
  for(int i = 0; i < 3; i++) {
    jumlah_nilai = jumlah_nilai + nilai[i];
  }
  rata2 = jumlah_nilai/3;
  cout<<"Nama Dosen\tMata Kuliah\tNilai\tNilai Min.\tNilai max"<<endl;
  cout<<"===================================================================="<<endl;
  for(int i = 0; i < 3; i++) {
    cout<<dosen[i]<<" \t"<<matkul[i]<<" \t"<<nilai[i]<<" \t"<<min[i]<<" \t"<<max[i]<<endl;
  }
  cout<<"===================================================================="<<endl;
  cout<<"Nilai Rata-rata = "<<rata2<<endl;
}

int main() {
  sk_array in;

  in.input();
  in.output();

  return 0;
}
