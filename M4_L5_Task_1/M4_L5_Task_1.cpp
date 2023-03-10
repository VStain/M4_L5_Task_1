#include <iostream>
#include <fstream>
#include <windows.h>
#include <string>
#include <cstdlib>

/*Задача 1. Адреса
В этом задании вы будете читать адреса из файла и выводить их в другой файл в другом формате.

Вам дан файл in.txt, в котором находится N адресов. Число N идёт первым в файле. После числа N располагаются N блоков по 4 строки в каждом. 
Каждый блок состоит из следующих строк: название города, название улицы, номер дома, номер квартиры.

Задача программы заключается в том, чтобы считать адреса из файла in.txt и вывести их в файл out.txt в другом формате и в обратном порядке. 
Не забудьте вывести количество адресов в начале.

Формат вывода адреса: <название города>, <название улицы>, <номер дома>, <номер квартиры>.*/

using namespace std;

class Address
{
public:
    Address(string city, string street, int number_house, int number_apart)
    {

    }
    Address() 
    {

    }

    void get_output_address(int index, string str)
    {

    }
    string Get_city()
    {
        return city_1;
    }
    string Get_street()
    {
        return street_1;
    }
    int Get_house_number()
    {
        return house_number_1;
    }
    int Get_apart_number()
    {
        return apart_number__1;
    }

    void Set_city(string city)
    {
        city_1 = city;
    }
    void Set_street(string street)
    {
        street_1 = street;
    }
    void Set_house_number(string house_number)
    {
        house_number_1 = stoi(house_number);
    }
    void Set_apart_number(string apart_number)
    {
        apart_number__1 = stoi(apart_number);
    }
private:
    string city_1;
    string street_1;
    int house_number_1 = 0;
    int apart_number__1 = 0;
};

int main()
{
    setlocale(LC_ALL, "Rus");
    string str;
    string address_count;
    ifstream input("C:\\VHome Dump\\My Projects\\Home_Works\\Module_4\\M4_L5_Task_1\\in.txt");

    if (input.is_open())
    {

        input >> str;
        int address_count = stoi(str);
        Address* address_arr = new Address[address_count];
        
        // считать данные для каждого адреса
        for (int i = 0; i < address_count; ++i)
        {
            string city, street, house_number, flat_number;
            // считать название города в строку
            input >> city;
            // считать название улицы в строку
            input >> street;
            // считать номер дома в целочисленную переменную
            input >> house_number;
            // считать номер квартиры в целочисленную переменную
            input >> flat_number;
            // установить параметры для текущего адреса
            address_arr[i].Set_city(city);
            address_arr[i].Set_street(street);
            address_arr[i].Set_house_number(house_number);
            address_arr[i].Set_apart_number(flat_number);
        }
        
        ofstream output("C:\\VHome Dump\\My Projects\\Home_Works\\Module_4\\M4_L5_Task_1\\out.txt");

        output << address_count << endl;

        for (int i = address_count - 1; i >= 0; --i)
        {
            // записать название города в файл
            output << address_arr[i].Get_city() << " ";
            // записать название улицы в файл
            output << address_arr[i].Get_street() << " ";
            // записать номер дома в файл
            output << address_arr[i].Get_house_number() << " ";
            // записать номер квартиры в файл
            output << address_arr[i].Get_apart_number() << " ";
            output << endl;
        }

        delete[] address_arr;
    }
    else
    {
        cout << "File not found" << endl;
    }
    return 0;
    }
