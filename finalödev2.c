#include <stdio.h>

// Sharpe Oran�n� hesaplayan fonksiyon
double hesaplaSharpeOrani(double yatirimGetirisi, double risksizFaizOrani, double standartSapma) {
    // Standart sapman�n s�f�r olmas� durumunu kontrol et
    if (standartSapma == 0.0) {
        // Bu durumda Sharpe Oran� tan�ms�zd�r veya sonsuzdur (pratikte s�f�r risk kabul edilmez)
        return -1.0; // Hata sinyali olarak negatif de�er d�nd�relim
    }

    // Sharpe Oran� Form�l�: (Yat�r�m Getirisi - Risksiz Faiz Oran�) / Standart Sapma
    return (yatirimGetirisi - risksizFaizOrani) / standartSapma;
}

// Ana fonksiyon
int main() {
    // De�i�ken tan�mlamalar�
    double getiri, risksizFaiz, standartSapma, sharpeOrani;

    // Kullan�c�dan giri�leri al
    printf("--- Sharpe Oran� Hesaplama Program� ---\n\n");

    // Yat�r�m Getirisi
    printf("Yat�r�m�n Y�ll�k Getirisini (�rne�in %%15 i�in 0.15) giriniz: ");
    if (scanf("%lf", &getiri) != 1) {
        printf("Hatal� giri� yapt�n�z.\n");
        return 1;
    }

    // Risksiz Faiz Oran�
    printf("Risksiz Faiz Oran�n� (�rne�in %%5 i�in 0.05) giriniz: ");
    if (scanf("%lf", &risksizFaiz) != 1) {
        printf("Hatal� giri� yapt�n�z.\n");
        return 1;
    }

    // Portf�y�n Standart Sapmas� (Risk)
    printf("Portf�y�n Standart Sapmas�n� (Riskini) (�rne�in %%12 i�in 0.12) giriniz: ");
    if (scanf("%lf", &standartSapma) != 1) {
        printf("Hatal� giri� yapt�n�z.\n");
        return 1;
    }

    // Sharpe Oran�n� hesapla
    sharpeOrani = hesaplaSharpeOrani(getiri, risksizFaiz, standartSapma);

    // Sonucu ekrana yazd�r ve de�erlendir
    if (sharpeOrani < 0) {
        printf("\nUYARI: Standart Sapma s�f�r olamaz veya hesaplamada bir hata olu�tu.\n");
    } else {
        printf("\n--- Hesaplama Sonucu ---\n");
        printf("Sharpe Oran� = (%.4f - %.4f) / %.4f = %.4f\n",
               getiri, risksizFaiz, standartSapma, sharpeOrani);

        printf("\n--- De�erlendirme ---\n");
        if (sharpeOrani >= 3.0) {
            printf("Sharpe Oran� de�eri m�kemmel (>= 3.0) kabul edilir.\n");
        } else if (sharpeOrani >= 2.0) {
            printf("Sharpe Oran� de�eri �ok iyi (>= 2.0) kabul edilir.\n");
        } else if (sharpeOrani >= 1.0) {
            printf("Sharpe Oran� de�eri iyi (>= 1.0) kabul edilir.\n");
        } else {
            printf("Sharpe Oran� de�eri 1.0'in alt�ndad�r.\n");
        }
    }

    return 0;
}
