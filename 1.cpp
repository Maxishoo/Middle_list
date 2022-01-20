#include "middle_list.h"
void print_mas(vector <char> mas)
{
    for(int i=0;i<mas.size();i++)
    {
        cout<<mas[i]<<endl;
    }
}

vector <char> itc_strtlist(string str)
{
    vector <char> mas;
    for(int i=0;i<str.size();i++)
    {
        mas.push_back(str[i]);
    }
    return mas;
}
string itc_join(vector <char> lst, string sep)
{
    string otv="";
    if(lst.size()==0) return "";
    for(int i=0;i<lst.size();i++)
    {
        otv+=lst[i];
        if(i<lst.size()-1)
            otv+=sep;
    }
    return otv;
}
string itc_rmstrspc(string str)
{
    string otv="";
    if(str=="")
        return "";
    for(int i=0;i<str.size();i++)
    {
        if(str[i]!=' ')
        {
            otv+=str[i];
        }
    }
    return otv;
}
string itc_rmstrchar(string str, string les)
{
    string ot="";
    bool l=true;
    for(int i=0;i<str.size();i++)
    {
        for(int j=0;j<les.size();j++)
        {
            if(str[i]==les[j])
            {
             l=false;
            }
        }
        if(l==true)
        {
            ot+=str[i];
        }else{l=true;}

    }
    return ot;
}
