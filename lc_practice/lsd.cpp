#include<iostream>
using namespace std;

int a[1000];

void quickSort(int l, int r){
    int pivot = a[(l + r) / 2];
    int i = l;
    int j = r;


    while(i < j){
        while(a[i] < pivot) i++;
        while(a[j] > pivot) j--;
        
        if(i <= j){
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }

    if(l < j) quickSort(l, j);
    if(i < r) quickSort(i, r);
}