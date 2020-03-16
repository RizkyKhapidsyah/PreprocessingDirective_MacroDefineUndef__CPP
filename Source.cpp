//Preprocessing Directive
#include <iostream>
#include <conio.h>

//Macro Merubah Nilai Dengan Nama
#define PI 3.14159265359
#define BAHASA "Indonesia"

//Macro Untuk Fungsi
#define KUADRAT(X) (X*X)
#define MAX(A,B) ((A > B) ? A : B)

//Akhir dari Preprocessing Directive
//3.14159265359

using namespace std;

int main()
{
	// Penerapan dari Macro Merubah Nilai Dengan Nama
	cout << "Nilai PI   = " << PI << endl;
	cout << "Bahasa     = " << BAHASA << endl;

	//Penerapan dari Macro Untuk Fungsi
	cout << "Kuadrat X  = " << KUADRAT(34)  << endl;
	cout << "Maximum  = " << MAX(5, 11) << endl;

#undef BAHASA
#define BAHASA "Inggris"

	cout << BAHASA << endl;

	_getch();
	return 0;
}