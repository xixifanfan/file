#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED

class Employee
{
private:
    string name;
    string gender;
    int number;//���
    int position;//ְλ
    const static int N=100;
    virtual void record(Time t)=0;
public:
    Employee(string n,string g,int num,int p);
    string Getname(){return name;}
    string Getgender(){return gender;}
    int Getnumber(){return number;}
    int Getposition(){return position;}
    virtual ~Employee(){}

};

#endif // EMPLOYEE_H_INCLUDED
