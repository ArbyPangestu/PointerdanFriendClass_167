#include <iostream>
using namespace std;

class mahasiswa
{
public:
  int nim;
  void showNim()
  {
      cout << "no induk = " << nim << endl;
  }

};

int main()
{
  mahasiswan*mhs = new mahasiswa(1); //pointer object mhs
  mhs->nim = 2;
  mhs->showNim();
  delete mhs;
  return 0;
}