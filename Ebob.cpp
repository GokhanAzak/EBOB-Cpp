#include <iostream>
using namespace std;

int main()
{
	int sayi1, sayi2, ebob, kucuk;
	cout << "Lutfen Sayilari Giriniz: ";
	cin >> sayi1 >> sayi2;
	if (sayi1 > 0 && sayi2 > 0)
	{
		kucuk = (sayi1 < sayi2) ? sayi1 : sayi2;
		for (int i = kucuk; i >= 1; i--)
		{
			if ((sayi1 % i == 0) && (sayi2 % i == 0))
			{
				ebob = i;
				break;
			}
		}
		cout << "EBOB(" << sayi1 << ", " << sayi2 << ") = " << ebob;
	}
	else
	{
		cout << "Hatali Deger Girdiniz!!!";
	}
	return 0;
}