//
// Created by kornel on 16.05.17.
//
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <map>
//#include <numeric>

using namespace std;


std::set<std::string> Keys(const std::map<std::string, int> &m);
std::vector<int> Values(const std::map<std::string, int> &m);
std::map<std::string, int> DivisableBy(const std::map<std::string, int> &m,int divisor)
{
    ;
}
void SortInPlace(std::vector<int> *v)
{
    sort(v->begin(),v->end());
}
std::vector<int> Sort(const std::vector<int> &v)
{

}
void SortByFirstInPlace(std::vector<std::pair<int,int>> *v)
{
    struct {
        bool operator()(pair<int,int> a, pair<int,int> b) const
        {
            return a.first < b.first;
        }
    } customLess;
    std::sort(v->begin(), v->end(), customLess);
}
void SortBySecondInPlace(std::vector<std::pair<int,int>> *v)
{
    struct {
        bool operator()(pair<int,int> a, pair<int,int> b) const
        {
            return a.second < b.second;
        }
    } customLess;
    std::sort(v->begin(), v->end(), customLess);
}
void SortByThirdInPlace(std::vector<std::tuple<int,int,int>> *v);
std::vector<std::string> MapToString(const std::vector<double> &v);
std::string Join(const std::string &joiner, const std::vector<double> &v);
int Sum(const std::vector<int> &v)
{
    return accumulate(v.begin(),v.end(),0);
}
int Product(const std::vector<int> &v)
{

}
bool Contains(const std::vector<int> &v, int element);
bool ContainsKey(const std::map<std::string, int> &v, const std::string &key);
bool ContainsValue(const std::map<std::string, int> &v, int value);
std::vector<std::string> RemoveDuplicates(const std::vector<std::string> &v);
void RemoveDuplicatesInPlace(std::vector<std::string> *v);
void InitializeWith(int initial_value, std::vector<int> *v);
std::vector<int> InitializedVectorOfLength(int length, int initial_value);
void CopyInto(const std::vector<int> &v, int n_elements, std::vector<int> *out);
int HowManyShortStrings(const std::vector<std::string> &v, int inclusive_short_length);

int main()
{
    vector <int> v={23,4,5,45,7,8,76,4,4,35,7,8,654,43,4,78,456,8,7644};
    cout<<Sum(v)<<"\n";
    SortInPlace(&v);
    for(int i;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    vector <pair<int,int>> v2={{23,4},{5,45},{7,8},{76,4},{4,35},{7,8},{654,43},{4,78},{456,8}};
    for(int i;i<v2.size();i++)
    {
        cout<<v2[i].first<<"  "<<v2[i].second<<endl;
    }
    SortByFirstInPlace(&v2);
    for(int i;i<v2.size();i++)
    {
        cout<<v2[i].first<<"  "<<v2[i].second<<endl;
    }
    SortBySecondInPlace(&v2);
    for(int i;i<v2.size();i++)
    {
        cout<<v2[i].first<<"  "<<v2[i].second<<endl;
    }
}