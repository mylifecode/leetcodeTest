#ifndef __QUICKSORT_H__
#include<iostream>
#include<vector>


class QuickSort
{

    public:
        QuickSort();
        ~QuickSort();
        bool AddReadySortVec(std::vector<int>vec); 
        std::vector<int> GetSortResult();
    private:

        int FindSplitPos(std::vector<int> &vec,int left,int right);
        void Sort(std::vector<int>&vec,int left,int right);
        std::vector<int> m_v;

};


#endif