# depo1
Sharpe Oranı Hesaplama Programı

Bu program, bir yatırımın Sharpe Oranı'nı hesaplamak amacıyla tasarlanmıştır. Sharpe Oranı, bir yatırımın riskine göre ne kadar verimli olduğunu ölçen önemli bir finansal göstergedir. Bu oran, yatırımcıların risk-adjusted performansı değerlendirmelerine yardımcı olur.

Programın Amacı

Sharpe Oranı, yatırımın getirisinin riskine göre ne kadar fazla olduğunu anlamaya yardımcı olan bir orandır. Yatırımcılar, yatırım portföylerinin riskli veya risksiz yatırımlara kıyasla ne kadar verimli olduğunu analiz etmek için bu oranı kullanır.

Sharpe Oranı Hesaplama Formülü:

Sharpe Oranı = (Yatırım Getirisi - Risksiz Faiz Oranı) / Standart Sapma

Yatırım getirisinin, risksiz faiz oranı ile farkı, portföyün riskine (standart sapma) bölünerek Sharpe Oranı hesaplanır.

Girdi Bilgileri:

Program kullanıcıdan aşağıdaki verileri alır:

Yatırım Getirisi: Yatırımın yıllık getirisini belirtir. Örneğin, %15 getiri için 0.15 girilmelidir.

Risksiz Faiz Oranı: Genellikle devlet tahvilleri gibi risksiz yatırımların yıllık faiz oranıdır. Örneğin, %5 risksiz faiz için 0.05 girilmelidir.

Standart Sapma: Portföyün riskini veya volatilitesini temsil eder. Örneğin, %12'lik bir risk için 0.12 girilmelidir.

Çıktılar:

Program, girilen verilere göre Sharpe Oranı’nı hesaplar ve ardından sonucu değerlendirir:

Sharpe Oranı >= 3.0: Mükemmel

2.0 <= Sharpe Oranı < 3.0: Çok İyi

1.0 <= Sharpe Oranı < 2.0: İyi

Sharpe Oranı < 1.0: Düşük

Hatalı Giriş Durumu:

Eğer kullanıcı hatalı bir giriş yaparsa (örneğin, negatif değer, sıfır gibi geçersiz veriler), program hata mesajı vererek işlemi sonlandırır.

Kullanım

Programı çalıştırın.

Gerekli girişleri doğru bir şekilde girin.

Program, Sharpe Oranı’nı hesaplayarak sonucu ve değerlendirmeyi ekranda gösterecektir.
