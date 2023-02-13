#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");

	int select1 = 0, select2 = 0, select3 = 0;
	double value_in = 0, value_proc = 0, value_out = 0;

	while (true)
	{
	cout << "Конвертер\nВыберите предмет конвертации:\n1. Длина\n2. Площадь\n3. Объём\n4. Скорость\n5. Температура\n";
	cin >> select1;

	switch (select1)
	{
	case 1: //Длина
		cout << "Выберите меру известного значения:\n1. Километры\n2. Метры\n3. Дециметры\n4. Сантиметры\n5. Миллиметры\n6. Мили\n7. Морские мили\n8. Морские сажени\n9. Ярды\n10. Футы\n11. Дюймы\n12. Парсеки\n13. Астрономическая единица\n14. Световой год\n";
		cin >> select2;
		cout << "Выберите меру требуемого значения:\n1. Километры\n2. Метры\n3. Дециметры\n4. Сантиметры\n5. Миллиметры\n6. Мили\n7. Морские мили\n8. Морские сажени\n9. Ярды\n10. Футы\n11. Дюймы\n12. Парсеки\n13. Астрономическая единица\n14. Световой год\n";
		cin >> select3;
		cout << "Ваше значение:";
		cin >> value_in;
		switch (select2)
		{
		case 1://км
			value_proc = value_in * 1000;
			break;
		case 2://м
			value_proc = value_in;
			break;
		case 3://дм
			value_proc = value_in / 10;
			break;
		case 4://см
			value_proc = value_in / 100;
			break;
		case 5://мм
			value_proc = value_in / 1000;
			break;
		case 6://мили
			value_proc = value_in * 1609.344;
			break;
		case 7://морские мили
			value_proc = value_in * 1852;
			break;
		case 8://морские сажени
			value_proc = value_in * 1.8288;
			break;
		case 9://ярды
			value_proc = value_in * 0.91;
			break;
		case 10://футы
			value_proc = value_in * 0.3048;
			break;
		case 11://дюймы
			value_proc = value_in * 0.0254;
			break;
		case 12://парсек
			value_proc = value_in * 206264.80625;
			value_proc = value_proc / 149597870700;
			break;
		case 13://астраномическая единица
			value_proc = value_in / 149597870700;
			break;
		case 14://световой год
			value_proc = value_in / 9460730472580800;
			break;
		default:
			cout << "Ошибка: Неверное число";
			break;
		}
		switch (select3)
		{
		case 1://км
			value_out = value_proc / 1000;
			break;
		case 2://м
			value_out = value_proc;
			break;
		case 3://дм
			value_out = value_proc * 10;
			break;
		case 4://см
			value_out = value_proc * 100;
			break;
		case 5://мм
			value_out = value_proc * 1000;
			break;
		case 6://мили
			value_out = value_proc / 1609.344;
			break;
		case 7://морские мили
			value_out = value_proc / 1852;
			break;
		case 8://морские сажени
			value_out = value_proc / 1.8288;
			break;
		case 9://ярды
			value_out = value_proc / 0.91;
			break;
		case 10://футы
			value_out = value_proc / 0.3048;
			break;
		case 11://дюймы
			value_out = value_proc / 0.0254;
			break;
		case 12://парсек
			value_out = value_proc * 149597870700;
			value_out = value_out / 206264.80625;
			break;
		case 13://астраномическая единица
			value_out = value_proc * 149597870700;
			break;
		case 14://световой год
			value_out = value_proc * 9460730472580800;
			break;
		default:
			cout << "Ошибка: Неверное число";
			break;
		}
		cout << value_out;
		break;
	case 2: //Площадь
		cout << "Выберите меру известного значения:\n1. Акры\n2. Гектары\n3. Ары\n4. Квадратные километры\n5. Квадратные метры\n6. Квадратные дециметры\n7. Квадратные сантиметры\n8. Квадратные миллиметры\n9. Квадратные мили\n10. Квадратные ярды\n11. Квадратные футы\n12. Квадратные дюймы\n";
		cin >> select2;
		cout << "Выберите меру требуемого значения:\n1. Акры\n2. Гектары\n3. Ары\n4. Квадратные километры\n5. Квадратные метры\n6. Квадратные дециметры\n7. Квадратные сантиметры\n8. Квадратные миллиметры\n9. Квадратные мили\n10. Квадратные ярды\n11. Квадратные футы\n12. Квадратные дюймы\n";
		cin >> select3;
		cout << "Ваше значение:";
		cin >> value_in;
		switch (select2)
		{
		case 1://акры
			value_proc = value_in * 4047;
			break;
		case 2://гекары
			value_proc = value_in * 10000;
			break;
		case 3://ары
			value_proc = value_in * 100;
			break;
		case 4://км2
			value_proc = value_in * 1000000000;
			break;
		case 5://м2
			value_proc = value_in;
			break;
		case 6://дм2
			value_proc = value_in / 100;
			break;
		case 7://см2
			value_proc = value_in / 10000;
			break;
		case 8://мм2
			value_proc = value_in / 1000000000;
			break;
		case 9://мили2
			value_proc = value_in * 2589988.110336;
			break;
		case 10://ярды2
			value_proc = value_in / 1.196;
			break;
		case 11://футы2
			value_proc = value_in / 10.764;
			break;
		case 12://дюймы2
			value_proc = value_in / 1550;
			break;
		default:
			cout << "Ошибка: Неверное число";
			break;
		}
		switch (select3)
		{
		case 1://акры
			value_out = value_proc / 4047;
			break;
		case 2://гекары
			value_out = value_proc / 10000;
			break;
		case 3://ары
			value_out = value_proc / 100;
			break;
		case 4://км2
			value_out = value_proc / 1000000000;
			break;
		case 5://м2
			value_out = value_proc;
			break;
		case 6://дм2
			value_out = value_proc * 100;
			break;
		case 7://см2
			value_out = value_proc * 10000;
			break;
		case 8://мм2
			value_out = value_proc * 1000000000;
			break;
		case 9://мили2
			value_out = value_proc / 2589988.110336;
			break;
		case 10://ярды2
			value_out = value_proc * 1.196;
			break;
		case 11://футы2
			value_out = value_proc * 10.764;
			break;
		case 12://дюймы2
			value_out = value_proc * 1550;
			break;
		default:
			cout << "Ошибка: Неверное число";
			break;
		}
		cout << value_out;
		break;
	case 3: //Объём
		cout << "Выберите меру известного значения:\n1. Кубические метры\n2. Кубические дециметры\n3. Кубические сантиметры\n4. Кубические миллиметры\n5. Гектолитры\n6. Литры\n7. Децилитры\n8. Сантилитры\n9. Миллилитры\n10. Кубические футы\n11. Кубические дюймы\n12. Кубические ярды\n";
		cin >> select2;
		cout << "Выберите меру требуемого значения:\n1. Кубические метры\n2. Кубические дециметры\n3. Кубические сантиметры\n4. Кубические миллиметры\n5. Гектолитры\n6. Литры\n7. Децилитры\n8. Сантилитры\n9. Миллилитры\n10. Кубические футы\n11. Кубические дюймы\n12. Кубические ярды\n";
		cin >> select3;
		cout << "Ваше значение:";
		cin >> value_in;
		switch (select2)
		{
		case 1://м3
			value_proc = value_in * 1000;
			break;
		case 2://дм3
			value_proc = value_in;
			break;
		case 3://см3
			value_proc = value_in / 1000;
			break;
		case 4://мм3
			value_proc = value_in / 1000000000;
			break;
		case 5://гл
			value_proc = value_in * 100;
			break;
		case 6://л
			value_proc = value_in;
			break;
		case 7://дл
			value_proc = value_in / 10;
			break;
		case 8://сл
			value_proc = value_in / 100;
			break;
		case 9://мл
			value_proc = value_in / 1000;
			break;
		case 10://футы3
			value_proc = value_in * 28.03168;
			break;
		case 11://дюймы3
			value_proc = value_in * 0.016387;
			break;
		case 12://ярды3
			value_proc = value_in * 764.6;
			break;
		default:
			cout << "Ошибка: Неверное число";
			break;
		}
		switch (select3)
		{
		case 1://км
			value_out = value_proc / 1000;
			break;
		case 2://м
			value_out = value_proc;
			break;
		case 3://дм
			value_out = value_proc * 10;
			break;
		case 4://см
			value_out = value_proc * 100;
			break;
		case 5://мм
			value_out = value_proc * 1000;
			break;
		case 6://мили
			value_out = value_proc / 1609.344;
			break;
		case 7://морские мили
			value_out = value_proc / 1852;
			break;
		case 8://морские сажени
			value_out = value_proc / 1.8288;
			break;
		case 9://ярды
			value_out = value_proc / 0.91;
			break;
		case 10://футы
			value_out = value_proc / 0.3048;
			break;
		case 11://дюймы
			value_out = value_proc / 0.0254;
			break;
		case 12://парсек
			value_out = value_proc * 149597870700;
			value_out = value_out / 206264.80625;
			break;
		case 13://астраномическая единица
			value_out = value_proc * 149597870700;
			break;
		case 14://световой год
			value_out = value_proc * 9460730472580800;
			break;
		default:
			cout << "Ошибка: Неверное число";
			break;
		}
		cout << value_out;
		break;
	case 4: //Скорость
		cout << "Выберите меру известного значения:\n1. Метры в секунду\n2. Километры в час\n3. Километры в секунду\n4. Скорости света\n5. Узлы\n6. Мили в час\n";
		cin >> select2;
		cout << "Выберите меру требуемого значения:\n1. Метры в секунду\n2. Километры в час\n3. Километры в секунду\n4. Скорости света\n5. Узлы\n6. Мили в час\n";
		cin >> select3;
		cout << "Ваше значение:";
		cin >> value_in;
		switch (select2)
		{
		case 1://м/с
			value_proc = value_in;
			break;
		case 2://км/ч
			value_proc = value_in / 3.6;
			break;
		case 3://км/с
			value_proc = value_in * 1000;
			break;
		case 4://с
			value_proc = value_in * 299792458;
			break;
		case 5://узлы
			value_proc = value_in * 1.852;
			value_proc = value_proc / 3.6;
			break;
		case 6://миль/час
			value_proc = value_in / 2.237;
			break;
		default:
			cout << "Ошибка: Неверное число";
			break;
		}
		switch (select3)
		{
		case 1://м/с
			value_out = value_proc;
			break;
		case 2://км/ч
			value_out = value_proc * 3.6;
			break;
		case 3://км/с
			value_out = value_proc / 1000;
			break;
		case 4://с
			value_out = value_proc / 299792458;
			break;
		case 5://узлы
			value_out = value_proc * 3.6;
			value_out = value_proc / 1.852;
			break;
		case 6://миль/час
			value_out = value_proc * 2.237;
			break;
		default:
			cout << "Ошибка: Неверное число";
			break;
		}
		cout << value_out;
		break;
	case 5: //Температура
		cout << "Выберите меру известного значения:\n1. Цельсий\n2. Фаренгейт\n3. Кельвин\n";
		cin >> select2;
		cout << "Выберите меру трубуемого значения:\n1. Цельсий\n2. Фаренгейт\n3. Кельвин\n";
		cin >> select3;
		cout << "Ваше значение:";
		cin >> value_in;
		switch (select2)
		{
		case 1://Цельсий
			value_proc = value_in + 273.15;
			break;
		case 2://Фаренгейт
			value_proc = value_in - 32;
			value_proc = value_proc / 1.8;
			value_proc = value_proc + 273.15;
			break;
		case 3://Кельвин
			value_proc = value_in;
			break;
		default:
			cout << "Ошибка: Неверное число";
			break;
		}
		switch (select3)
		{
		case 1://Цельсий
			value_out = value_proc-273.15;
			break;
		case 2://Фаренгейт
			value_out = value_proc - 273.15;
			value_out = value_out * 1.8;
			value_out = value_out + 32;
			break;
		case 3://Кельвин
			value_out = value_proc;
			break;
		default:
			cout << "Ошибка: Неверное число";
			break;
		}
		cout << value_out;
		break;
	default:
		cout << "Ошибка: Неверное число";
		break;
	}
	cout << "\n\n";
	}
}