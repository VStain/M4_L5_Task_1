#include <iostream>
#include <fstream>
#include <windows.h>
#include <string>
#include <cstdlib>

using namespace std;

class Adress
{
public:
    Adress(string city, string street, int number_house, int number_apart)
    {

    }
    void Set_city(string city)
    {
        city_1 = city;
    }
private:
    string city_1;
    string street_1;
    int number_house_1 = 0;
    int number_apart_1 = 0;
};

int main()
{
    string str;
    string address_count;
    ifstream file_to_use("C:\\VHome Dump\\My Projects\\Home_Works\\Module_4\\M4_L5_Task_1\\in.txt");

    if (file_to_use.is_open())
    {

        file_to_use >> str;
        const int address_count = stoi(str);
        int* Adress(string str, string str, int number_house, int number_apart);
        
    }
    else
    {
        cout << "File not found" << endl;
    }
    }
