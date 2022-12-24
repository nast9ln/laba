#include <iostream>
#include "constants.h"
#include "file-reader.h"
#include "marapon.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Лабораторная работа №9. GIT\n";
    cout << "Вариант №1. Марафон\n";
    cout << "Автор: Стук Анастасия\n\n";
    cout << "Группа: 14\n";
    marapon* subscriptions[MAX_FILE_ROWS_COUNT];
    int size;
    try
    {
        read("data.txt", subscriptions, size);
        cout << "***** Марафон  *****\n\n";
        for (int i = 0; i < size; i++)
        {
            /********** Номер Участника **********/
            cout << "Номер........: ";
            cout << subscriptions[i]->num.namber << " ";
            /********** вывод Участника **********/
            cout << "Участника........: ";
            // вывод фамилии
            cout << subscriptions[i]->human.last_name << " ";
            // вывод первой буквы имени
            cout << subscriptions[i]->human.first_name[0] << ". ";
            // вывод первой буквы отчества
            cout << subscriptions[i]->human.middle_name[0] << ".";
            cout << '\n';
            /********** вывод старта **********/
            cout << "Старт...........: ";
            // вывод часа
            cout << subscriptions[i]->date.starth << ":";
            // вывод минуты
            cout << subscriptions[i]->date.startm << ":";
            // вывод секунды
            cout << subscriptions[i]->date.starts << "";
            cout << '\n';
            /********** вывод финиша **********/
            cout << "Финиш...........: ";
            // вывод часа
            cout << subscriptions[i]->date.finishh << ":";
            // вывод минуты
            cout << subscriptions[i]->date.finishm << ":";
            // вывод секунды
            cout << subscriptions[i]->date.finishs << "";
            cout << '\n';
            /********** вывод Клуба **********/
            // вывод клуба
            cout << "Название клуба...: ";
            cout << subscriptions[i]->clubss.club << " ";
            cout << '\n';
            cout << '\n';
        }
        for (int i = 0; i < size; i++)
        {
            delete subscriptions[i];
        }
    }
    catch (const char* error)
    {
        cout << error << '\n';
    }



    return 0;
}