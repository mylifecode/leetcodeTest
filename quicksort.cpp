#include"quickSort.h"
#include<iostream>


 QuickSort::QuickSort()
 {

 }
QuickSort::~QuickSort()
{

}
bool QuickSort::AddReadySortVec(std::vector<int>vec)
{
    if(!m_v.empty())
    {
        m_v.clear();
    }
    if(vec.empty())
    {
        return false;
    }

    for(auto& v:vec)
    {
        m_v.push_back(v);
    }

    return true;
}
int QuickSort::FindSplitPos(std::vector<int> &vec,int left,int right)
{
    int i,j;
    i=left,j=right;
    while(i<j)
    {
        while(i<j)
        {
            if(vec[j]<vec[i])
            {
                int temp=vec[j];
                vec[j]=vec[i];
                vec[i]=temp;
               break;
            }
            else
            {
            
                j--;
            }
            
        }
        while(i<j)
        {
            if(vec[i]>vec[j])
            {
                int temp=vec[i];
                vec[i]=vec[j];
                vec[j]=vec[i];
                break;
            }
            else
            {

                i++;
            }
        }
    }
    return i;
}

void QuickSort::Sort(std::vector<int>&vec,int left,int right)
{
    
    if(left>=right)
    {
        return;
    }
    int pos=FindSplitPos(vec,left,right);
    
    if(left<pos)
    {
        Sort(vec,left,pos-1);
    }
    if(pos<right)
    {
        Sort(vec,pos+1,right);
    }

}
std::vector<int>  QuickSort::GetSortResult()
{
    Sort(m_v,0,m_v.size()-1);
    return m_v;
}


