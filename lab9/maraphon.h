#pragma once
#ifndef marapon_h
#define marapon_h

#include "constants.h"
struct number
{
    int namber;
};

struct person
{
    char first_name[MAX_STRING_SIZE];
    char middle_name[MAX_STRING_SIZE];
    char last_name[MAX_STRING_SIZE];
};
struct date
{
    int starth;
    int startm;
    int starts;
    int finishh;
    int finishm;
    int finishs;
};
struct clubs
{
    char club;
};
struct marapon
{
    number num;
    person human;
    date date;
    clubs clubss;
};
#endif

