#include <iostream>
#include <math.h>
using namespace std;

int main() {

	string islem;

	cout<< " Bilimsel hesap makinesine hosgeldiniz : " << endl;
	cout<< " 1-Toplama islemi icin bire basiniz " << endl;
	cout<< " 2-Cikarma islemi icin ikiye basiniz " << endl;
	cout<< " 3-Carpma islemi icin uce basiniz" <<endl;
	cout<< " 4-Bolme islemi icin dorde basiniz" << endl;
	cout<< " 5-Faktoriyel almak icin bese basiniz" <<endl;
	cout<< " 6-Sayinin asal olup olmadigini bulmak icin altiya basiniz" <<endl;
	cout<< " 7-Ebob almak icin yediye basiniz " <<endl;
	cout<< " 8-Ýki sayi arasindaki asal sayilari bulmak icin sekize basiniz "<<endl;
	cout<< " 9-Birden o sayiya kadar olan sayilarin toplami bulmak icin dokuza basiniz " << endl;
	cout<< " 10-Basamaklari toplami icin ona basiniz " << endl;
	cout<< " 11-Sayinin ussunu almak icin onbire basiniz "<< endl;
	cout<< " 12-Ekok almak icin onikiye basiniz "<< endl;
	cout<< " 13-Sayiyi ters cevirmek icin onuce basiniz "<< endl;
	cout<< " 14-Sayiyi yaziya cevirmek  icin ondorde basiniz \n" << endl;

	cout<< " Islem kodunu giriniz : \n";
	cin>> islem;
	if(islem =="6"){
		int sayi,kalan=0;
			cout<< " Girilen sayinin asal olup olmadigini bulan program " << endl;
			cout<< " Tam sayi giriniz : ";
			cin>> sayi;
			for(int i=1;i<=sayi;i++){
				if(sayi%i==0){
					kalan++;
				}
			}
			if(kalan==2){
				cout<<" Sayi asaldir "<< endl;
			}else{
				cout<<" Sayi asal degildir" << endl;
			}

	}else if(islem=="5"){
		int num1,factorial=1;
		    cout << " Faktoriyel hesaplama programi ";

			cout << " Sayiyi giriniz : ";
			cin>> num1;
		    for(int a=1;a<=num1;a++)
		    {
		        factorial=factorial*a;
		    }
			cout<<" Girilen sayinin faktoriyeli : "<<factorial<<endl;

	}else if(islem=="7"){
		 int num1, num2, gcd;
		    cout << " Ebob bulma programi";
		    cout << " Buyuk sayiyi giriniz : ";
		    cin >> num1;
		    cout << " Kucuk sayiyi giriniz : ";
		    cin >> num2;

		    for (int i = 1; i <= num1 && i <= num2; i++)
		    {
		        if (num1 % i == 0 && num2 % i == 0)
		        {
		            gcd = i;
		        }
		    }
		    cout << " Sayilarin ebobu : " << gcd << endl;



	}else if(islem=="8"){
		int num1,num2;
		    int fnd=0,ctr=0;
		    cout << " Ýki sayi arasindaki asal sayilari bulma programi ";

			cout << " Alt limiti giriniz : ";
			cin>> num1;
			cout << " Ust limiti giriniz : ";
			cin>> num2;

			cout << " Sayilarinizin arasindaki sayilar  "<<num1<<"  "<<num2<<" = :";
		    for(int i=num1;i<=num2;i++)
		       {
		           for(int j=2;j<=sqrt(i);j++)
		               {
		               if(i%j==0)
		                  ctr++;
		               }
		               if(ctr==0&&i!=1)
		               { fnd++;
		                 cout<<i<<" ";
		                 ctr=0;
		               }
		               ctr=0;
		       }
		 cout<<" ikisi arasindaki sayilar toplami "<<fnd<< "dir" <<endl;
		 return 1;

	}else if(islem=="9"){
		int n,i,sum=0;
		    cout << " Birden o sayiya kadar olan sayilarin toplami programi " <<endl;

			cout << " Sayiyi giriniz : ";
			cin>> n ;

		    for (i = 1; i <= n; i++)
		    {

		    	cout << i << " ";
				sum=sum+i;
		    }
		     cout << " Birden o sayiya kadar olan sayilarin toplami : "<<sum << endl;

	}else if(islem=="10"){
		 int num1, num2, r, sum=0;
		    cout << "Basamaklari toplami programi ";

		    cout << " Sayiyi giriniz : ";
		    cin >> num1;
		    num2 = num1;
		    while (num1 > 0)
		    {
		        r = num1 % 10;
		        num1 = num1 / 10;
		        sum = sum + r;
		    }
		    cout << " Sayiniz " << num2 << " Basamaklar toplami : " << sum << endl;

	}else if(islem=="1"){

		int sayi1, sayi2;
		cout<< " Toplama islemi programi" <<endl;
		cout<< " Sayi1 : ";
		cin>> sayi1 ;
		cout<<" Sayi1 : ";
		cin>> sayi2;

		cout<< sayi1 << " + " << sayi2 << " = " << sayi1 + sayi2 << endl;

	}else if(islem=="2"){

		int sayi1, sayi2;
		cout<< " Cikarma islemi programi" <<endl;
		cout<< " Sayi1 : ";
		cin>> sayi1 ;
		cout<<" Sayi1 : ";
		cin>> sayi2;

		cout<< sayi1 << " - " << sayi2 << " = " << sayi1 - sayi2 << endl;

	}else if(islem=="3"){

		int sayi1, sayi2;
		cout<< " Carpma islemi programi" <<endl;
		cout<< " Sayi1 : ";
		cin>> sayi1 ;
		cout<<" Sayi1 : ";
		cin>> sayi2;

		cout<< sayi1 << " * " << sayi2 << " = " << sayi1 * sayi2 << endl;

	}else if(islem=="4"){

		double sayi1, sayi2;
		cout<< " Bolme islemi programi" <<endl;
		cout<< " Sayi1 : ";
		cin>> sayi1 ;
		cout<<" Sayi1 : ";
		cin>> sayi2;

		cout<< sayi1 << " / " << sayi2 << " = " << sayi1 / sayi2 << endl;

	}else if(islem=="11"){
		int us,taban,sonuc=1,i;

		cout<< " Uslu sayilar programi "<< endl;
		cout<< " Tabani giriniz : " ;
		cin>> taban;
		cout<< " Ussu giriniz : " ;
		cin>>us;
		for(int i=1;i<=us;i++){

			sonuc=sonuc*taban;
		}
		cout<< taban << "^" << us << " = " << sonuc << endl;

	}else if(islem=="12"){

		int i, sayi1, sayi2, j, hcf = 1, ekok;

			cout << " Ekok alma programi";

		    cout << " Ilk sayiyi giriniz : ";
		    cin >> sayi1;
		    cout << " Ikinci sayiyi giriniz : ";
		    cin >> sayi2;
		    j = (sayi1 < sayi2) ? sayi1 : sayi2;
		    for (i = 1; i <= j; i++) {

		        if (sayi1 % i == 0 && sayi2 % i == 0) {
		            hcf = i;
		        }
		    }

		    ekok = (sayi1 * sayi2) / hcf;
		    cout << " Sayilar : " << sayi1 << " ve " << sayi2 << " in ekoku = " << ekok << endl;


	}else if(islem=="13"){

		int sayi, r, sonuc = 0,t;
		cout<< " Sayiyi ters cevirme programi ";
		cout <<" Sayiyi giriniz: ";
		cin >> sayi;
		    for (t = sayi; sayi != 0; sayi = sayi / 10)
		    {
		        r = sayi % 10;
		        sonuc = sonuc * 10 + r;
		    }
		    cout << " Girilen sayinin tersi : " << sonuc << endl;
	}else if(islem == "14"){

		int n, num = 0, i;
		    cout << "Sayiyi yaziya cevirme programi : " << endl;
		    cout << " Sayiyi giriniz : ";
		    cin >> n;
		    while (n != 0) {
		        num = (num * 10) + (n % 10);
		        n /= 10;
		    }
		    for (i = num; i > 0; i = i / 10) {

		        switch (i % 10) {
		        case 0:
		            cout << "Sýfýr ";
		            break;
		        case 1:
		            cout << "Bir ";
		            break;
		        case 2:
		            cout << "Iki ";
		            break;
		        case 3:
		            cout << "Uc ";
		            break;
		        case 4:
		            cout << "Dort ";
		            break;
		        case 5:
		            cout << "Bes ";
		            break;
		        case 6:
		            cout << "Alti ";
		            break;
		        case 7:
		            cout << "Yedi ";
		            break;
		        case 8:
		            cout << "Sekiz ";
		            break;
		        case 9:
		            cout << "Dokuz ";
		            break;
		        }
		    }
		    cout << endl;
	}
}
