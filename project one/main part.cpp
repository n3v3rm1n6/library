#include<iostream>
#include<string>
#include <iomanip>
#include <cmath>

using namespace std;


int main()
{
	setlocale(LC_ALL, "Rus");
//	//int digit = 1;
//	//cout << digit << endl; 
//
//	//char a = 'a';
//	//cout << a;
//
//	//string name;
//	//cout << "Hello,how are you?" << endl;
//	//cout << "How long is your cock? :";
//	//cin >> name;
//	//cout << "Nice cock,awesome balls " << name << endl;
//
//	//int first_digit;
//	//int second_digit;
//	//int third_digit;
//	//double semen;
//	//cout << "Enter first digit:";
//	//cin >> first_digit;
//	//cout << "Enter second digit:";
//	//cin >> second_digit;
//	//cout << "Enter third digit:";
//	//cin >> third_digit;
//	//semen = first_digit * second_digit / third_digit;
//	//cout << "Сума чисел " << semen << endl;
//
//	//cout << "\t\tHouse" << endl;
//	//cout << "\t\t*" << endl;
//	//cout << "\t\t\b*\t\b\b\b\b\b*" << endl;
//	//cout << "\t\t\b\b\b*\t/\\\t\b\b*" << endl;
//	//cout << "\t\t\b\b\b\b\b*\t\b\b\b*\t\b\b\b* * * * * *" << endl;
//	//cout << "\t\t\b\b\b*\t  *" << endl;
//	//cout << "\t\t\b\b\b*\t\t*" << endl;
//	//cout << "\t\t\b\b\b* * * * * " << endl;
//
//	/*string nemo;
//	cout << "\tinfo" << endl;
//	cout << "\t\t\b\b\b\b\bname:валерий " << endl;
//	cout << "\t\t\b\b\bsurname:жмышенко" << endl;
//	cout << "\t\t\b\btname:альбертович" << endl;
//	cout << "\t\t\baddress:ул.красных фонарей 69 г.донбас" << endl;
//	cout << "\t\tweight:1488" << endl;
//	cout << "\t\t\t\b\b\b\b\b\bheight:2.4m" << endl;
//	cout << "\t\t\t\b\b\b\b\byear:1945" << endl;
//	cout << "\t\t\t\b\b\b\bschool finished:negative" << endl;
//	cout << "\t\t\t\b\b\binfo" << endl;*/
//
	/*string name;
	cout << "What is your name?: " << endl;
	cin >> name;
	cout << "ti pidor " << name << endl;*/

//	//std::string nemo;
//
//	//std::cout << std::setw(15) << "INFO\n";
//
//	/*int const m = 1140;
//	long long const s = 86400;
//	int days;
//	double suma;
//	cout << "Enter number of days : ";
//	cin >> days;
//	suma = days * m;
//	cout << "Days in minutes : " << suma << endl;
//	suma = days * s;
//	cout << "Days in seconds : " << suma << endl;
//*/
//
///*int digit;
//cout << "Введiть ваше число : ";
//cin >> digit;
//if (digit < 5)
//{
//	cout << "Ваше число меньше 5 : " << endl;
//
//}
//else
//{
//	cout << "Ваше число більше 5" << endl;
//}
//*/
///*if (digit < 5)
//{
//	cout << "Ваше число менше 5!" << endl;
//}
//else if (digit == 10)
//{
//	cout << "Ви ввели число 10" << endl;
//}
//else if (digit > 5)
//{
//	cout << "Ваше число бiльше 5!" << endl;
//}*/
//
///*int days;
//cout << "Введите день недели(1-7) : ";
//cin >> days;
//if (days == 1)
//{
//	cout << "Сегодня понедельник!" << endl;
//
//}
//else if (days == 2)
//{
//	cout << "Сегодня вторник!" << endl;
//}
//else if (days == 3)
//{
//	cout << "Сегодня среда!" << endl;
//}
//else if (days == 4)
//{
//	cout << "Сегодня четверг!" << endl;
//
//}
//else if (days == 5)
//{
//	cout << "Сегодня пятница,тобы пызда!" << endl;
//}
//else if (days == 6)
//{
//	cout << "Сегодня субота!" << endl;
//}
//else if (days == 7)
//{
//	cout << "Сегодня воскресения!" << endl;
//}
//else if (days > 7)
//	cout << "ТЫ ПИДОР!" << endl;
//*/
////int digit_1;
////int digit_2;
////cout << "Введите первое число : ";
////cin >> digit_1;
////cout << "Введите второе число : ";
////cin >> digit_2;
////if(digit_1 > digit_2)
////{
////	cout << "1 число больше!" << endl;
////
////}
////else if(digit_1 < digit_2)
////{
////	cout << "2 число больше" << endl;
////}
////int one_site = 4;
////int const sites = 4;
////int perimiter;
////cout << "Введите сторону : ";
////cin >> one_site;
////perimiter = one_site * sites;
////cout << "Перимитер : " << perimiter << endl;
//
////bool isRain = true;
////if (isRain) 
////{
////	cout << "It's rainning!" <<endl;
////
////}
////else 
////{
////	cout << "It's not rainning!" << endl;
////}
//
int door;
string pumpkin = "garbuz";
string positive = "";
int large;
cout << "chose your room(1-5) : ";
cin >> door;
if (door == 1) 
{
	cout << "you died!" << endl;

}
else if (door == 2) 
{
	cout << "congratulations,take your gift!" << endl;
}
else if (door == 3)
{
	cout << "you have found some tresuare,but you have to solve some mysteries.listen carefully:bez vikon bez dverey povna hata ludey" << endl;
	cin >> pumpkin;
	if (pumpkin == "garbuz")
	{
		cout << "you have won !" << endl;
	}
	else
	{
		cout << "Ti sho debil?" << endl;
	}


}
 
 



else if (door == 4) 
{
	cout << "you have meet dangenoun master.how long is your pines?" << endl;
	cin >> large;
	if (large > 10) 
	{
		cout << "nice cock,awesome balls" << endl;
	}
	else if (large < 10) 
	{
		cout << "omg,kill yourself!" << endl;
	}

}
else if (door == 5)
{
	cout << "what is shrek for you?" << endl;
	cin >> positive;
	if (positive == "shrek_is_love")
	{
		cout << "omg dude it is so deep" << endl;
	}
	else if (positive == "who_is_that?")
	{
		cout << "get out of here!" << endl;
	}

}
////int year;
////int year_1;
////int month;
////int month_1;
////int day;
////int day_1;
////cout << "Enter date of birth first person : " << endl;
////cin >> year;
////cout << "Enter date of birth second person : " << endl;
////cin >> year_1;
////if(year < year_1)
////{
////	cout << "First person is older!" << endl;
////}
////else 
////{
////	cout << "Second person is older!" << endl;
////}
////cout << "Enter the number of month;first person : " << endl;
////cin >> month;
////cout << "Enter number of month;second person : " << endl;
////cin >> month_1;
////if (month < month_1)
////{
////	cout << "First person was born earlier" << endl;
////}
////else
////{
////	cout << "Second person was born earlier" << endl;
////}
////cout << "Enter the day of birth;first person : " << endl;
////cin >> day;
////cout << "Enter the day of birth;second person : " << endl;
////cin >> day_1;
////if (day < day_1)
////{
////	cout << "First person was born earlier" << endl;
////
////}
////else
////{
////
////	cout << "Second person was born earlier" << endl;
////
////}
//
//	//double a, b, c, d, D;
//	//double x1, x2, x3;
//	//while (cin >> a >> b >> c >> d) {
//	//	D = b * b - 4 * a*(c - d);
//	//	if (D > 0)
//	//	{
//	//		x1 = (-b - sqrt(D)) / (2 * a);
//	//		x2 = (-b + sqrt(D)) / (2 * a);
//	//		cout << x1 << ", " << x2 << "; ";
//	//	}
//	//	else
//	//	{
//	//		if (D == 0)
//	//		{
//	//			x3 = (-b) / (2 * a);
//	//			cout << x3 << "; ";
//	//		}
//	//		else cout << "нет корней" << "; ";
//	//	}
//	//}
//	//return 0;
//
//
////int a, b, c;
////cout << "Enter a : ";
////cin >> a;
////cout << "Enter b : ";
////cin >> b;
////cout << "Enter c : ";
////cin >> c;
////double d = b * b - 4 * a * c;
////switch
////{
////case 1:
////	cout << "No roots" << endl;
////
////
////}
////double const euro = 29;
////int const dolar = 27;
////int grn;
////double sum;
////cout << "enter grivnas : ";
////cin >> grn;
////cout << endl;
////sum = grn / euro;
////cout << "in  " << grn << " grivnas :" ;
////
////cout << sum << " euro " << endl;
////int choice;
////int choice_2;
////for (int i = 0; i <= 3; i++)
////{
////
////
////cout << "Choice month 1-12 : ";
////cin >> choice;
////switch (choice)
////{
////case 1:
////{
////	cout << "You have choosen January!\n";
////	break;
////
////
////}
////case 2:
////{
////	cout << "You have choosen February!\n";
////	break;
////}
////case 3:
////{
////	cout << "You have choosen March!\n";
////	break;
////}
////case 4:
////{
////	cout << "You have choosen April!\n";
////	break;
////}
////case 5:
////{
////	cout << "You have choosen May!\n";
////	break;
////}
////case 6:
////{
////	cout << "You have choosen June!\n";
////	break;
////}
////case 7:
////{
////	cout << "You have choosen July!\n";
////	break;
////}
////case 8:
////{
////	cout << "You have choosen August!\n";
////	break;
////}
////case 9:
////{
////	cout << "You have choosen September!\n";
////	break;
////}
////case 10:
////{
////	cout << "You have choosen October!\n";
////	break;
////}
////case 11:
////{
////	cout << "You have choosen November!\n";
////	break;
////}
////case 12:
////{
////	cout << "You have choosen December!\n";
////	cin >> choice_2;
////	switch (choice_2)
////	{
////	case 1:
////	{
////		cout << "Ti pidor\n";
////	}
////	}
////
////
////	break;
////}
////
////}
////}
//
////int digit_1;
////int digit_2;
////char operation;
////double sum;
////cout << "Enter first digit : ";
////cin >> digit_1;
////cout << "Enter second digit : ";
////cin >> digit_2;
////cout << "Choice operation : ";
////cin >> operation;
////switch (operation)
////
////{
////case'+':
////{
////  sum = digit_1 + digit_2;
////  cout << "Sum of two digits : " << sum << endl;
////  break;
////	
////}
////case'-':
////{
////	sum = digit_1 - digit_2;
////	cout << "Diferense of two digits : " << sum << endl;
////	break;
////}
////case'*':
////{
////	sum = digit_1 * digit_2;
////	cout << "Dobutok of two digits : " << sum << endl;
////	break;
////}
////case'/':
////{
////	sum = digit_1 / digit_2;
////	cout << "Rizniza of two digits : " << sum << endl;
////	break;
////}
////		
////}
//	char day;
//	int digit;
//	cout << "Enter the day of week(M-W): ";
//	cin >> day;
//	if (day != 'M' && day != 'T' && day != 'W' && day != 'Thu' && day != 'F' && day != 'Sat' && day != 'Sun')
//	{
//		cout << "Not permited!" << endl;
//	}
//	switch (day)
//	{
//	case 'M':
//	{
//		cout << "Forecast for " << day << " is +20" << endl;
//	}
//	case 'T':
//	{
//		cout << "Forecast for " << day << " is +14" << endl;
//	}
//	case 'W':
//	{
//		cout << "Forecast for " << day << " is +17 " << endl;
//	}
//	case 'Thu':
//	{
//		cout << "Forecast for " << day << " is +13" << endl;
//
//	}
//	case 'F':
//	{
//		cout << "Forecast for " << day << " is +16" << endl;
//	}
//	case 'Sat':
//	{
//		cout << "Forecast for " << day << " is +9" << endl;
//
//	}
//	case 'Sun':
//	{
//		cout << "Forecast for " << day << " is +0" << endl;
//		cin >> digit;
//		for (int i = 0; i < 3; i++)
//		{
//			switch (digit)
//
//			{
//			case 1:
//
//			{
//				cout << " Loh" << endl;
//			}
//
//			
//			
//
//			
//		}
//
//
//	}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
	system("pause");














	}
//}