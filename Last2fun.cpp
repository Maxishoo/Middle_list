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
    cout<<"������ ������:";
    cout<<endl;
    itc_odd_even_separator_lst(lst,lst1,lst2);
    cout<<"���������� ������ �����: ";
    cout<<lst1.size()<<',';
    cout<<"        ";
    cout<<"���������� �������� �����: ";
    cout<<lst2.size()<<',';
    cout<<endl;
    cout<<"������������ ������ �����: ";
    cout<<maxchar(lst1)<<',';
    cout<<"        ";
    cout<<"������������ �������� �����: ";
    cout<<maxchar(lst2)<<',';
    cout<<endl;
    cout<<"����������� ������ �����: ";
    cout<<minchar(lst1)<<',';
    cout<<"        ";
    cout<<"����������� �������� �����: ";
    cout<<minchar(lst2)<<',';
    cout<<endl;
    cout<<"����� ������ �����: ";
    cout<<itc_sumlst(lst1)<<',';
    cout<<"        ";
    cout<<"����� �������� �����: ";
    cout<<itc_sumlst(lst2)<<',';
    cout<<endl;

}
void itc_pos_neg_analysis_lst(const vector <int> &lst)
{
    vector <int> lst1;
    vector <int> lst2;
    vector <int> lst3;
    itc_pos_neg_separator_lst(lst, lst1, lst3, lst2);
    cout<<"�������������: ";
    cout<<"        ";
    cout<<"�������������: ";
    cout<<endl;
    cout<<"���������� �����: ";
    cout<<lst2.size()<<',';
    cout<<"        ";
    cout<<"���������� �����: ";
    cout<<lst1.size()<<',';
    cout<<endl;
    cout<<"������������ �����: ";
    cout<<maxchar(lst2)<<',';
    cout<<"        ";
    cout<<"������������ �����: ";
    cout<<maxchar(lst1)<<',';
    cout<<endl;
    cout<<"����������� �����: ";
    cout<<minchar(lst2)<<',';
    cout<<"        ";
    cout<<"����������� �����: ";
    cout<<minchar(lst1)<<',';
    cout<<endl;
    cout<<"����� �����: ";
    cout<<itc_sumlst(lst2)<<',';
    cout<<"        ";
    cout<<"����� �����: ";
    cout<<itc_sumlst(lst1)<<',';
    cout<<endl;
    cout<<"������� ��������: ";
    double sr;
    if(lst2.size()!=0){
        sr=itc_sumlst(lst2)/lst2.size();
    }else{sr=0}
    cout<<sr;
    cout<<"        ";
    cout<<"������� ��������: ";
    double sr;
    if(lst2.size()!=0){
        sr=itc_sumlst(lst2)/lst2.size();
    }else{sr=0}
    cout<<sr1;
    cout<<endl;
    cout<<"���������� �����: ";
    cout<<lst3.size();

}
