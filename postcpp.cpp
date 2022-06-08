#include <iostream>
#include <string>
#include <cstdlib>
 
using namespace std;
 
class geser{
            friend istream& operator>>(istream&, geser&);
            friend ostream& operator<<(ostream&, geser&);
             
            public:
                   geser();
                   void proses1();
                   void proses2();
            private:
                    int a[3];
                    int temp;
                    
            };
 
geser::geser(){}
 
istream& operator>>(istream& in, geser& masuk){
         cout<<"Masukan Array 1: ";
         in >> masuk.a[0];
         cout<<"Masukan Array 2: ";
         in >> masuk.a[1];
         cout<<"Masukan Array 3: ";
         in >> masuk.a[2];
         return in;
         }
 
void geser::proses1(){
                      temp = a[0];
                      a[0] = a[1];
                      a[1] = a[2];
                      a[2] = temp;
                      }
 
void geser::proses2(){
                      temp = a[2];
                      a[2] = a[1];
                      a[1] = a[0];
                      a[0] = temp;
                      }
 
 
ostream& operator<<(ostream& out, geser& keluar){
         out <<"Hasil digeser : "<<keluar.a[0]<<keluar.a[1]<<keluar.a[2]<<endl;
         return out;
         }
 
 
 
main(){
       geser marty;
       cin>>marty;
       marty.proses1();
       cout<<marty;
        
       marty.proses2(); //masih bingung disini bero
       cout<<marty; //sini juga nih
    
       system("pause");
       return 0;
}
