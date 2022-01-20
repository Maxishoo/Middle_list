#include "middle_list.h"
long minchar(const vector <int> &lst)
{
    long minn=lst[0];
    for(int i=0;i<lst.size();i++)
    {
        if(lst[i]<minn)
            minn=lst[i];
    }
    return minn;
}
void itc_odd_even_analysis_lst(const vector <int> &lst)
{
    vector <int> lst1;
    vector <int> lst2;
    cout<<"Анализ списка:";
    cout<<endl;
    itc_odd_even_separator_lst(lst,lst1,lst2);
    cout<<"Количество четных чисел: ";
    cout<<lst1.size()<<',';
    cout<<"        ";
    cout<<"Количество нечетных чисел: ";
    cout<<lst2.size()<<',';
    cout<<endl;
    cout<<"Максимальная четная цифра: ";
    cout<<maxchar(lst1)<<',';
    cout<<"        ";
    cout<<"Максимальная нечетная цифра: ";
    cout<<maxchar(lst2)<<',';
    cout<<endl;
    cout<<"Минимальная четная цифра: ";
    cout<<minchar(lst1)<<',';
    cout<<"        ";
    cout<<"Минимальная нечетная цифра: ";
    cout<<minchar(lst2)<<',';
    cout<<endl;
    cout<<"Сумма четных чисел: ";
    cout<<itc_sumlst(lst1)<<',';
    cout<<"        ";
    cout<<"Сумма нечетных чисел: ";
    cout<<itc_sumlst(lst2)<<',';
    cout<<endl;

}
void itc_pos_neg_analysis_lst(const vector <int> &lst)
{
    vector <int> lst1;
    vector <int> lst2;
    vector <int> lst3;
    itc_pos_neg_separator_lst(lst, lst1, lst3, lst2);
    cout<<"Положительные: ";
    cout<<"        ";
    cout<<"Отрицательные: ";
    cout<<endl;
    cout<<"Количество чисел: ";
    cout<<lst2.size()<<',';
    cout<<"        ";
    cout<<"Количество чисел: ";
    cout<<lst1.size()<<',';
    cout<<endl;
    cout<<"Максимальная цифра: ";
    cout<<maxchar(lst2)<<',';
    cout<<"        ";
    cout<<"Максимальная цифра: ";
    cout<<maxchar(lst1)<<',';
    cout<<endl;
    cout<<"Минимальная цифра: ";
    cout<<minchar(lst2)<<',';
    cout<<"        ";
    cout<<"Минимальная цифра: ";
    cout<<minchar(lst1)<<',';
    cout<<endl;
    cout<<"Сумма чисел: ";
    cout<<itc_sumlst(lst2)<<',';
    cout<<"        ";
    cout<<"Сумма чисел: ";
    cout<<itc_sumlst(lst1)<<',';
    cout<<endl;
    cout<<"Среднее значение: ";
    double sr;
    if(lst2.size()!=0){
        sr=itc_sumlst(lst2)/lst2.size();
    }else{sr=0}
    cout<<sr;
    cout<<"        ";
    cout<<"Среднее значение: ";
    double sr;
    if(lst2.size()!=0){
        sr=itc_sumlst(lst2)/lst2.size();
    }else{sr=0}
    cout<<sr1;
    cout<<endl;
    cout<<"Количество нулей: ";
    cout<<lst3.size();

}
