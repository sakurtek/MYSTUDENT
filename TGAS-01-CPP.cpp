#include <iostream>
using namespace std;

class TManusia
{
public:
TManusia();
~TManusia();
void berjalan();
void gender();
};

class TPria : public TManusia
{
public:
TPria();
~TPria();
void gender();
};

class TWanita : public TManusia
{
public:
TWanita();
~TWanita();
void gender();
};

int main()
{
TWanita *felicia = new TWanita();
felicia->gender();
delete felicia;
return 0;
}

TManusia::TManusia() {
cout << "\nTManusia Constructor calling.";
}
TManusia::~TManusia() {
cout << "\nTManusia Destructor calling.\n";
}
void TManusia::berjalan() {
cout << "TManusia: Fungsi berjalan.";
}
void TManusia::gender() {
cout << "TManusia: Gender unknown.";
}
TPria::TPria() {
cout << "\nTPria Constructor calling.";
}
TPria::~TPria() {
cout << "\nTPria Destructor calling.";
}
void TPria::gender() {
cout << "\nTPria: Gender laki - laki.";
}
TWanita::TWanita() {
cout << "\nTWanita Constructor calling.";
}
TWanita::~TWanita() {
cout << "\nTWanita Destructor calling.\n";
}
void TWanita::gender() {
cout << "\nTWanita: Gender perempuan.";
}