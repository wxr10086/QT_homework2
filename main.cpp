#include <iostream>
#include <QCoreApplication>
#include<QDebug>
#include<QVector>
#include<QList>
using namespace std;
typedef class{
public:
    int num;
    QString name;
    int core1;
    int core2;
}stu;

bool c_name(stu a,stu b)
{
   if(a.name>=b.name)
   {
       return 0;
   }
   else
   {
       return 1;
   }
}

bool c_core1(stu a,stu b)
{
    if(a.core1>=b.core1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}


bool c_core2(stu a,stu b)
{
    if(a.core2>=b.core2)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    stu stu1,stu2,stu3,stu4;
    stu1.num=1403130209;
    stu1.name="鲁智深";
    stu1.core1=80;
    stu1.core2=72;

    stu2.num=1403140101;
    stu2.name="林冲  ";
    stu2.core1=82;
    stu2.core2=76;

    stu3.num=1403140102;
    stu3.name="宋江  ";
    stu3.core1=76;
    stu3.core2=85;

    stu4.num=1403140103;
    stu4.name="武松  ";
    stu4.core1=88;
    stu4.core2=80;
    QList<stu> data;
    data<<stu1<<stu2<<stu3<<stu4;
    qDebug("原表格为\n");

    for(int i=0;i<4;i++)
    {
        qDebug()<<data.at(i).num<<"\t"<<data.at(i).name<<"\t"<<data.at(i).core1<<"\t"<<data.at(i).core2;
    }
    qDebug("\n");



    std:: sort(data.begin(),data.end(),c_name);
    qDebug("按姓名排序\n");
    for(int i=0;i<4;i++)
    {
        qDebug()<<data.at(i).num<<"\t"<<data.at(i).name<<"\t"<<data.at(i).core1<<"\t"<<data.at(i).core2;
    }
        qDebug("\n");


    //QList<stu> s_core1=data;
    std::sort(data.begin(),data.end(),c_core1);
    qDebug("按课程一排序\n");

    for(int i=0;i<4;i++)
    {
        qDebug()<<data.at(i).num<<"\t"<<data.at(i).name<<"\t"<<data.at(i).core1<<"\t"<<data.at(i).core2;
    }
        qDebug("\n");



    //QList<stu> s_core2=data;
    std:: sort(data.begin(),data.end(),c_core2);
    qDebug("按课程二排序\n");
    //display(&s_core2);
    for(int i=0;i<4;i++)
    {
        qDebug()<<data.at(i).num<<"\t"<<data.at(i).name<<"\t"<<data.at(i).core1<<"\t"<<data.at(i).core2;
    }
    return a.exec();
}
