//
// Created by Michael on 21/8/2021.
//

#include "PagedArray.h"
#include "iostream"
using namespace std;

PagedArray::PagedArray(int *completeArray) : completeArray(completeArray) {

}

int& PagedArray::operator [] (int position){
    if(position == 0){
        cout << "Operator function" << endl;
        for(int i = 0; i < 256; i++){
            pageArray[i] = completeArray[i];
            //cout << to_string(i) + " " + to_string(pageArray[i]) << endl;
        }
        
        return pageArray[0] ;
    }
}

int* PagedArray::getPage(int* array){
    return array;
}