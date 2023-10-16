#include <iostream>
#include <fstream>
using namespace std;

int main() {
   //txt dosyasini oku
    ifstream inputFile("input.txt");
  //okumada hata var mi kontrol et
    if (!inputFile) {
        cout << "File Error!" << endl;
        return 1;
    }
    //kac tane sayi oldugunu ogren
    int a;
    inputFile >> a;

    int sum = 0;
    int product = 1;
    int smallest;
    double average = 0;
    for (int i = 0; i < a; i++)
    {
        int sayi;
        inputFile >> sayi;
        //toplamlarini bul
        sum += sayi;
        //carpimlarini bul
        product *= sayi;
        //en kucuk sayiyi bul
        if (i == 0 || sayi < smallest) {
            smallest = sayi;
        }
    }
    inputFile.close();
    //ortalamayi bul
    average = sum / a;
    //hepsini yazdir
    cout << "Sum is " << sum << endl;
    cout << "Product is " << product << endl;
    cout << "Average is " << average << endl;
    cout << "Smallest is " << smallest << endl;
    return 0;
}