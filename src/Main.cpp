#include <iostream>
using namespace std;

int main()
{   
    int JumlahSuku;
    int suku1 = 0;
    int suku2 = 1;
    int suku_berikutnya;

    /*
		FIBONACCI
		(deret penjumlahan suku sebelumnya)

		contoh:
		1 1 2 3 5 8 13....

		rumusnya:
		suku ke-3 = suku ke-1 + suku ke-2

		suku(3) = suku(3-1) + suku(3-2)
		suku(3) = suku(2) + suku(1)
		2 = 1 + 1
	
	*/

    cout << "FIBONACCI" << endl;
    cout << "Masukkan jumlah baris fibonacci yang diinginkan: ";
    cin >> JumlahSuku;

    cout << endl;
    cout << "Ini hasilnya: " << endl;

    cout << suku1 << " ";
    for (int i = 0; i < JumlahSuku; i++)
    {
        suku_berikutnya = suku1 + suku2;
        
        suku1 = suku2;
        suku2 = suku_berikutnya;

        cout << suku_berikutnya << " ";
    }

    cout << endl;
    cout << "<=== THANK YOU ===>\n"; 


    cin.get();
    return 0;

    system("pause"); //Karena cmd saya ttp ngeflashing pas input data

} 