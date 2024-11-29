#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    // "file.txt" dosyasini sadece okuma modunda (ios::in) ac
    ifstream dosya("file.txt", ios::in);

    // Kelimeleri tutmak icin degisken
    string kelime;

    // Toplam kelime sayisini tutmak icin sayac
    int kelimeSayisi = 0;

    // Dosyanin basariyla acilip acilmadigini kontrol et
    if (dosya.is_open()) {
        // Dosya bitene kadar her bir kelimeyi oku
        while (dosya >> kelime) {
            kelimeSayisi++; // Her okunan kelime icin sayaci bir arttir
        }

        // Dosyayi kapatmayi unutma
        dosya.close();

        // Toplam kelime sayisini ekrana yazdir
        cout << kelimeSayisi;
    }
    else {
        // Dosya acilamazsa hata mesaji ver
        cout << "dosya acilamadi";
    }

    return 0;
}
