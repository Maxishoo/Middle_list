#include "middle_list.h"
long itc_sumlst(const vector <int> &lst)
{
    long ot=0;
    if(lst.size()==0)
        return 0;
    for(int i=0;i<lst.size();i++)
    {
        ot=ot+lst[i];
    }
    return ot;
}
long itc_sum_even_lst(const vector <int> &lst)
{
    long ot=0;
    if(lst.size()==0)
        return 0;
    for(int i=0;i<lst.size();i++)
    {
        if(i%2==0)
            ot=ot+lst[i];
    }
    return ot;
}
long itc_sum_even_part_lst(const vector <int> &lst)
{
    long ot=0;
    if(lst.size()==0)
        return 0;
    for(int i=0;i<lst.size();i++)
    {
        if(lst[i]%2==0)
            ot=ot+lst[i];
    }
    return ot;
}
void itc_odd_even_separator_lst(const vector <int> &lst, vector <int> &lst1, vector <int> &lst2)
{
    if(lst.size()==0)
        return;
    for(int i=0;i<lst.size();i++)
    {
        if(lst[i]%2==0){lst1.push_back(lst[i]);}
        else{lst2.push_back(lst[i]);}
    }
}
void itc_pos_neg_separator_lst(const vector <int> &lst, vector <int> &lst1, vector <int> &lst2, vector <int> &lst3)
{
    if(lst.size()==0)
        return;
    for(int i=0;i<lst.size();i++)
    {
        if(lst[i]==0){lst2.push_back(lst[i]);}
        else if(lst[i]<0){lst1.push_back(lst[i]);}
        else if(lst[i]>0){lst3.push_back(lst[i]);}
    }
}
long maxchar(const vector <int> &lst)
{
    long maxx=lst[0];
    for(int i=0;i<lst.size();i++)
    {
        if(lst[i]>maxx)
            maxx=lst[i];
    }
    return maxx;
}
