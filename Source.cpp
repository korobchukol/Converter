#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");

	int select1 = 0, select2 = 0, select3 = 0;
	double value_in = 0, value_proc = 0, value_out = 0;

	while (true)
	{
	cout << "���������\n�������� ������� �����������:\n1. �����\n2. �������\n3. �����\n4. ��������\n5. �����������\n";
	cin >> select1;

	switch (select1)
	{
	case 1: //�����
		cout << "�������� ���� ���������� ��������:\n1. ���������\n2. �����\n3. ���������\n4. ����������\n5. ����������\n6. ����\n7. ������� ����\n8. ������� ������\n9. ����\n10. ����\n11. �����\n12. �������\n13. ��������������� �������\n14. �������� ���\n";
		cin >> select2;
		cout << "�������� ���� ���������� ��������:\n1. ���������\n2. �����\n3. ���������\n4. ����������\n5. ����������\n6. ����\n7. ������� ����\n8. ������� ������\n9. ����\n10. ����\n11. �����\n12. �������\n13. ��������������� �������\n14. �������� ���\n";
		cin >> select3;
		cout << "���� ��������:";
		cin >> value_in;
		switch (select2)
		{
		case 1://��
			value_proc = value_in * 1000;
			break;
		case 2://�
			value_proc = value_in;
			break;
		case 3://��
			value_proc = value_in / 10;
			break;
		case 4://��
			value_proc = value_in / 100;
			break;
		case 5://��
			value_proc = value_in / 1000;
			break;
		case 6://����
			value_proc = value_in * 1609.344;
			break;
		case 7://������� ����
			value_proc = value_in * 1852;
			break;
		case 8://������� ������
			value_proc = value_in * 1.8288;
			break;
		case 9://����
			value_proc = value_in * 0.91;
			break;
		case 10://����
			value_proc = value_in * 0.3048;
			break;
		case 11://�����
			value_proc = value_in * 0.0254;
			break;
		case 12://������
			value_proc = value_in * 206264.80625;
			value_proc = value_proc / 149597870700;
			break;
		case 13://��������������� �������
			value_proc = value_in / 149597870700;
			break;
		case 14://�������� ���
			value_proc = value_in / 9460730472580800;
			break;
		default:
			cout << "������: �������� �����";
			break;
		}
		switch (select3)
		{
		case 1://��
			value_out = value_proc / 1000;
			break;
		case 2://�
			value_out = value_proc;
			break;
		case 3://��
			value_out = value_proc * 10;
			break;
		case 4://��
			value_out = value_proc * 100;
			break;
		case 5://��
			value_out = value_proc * 1000;
			break;
		case 6://����
			value_out = value_proc / 1609.344;
			break;
		case 7://������� ����
			value_out = value_proc / 1852;
			break;
		case 8://������� ������
			value_out = value_proc / 1.8288;
			break;
		case 9://����
			value_out = value_proc / 0.91;
			break;
		case 10://����
			value_out = value_proc / 0.3048;
			break;
		case 11://�����
			value_out = value_proc / 0.0254;
			break;
		case 12://������
			value_out = value_proc * 149597870700;
			value_out = value_out / 206264.80625;
			break;
		case 13://��������������� �������
			value_out = value_proc * 149597870700;
			break;
		case 14://�������� ���
			value_out = value_proc * 9460730472580800;
			break;
		default:
			cout << "������: �������� �����";
			break;
		}
		cout << value_out;
		break;
	case 2: //�������
		cout << "�������� ���� ���������� ��������:\n1. ����\n2. �������\n3. ���\n4. ���������� ���������\n5. ���������� �����\n6. ���������� ���������\n7. ���������� ����������\n8. ���������� ����������\n9. ���������� ����\n10. ���������� ����\n11. ���������� ����\n12. ���������� �����\n";
		cin >> select2;
		cout << "�������� ���� ���������� ��������:\n1. ����\n2. �������\n3. ���\n4. ���������� ���������\n5. ���������� �����\n6. ���������� ���������\n7. ���������� ����������\n8. ���������� ����������\n9. ���������� ����\n10. ���������� ����\n11. ���������� ����\n12. ���������� �����\n";
		cin >> select3;
		cout << "���� ��������:";
		cin >> value_in;
		switch (select2)
		{
		case 1://����
			value_proc = value_in * 4047;
			break;
		case 2://������
			value_proc = value_in * 10000;
			break;
		case 3://���
			value_proc = value_in * 100;
			break;
		case 4://��2
			value_proc = value_in * 1000000000;
			break;
		case 5://�2
			value_proc = value_in;
			break;
		case 6://��2
			value_proc = value_in / 100;
			break;
		case 7://��2
			value_proc = value_in / 10000;
			break;
		case 8://��2
			value_proc = value_in / 1000000000;
			break;
		case 9://����2
			value_proc = value_in * 2589988.110336;
			break;
		case 10://����2
			value_proc = value_in / 1.196;
			break;
		case 11://����2
			value_proc = value_in / 10.764;
			break;
		case 12://�����2
			value_proc = value_in / 1550;
			break;
		default:
			cout << "������: �������� �����";
			break;
		}
		switch (select3)
		{
		case 1://����
			value_out = value_proc / 4047;
			break;
		case 2://������
			value_out = value_proc / 10000;
			break;
		case 3://���
			value_out = value_proc / 100;
			break;
		case 4://��2
			value_out = value_proc / 1000000000;
			break;
		case 5://�2
			value_out = value_proc;
			break;
		case 6://��2
			value_out = value_proc * 100;
			break;
		case 7://��2
			value_out = value_proc * 10000;
			break;
		case 8://��2
			value_out = value_proc * 1000000000;
			break;
		case 9://����2
			value_out = value_proc / 2589988.110336;
			break;
		case 10://����2
			value_out = value_proc * 1.196;
			break;
		case 11://����2
			value_out = value_proc * 10.764;
			break;
		case 12://�����2
			value_out = value_proc * 1550;
			break;
		default:
			cout << "������: �������� �����";
			break;
		}
		cout << value_out;
		break;
	case 3: //�����
		cout << "�������� ���� ���������� ��������:\n1. ���������� �����\n2. ���������� ���������\n3. ���������� ����������\n4. ���������� ����������\n5. ����������\n6. �����\n7. ���������\n8. ����������\n9. ����������\n10. ���������� ����\n11. ���������� �����\n12. ���������� ����\n";
		cin >> select2;
		cout << "�������� ���� ���������� ��������:\n1. ���������� �����\n2. ���������� ���������\n3. ���������� ����������\n4. ���������� ����������\n5. ����������\n6. �����\n7. ���������\n8. ����������\n9. ����������\n10. ���������� ����\n11. ���������� �����\n12. ���������� ����\n";
		cin >> select3;
		cout << "���� ��������:";
		cin >> value_in;
		switch (select2)
		{
		case 1://�3
			value_proc = value_in * 1000;
			break;
		case 2://��3
			value_proc = value_in;
			break;
		case 3://��3
			value_proc = value_in / 1000;
			break;
		case 4://��3
			value_proc = value_in / 1000000000;
			break;
		case 5://��
			value_proc = value_in * 100;
			break;
		case 6://�
			value_proc = value_in;
			break;
		case 7://��
			value_proc = value_in / 10;
			break;
		case 8://��
			value_proc = value_in / 100;
			break;
		case 9://��
			value_proc = value_in / 1000;
			break;
		case 10://����3
			value_proc = value_in * 28.03168;
			break;
		case 11://�����3
			value_proc = value_in * 0.016387;
			break;
		case 12://����3
			value_proc = value_in * 764.6;
			break;
		default:
			cout << "������: �������� �����";
			break;
		}
		switch (select3)
		{
		case 1://��
			value_out = value_proc / 1000;
			break;
		case 2://�
			value_out = value_proc;
			break;
		case 3://��
			value_out = value_proc * 10;
			break;
		case 4://��
			value_out = value_proc * 100;
			break;
		case 5://��
			value_out = value_proc * 1000;
			break;
		case 6://����
			value_out = value_proc / 1609.344;
			break;
		case 7://������� ����
			value_out = value_proc / 1852;
			break;
		case 8://������� ������
			value_out = value_proc / 1.8288;
			break;
		case 9://����
			value_out = value_proc / 0.91;
			break;
		case 10://����
			value_out = value_proc / 0.3048;
			break;
		case 11://�����
			value_out = value_proc / 0.0254;
			break;
		case 12://������
			value_out = value_proc * 149597870700;
			value_out = value_out / 206264.80625;
			break;
		case 13://��������������� �������
			value_out = value_proc * 149597870700;
			break;
		case 14://�������� ���
			value_out = value_proc * 9460730472580800;
			break;
		default:
			cout << "������: �������� �����";
			break;
		}
		cout << value_out;
		break;
	case 4: //��������
		cout << "�������� ���� ���������� ��������:\n1. ����� � �������\n2. ��������� � ���\n3. ��������� � �������\n4. �������� �����\n5. ����\n6. ���� � ���\n";
		cin >> select2;
		cout << "�������� ���� ���������� ��������:\n1. ����� � �������\n2. ��������� � ���\n3. ��������� � �������\n4. �������� �����\n5. ����\n6. ���� � ���\n";
		cin >> select3;
		cout << "���� ��������:";
		cin >> value_in;
		switch (select2)
		{
		case 1://�/�
			value_proc = value_in;
			break;
		case 2://��/�
			value_proc = value_in / 3.6;
			break;
		case 3://��/�
			value_proc = value_in * 1000;
			break;
		case 4://�
			value_proc = value_in * 299792458;
			break;
		case 5://����
			value_proc = value_in * 1.852;
			value_proc = value_proc / 3.6;
			break;
		case 6://����/���
			value_proc = value_in / 2.237;
			break;
		default:
			cout << "������: �������� �����";
			break;
		}
		switch (select3)
		{
		case 1://�/�
			value_out = value_proc;
			break;
		case 2://��/�
			value_out = value_proc * 3.6;
			break;
		case 3://��/�
			value_out = value_proc / 1000;
			break;
		case 4://�
			value_out = value_proc / 299792458;
			break;
		case 5://����
			value_out = value_proc * 3.6;
			value_out = value_proc / 1.852;
			break;
		case 6://����/���
			value_out = value_proc * 2.237;
			break;
		default:
			cout << "������: �������� �����";
			break;
		}
		cout << value_out;
		break;
	case 5: //�����������
		cout << "�������� ���� ���������� ��������:\n1. �������\n2. ���������\n3. �������\n";
		cin >> select2;
		cout << "�������� ���� ���������� ��������:\n1. �������\n2. ���������\n3. �������\n";
		cin >> select3;
		cout << "���� ��������:";
		cin >> value_in;
		switch (select2)
		{
		case 1://�������
			value_proc = value_in + 273.15;
			break;
		case 2://���������
			value_proc = value_in - 32;
			value_proc = value_proc / 1.8;
			value_proc = value_proc + 273.15;
			break;
		case 3://�������
			value_proc = value_in;
			break;
		default:
			cout << "������: �������� �����";
			break;
		}
		switch (select3)
		{
		case 1://�������
			value_out = value_proc-273.15;
			break;
		case 2://���������
			value_out = value_proc - 273.15;
			value_out = value_out * 1.8;
			value_out = value_out + 32;
			break;
		case 3://�������
			value_out = value_proc;
			break;
		default:
			cout << "������: �������� �����";
			break;
		}
		cout << value_out;
		break;
	default:
		cout << "������: �������� �����";
		break;
	}
	cout << "\n\n";
	}
}