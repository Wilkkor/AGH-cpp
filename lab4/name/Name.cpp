//
// Created by kornel on 21.03.17.
//

#include "Name.h"
Name::Name()
{

}
Name::Name(string all)
{
    string name="";
    int i=0;
    while(i<all.size())
    {
        if(all[i]==' ')
        {
            names.push_back(name);
            name.clear();
            i++;
        }
        name=name+all[i];
        i++;
    }
    surname=name;
}
void Name::add_name(string name)
{
    names.push_back(name);
}
void Name::set_surname(string last_name)
{
    surname=last_name;
}
string Name::ToFullInitials ()//T. J. J. C.
{
    string initials="";
    for (int i = 0; i < names.size(); ++i)
    {
            initials=initials+names[i][0]+". ";
    }
    initials=initials+surname[0]+".";
    return initials;
}
string Name::ToFirstNamesInitials ()//T. J. J. Cucumber
{
    string initials="";
    for (int i = 0; i < names.size(); ++i)
    {
        initials=initials+names[i][0]+". ";
    }
    initials=initials+surname;
    return initials;
}
string Name::ToSurnameNames ()//Cucumber Thomas Jorge Jelly
{
    string initials="";
    initials=initials+surname+" ";
    for (int i = 0; i < names.size(); ++i)
    {
        initials=initials+names[i]+" ";
    }
    return initials;
}
string Name::ToNamesSurname ()//Thomas Jorge Jelly Cucumber
{
    string initials="";
    for (int i = 0; i < names.size(); ++i)
    {
        initials=initials+names[i]+" ";
    }
    initials=initials+surname;
    return initials;
}
bool Name::IsBeforeBySurname(string last_name)
{
    int i;
    for (i = 0; i < surname.size()&&i<last_name.size(); ++i)
    {
        if(last_name[i]<surname[i])
        {
            return true;
        }
        if(last_name[i]>surname[i])
        {
            return false;
        }
    }
    if(i==surname.size())
        return false;
    else
        return true;
}
bool Name::IsBeforeByFirstName(string first_name)
{
    int i;
    for (i = 0; i < names[0].size()&&i<first_name.size(); ++i)
    {
        if(first_name[i]<names[0][i])
        {
            return true;
        }
        if(first_name[i]>names[0][i])
        {
            return false;
        }
    }
    if(i==names[0].size())
        return false;
    else
        return true;
}
