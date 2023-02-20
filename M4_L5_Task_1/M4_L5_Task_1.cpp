#include <iostream>
#include <fstream>
#include <windows.h>
#include <string>
#include <cstdlib>

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
        Set_city(str);
        cout << "Number appart is : " << city_1 << endl;
       // Set_street(str);
       // Set_number_house(str);
        //Set_number_apart(str);
        //return city_1; //, street_1, number_house_1, number_apart_1;
    }
    void Set_city(string city)
    {
        city_1 = city;
    }
    void Set_street(string street)
    {
        street_1 = street;
    }
    void Set_number_house(string number_house)
    {
        number_house_1 = stoi(number_house);
    }
    void Set_number_apart(string number_apart)
    {
        number_apart_1 = stoi(number_apart);
    }
private:
    string city_1;
    string street_1;
    int number_house_1 = 0;
    int number_apart_1 = 0;
};

int main()
{
    setlocale(LC_ALL, "Rus");
    string str;
    string address_count;
    ifstream file_to_use("C:\\VHome Dump\\My Projects\\Home_Works\\Module_4\\M4_L5_Task_1\\in.txt");

    if (file_to_use.is_open())
    {

        file_to_use >> str;
        int const address_count = stoi(str);
        Address* address_arr = new Address[address_count];
        file_to_use >> str;
        address_arr[0].get_output_address(address_count, str);

        /*for (int x = 0; x < address_count; ++x)
        {
            file_to_use >> str;
            Address[address_count];

        }*/
        
    }
    else
    {
        cout << "File not found" << endl;
    }
    }
