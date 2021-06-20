#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED

class Time{
private:
    double totaltime;
    int year,month,day,hour;

public:
    Time(int h){};
    void operator+(Time& t){};
    void operator-(Time& t){};


};

#endif // TIME_H_INCLUDED
