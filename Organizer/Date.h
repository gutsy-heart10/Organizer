#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <chrono>
using namespace std;
using namespace std::chrono;

class Date {
private:
    int second;
    int minute;
    int hour;
    int day;
    int month;
    int year;
public:
    Date() {
        system_clock::time_point now = system_clock::now();
        time_t tt = system_clock::to_time_t(now);
        tm utc_tm;
        if (gmtime_s(&utc_tm, &tt) == 0) {
            second = utc_tm.tm_sec;
            minute = utc_tm.tm_min;
            hour = utc_tm.tm_hour;
            day = utc_tm.tm_mday;
            month = utc_tm.tm_mon + 1;
            year = utc_tm.tm_year + 1900;
        }
    }

    void showTime() {
        cout << year << '-';
        cout << month << '-';
        cout << day << ' ';
        cout << hour << ':';
        cout << minute << ':';
        cout << second << '\n';
    }

    int getDay() {
        return day;
    }

    int getMonth() {
        return month;
    }

    int getYear() {
        return year;
    }
};
