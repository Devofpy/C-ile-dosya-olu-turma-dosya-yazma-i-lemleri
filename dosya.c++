/*
C++ programlama dilinde dosya işlemleri için fstream kütüphanesi yer alır
ifstream ve ofstream sınıfları kullanılır

Dosya oluşturma işlemi içim;
>>>ofstream fonksiyonunda dosya adının yazması teterli olacaktır

Dosya oluşturma işlemi için;
>>>>ofstream fonksiyonu kulllanılacaktır

Dosyanın var olup olmadığı ve açılabilir olup olmadığının ıs_open() metodu ile kontrol edilmesi faydalı olacakatır
*/

 
 #include <iostream>
 #include <fstream>

 using namespace std;
 int main()
 {
    ofstream dosyaYaz('dosya.txt');
    dosyaYaz.close();
    dosyayaz<<'ErenDeNiZ';
    if (dosyaYaz.is_open())
    {
        dosyaYaz <<'ErenDeNiZ';
        dosyaYaz.close();
    }
    
    return.0;



 }