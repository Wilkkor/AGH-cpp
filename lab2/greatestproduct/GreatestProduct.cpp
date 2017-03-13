//
// Created by kornel on 13.03.17.
//

#include "GreatestProduct.h"

int GreatestProduct(const std::vector<int> &numbers, int k)
{
    vector <int> max;//katy jest majwiękrzy
    vector <int> min;
    vector <int> min2;
    max.push_back(0);
    min.push_back(0);
    int pom,j;
    for(int i:numbers)
    {
        if(i>0)
        {
            if(max.size()==k&&i>max[max.size()-1])
            {
                max[max.size()-1]=i;
                //for (int l = 0; l < max.size(); ++l) {
                    for (int m = 1; m < max.size(); ++m) {
                        if(max[m]>max[m-1])
                        {
                            pom=max[m];
                            max[m]=max[m-1];
                            max[m-1]=pom;
                        }
                    }
                //}
            }
            if(max.size()<k)
            {
                max.push_back(i);
                for (int l = 0; l < max.size(); ++l) {
                    for (int m = 1; m < max.size()-l; ++m) {
                        if(max[m]>max[m-1])
                        {
                            pom=max[m];
                            max[m]=max[m-1];
                            max[m-1]=pom;
                        }
                    }
                }
            }
        }if(i<0)
        {
            if(min.size()==k&&i<min[min.size()-1])
            {
                min[min.size()-1]=i;
                //for (int l = 0; l < min.size(); ++l) {
                    for (int m = 1; m < min.size(); ++m) {
                        if(min[m]<min[m-1])
                        {
                            pom=min[m];
                            min[m]=min[m-1];
                            min[m-1]=pom;
                        }
                    }
                //}
            }
            if(min.size()<k)
            {
                min.push_back(i);
                for (int l = 0; l < min.size(); ++l) {
                    for (int m = 1; m < min.size()-l; ++m) {
                        if(min[m]<min[m-1])
                        {
                            pom=min[m];
                            min[m]=min[m-1];
                            min[m-1]=pom;
                        }
                    }
                }
            }
            if(min2.size()==k&&i>min2[min2.size()-1])
            {
                min2[min2.size()-1]=i;
                //for (int l = 0; l < min.size(); ++l) {
                for (int m = 1; m < min2.size(); ++m) {
                    if(min2[m]>min2[m-1])
                    {
                        pom=min2[m];
                        min2[m]=min2[m-1];
                        min2[m-1]=pom;
                    }
                }
                //}
            }
            if(min2.size()<k)
            {
                min2.push_back(i);
                for (int l = 0; l < min2.size(); ++l) {
                    for (int m = 1; m < min2.size()-l; ++m) {
                        if(min2[m]>min2[m-1])
                        {
                            pom=min2[m];
                            min2[m]=min2[m-1];
                            min2[m-1]=pom;
                        }
                    }
                }
            }
        }
    }
    cout<<endl;
    int s=1;
    int a=0,b=0,koniecdod=max[0],koniecuje=min[0];
    if(min.size()==1)
    {
        for (int l = 0; l < k; ++l) {
            s=max[a]*s;
            a++;
        }
        max.clear();
        min.clear();
        return s;
    }
    if(max.size()==1&&k%2==1)
    {
        for (int l = 0; l < k; ++l) {
            s=min2[a]*s;
            a++;
        }
        max.clear();
        min.clear();
        return s;
    }


    {
        for (int l = 0; l < k; ++l)
        {
            if(max[a]>=(-min[b]))
            {
                s=max[a]*s;
                koniecdod=max[a];
                a++;
                continue;
            }
            if(max[a] < -min[b])
            {
                s=min[b]*s;
                koniecuje=min[b];
                b++;
            }
        }
        int s1=0,s2=0;
        if(s<0)
        {
            if(b<k)
                s1=(s/koniecdod)*min[b];
            if(a<k)
                s2=(s/koniecuje)*max[a];
        }
        if(s1>s2)
            s=s1;
        if(s2>s1)
            s=s2;
    }
    max.clear();
    min.clear();
    return s;
}
