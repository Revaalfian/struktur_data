#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

class Perhitungan {
friend ostream& operator<<(ostream&, Perhitungan&);
friend istream& operator>>(istream&, Perhitungan&);
public:
float rata();
float STD();
private:
long sqrt(int n) { return(n*n); }
int n;
int A[20];
};

istream& operator>>(istream& in, Perhitungan& a)
{
cout<<"+++++++++WELCOME+++++++++"<<endl;
cout << "Masukan Banyaknya data : ";
cin >> a.n;
for (int i = 0; i < a.n; i++)
{
cout << "Masukkan data ke- " << i+1 << " = ";
cin >> a.A[i];
}
return in;
}

float Perhitungan::rata()
{
float total=0;
for (int i = 0; i<n; i++) total = total + A[i];
return(total/n);
}

float Perhitungan::STD ()
{ float rerata = rata();
float jumlah=0.0;
for (int i = 0; i<n; i++)
jumlah = jumlah + sqrt(A[i] - rerata);
return(sqrt (jumlah/(n-1)));
}

ostream& operator<<(ostream& out, Perhitungan& a) {
cout << "Rata-rata dari " << a.n;
cout<< " bilangan adalah : " << a.rata() << endl;
cout << "Standar deviasi= " << a.STD()<<endl;
cout<<"+++++++THANK YOU++++++++";

return out;
}

int main() {
Perhitungan run;
cin >> run;
cout << run;
return 0;
}
