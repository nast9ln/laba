#include "file-reader.h"
#include "constants.h"
#include <fstream>
#include <cstring>
date convert(char* str)
{
    date result;
    char* context = NULL;
    char*
        str_number = strtok_s(str, ":", &context);
    result.starth = atoi(str_number);
    str_number = strtok_s(NULL, ":", &context);
    result.startm = atoi(str_number);
    str_number = strtok_s(NULL, ":", &context);
    result.starts = atoi(str_number);
    str_number = strtok_s(str, ":", &context);
    result.finishh = atoi(str_number);
    str_number = strtok_s(NULL, ":", &context);
    result.finishm = atoi(str_number);
    str_number = strtok_s(NULL, ":", &context);
    result.finishs = atoi(str_number);

    return result;
}
void read(const char* file_name, marapon* array[], int& size)
{
    std::ifstream file(file_name);
    if (file.is_open())
    {
        size = 0;
        char tmp_buffer[MAX_STRING_SIZE];
        while (!file.eof())
        {
            marapon* item = new marapon;
            file >> item->num.namber;
            file >> item->human.last_name;
            file >> item->human.first_name;
            file >> item->human.middle_name;
            file >> tmp_buffer;
            item->date = convert(tmp_buffer);
            file >> item->clubss.club;
            file.read(tmp_buffer, 1); // ������ ������� ������� �������
            array[size++] = item;
        }
        file.close();
    }
    else
    {
        throw "������ �������� �����";
    }
}