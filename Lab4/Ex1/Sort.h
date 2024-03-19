#pragma once
#include <stdio.h>

class Sort
{   // add data members
private: 
    int *list;
    int size;
public:
    // add constuctors
    Sort();
    ~Sort();
    Sort(int size);


    void InsertSort(bool ascendent = false);
    void QuickSortRec(int st, int dr, bool ascendent);
    void QuickSort(bool ascendent = false);
    void BubbleSort(bool ascendent = false);
    void Print();
    int  GetElementsCount();
    int  GetElementFromIndex(int index);
};
