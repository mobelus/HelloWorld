#include <climits>
#include <iostream>

#include <vector>
#include <map>
#include <set>
/*
����� DHCP-������, ������� ����� �������� ������������� IP-������ �� ����.
��� ������������ ����� ����� ���������� ������� IPv4. ��� ��������� �������� ����
���������� �������� ��������� IP-�������, ������� ������� � ������ ���, �� �� ������ � �����,
����� �������� �� � ������� ��� ����������. ���������� �������, ������� ����� ��������� ����������
���������, ��������� ����� � ������ ���. ���������� ����-�����, ����������� ��������� � ������������
������ ���������.
*/

// ����������� ��������� ���� ��� IP-�������, ���������� � �����:
using IPAddress = uint32_t; 					// ����� IPv4 ����������� ������������� ����� uint32_t
using Range = std::pair<IPAddress, IPAddress>;	// �������� IP-�������, ������� ��������
//using Pool = std::map<IPAddress, std::map<IPAddress, int>>; // ���������� ����������� STL-�������� ��� �������� ���������� IP-������� (Range)
using Pool = std::set<Range>; // ���������� ����������� STL-�������� ��� �������� ���������� IP-������� (Range)
												// ��������� IP-������� � ����� ����� ������������. ������� �� ������������ � ���� - ������������.

												// �������, ����������� ������� ����� ������ � ����� ������:
												// `old_pool` - ������ ��� IP-�������
												// `new_pool` - �����  ��� IP-�������
												// return value - ��� ���������� "����������" IP-�������

Pool find_diff(const Pool& old_pool, const Pool& new_pool)
{
	Pool result;

	bool found = false;
	for (auto &item : old_pool)
	{
		if (new_pool.find(item) == new_pool.end()) // ��� � �����, ������ �������
		{
			std::cout << "NOT FOUND IN NEW: ";  
			std::cout << "[" << item.first << " : " << item.second << "]" << std::endl;
			result.insert(item);
		}
	}
	std::cout << std::endl;

	return result;
}

void show_pool(const std::string pool_name, const Pool& print_pool)
{
	std::cout << pool_name.c_str() << std::endl;
	for (auto &item : print_pool)
	{
		std::cout << "[" << item.first << " : " << item.second << "]" << std::endl;
	}
	std::cout << std::endl;
}

void test_pools()
{
	//[ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 ]
	Pool old_pool;
	old_pool.insert(std::pair<IPAddress, IPAddress>(1,  3));
	old_pool.insert(std::pair<IPAddress, IPAddress>(5,  7));
	old_pool.insert(std::pair<IPAddress, IPAddress>(12, 12));
	old_pool.insert(std::pair<IPAddress, IPAddress>(13, 16));
	show_pool("old_pool", old_pool);

	Pool new_pool;
	new_pool.insert(std::pair<IPAddress, IPAddress>(1,   3));
	new_pool.insert(std::pair<IPAddress, IPAddress>(4,  6));
	new_pool.insert(std::pair<IPAddress, IPAddress>(10, 11));
	new_pool.insert(std::pair<IPAddress, IPAddress>(14, 15));
	show_pool("new_pool", new_pool);

	// ������ �� ��������� ����� ������ ����, � ������ ��� ������
	// �� ��������:
	// 1) ����� ���� ������������: � ����� ������, ���:
	// � ������ ��� �������� [5, 6, 7], � ����� �������� [4, 5, 6]
	// ������ �� �� �����������, � ������ �������, ��� [5-7]
	// �� ��������� ��������� � ����� [4-6], � ��������� [5-7]
	// � �������������� ������ ��������� �����, ��� ������� ���-�� ��� ...
	// 2) ����� ���� ���������� ������ ���� �����: � ����� ������, ���:
	// � ������ ��� �������� [13, 14, 15, 16], � ����� �������� [14, 15]

	// ���� ����� �� � �������� ������������� � ����������, ��� ����� ������ �����
	// ��, ��� ���� ��������� ����������� � ����� � ��������� �� � ���������� � ��.


	// ������ � ������ ������ �� ���� ���������
	// ���� �� � ��������� ���������� ���������
	
	// � ������ � ������ ������������ ��� ������ STL-����������
	// ��� ����� ����, ��� � ������ � std::set �� ����� ����� find()
	// � �������� ���� ������� �������
	
	// ������ ����� ����������� ����������� � ������� std::map �
	// ���������� �� ������� ������� ����� �������� ��������
	// ����� find() ���� � � ����, ������� ������� � ���������� ������

	Pool res_pool = find_diff(old_pool, new_pool);
	show_pool("res_pool", res_pool);
}

void main()
{
	test_pools();
	getchar();
}
