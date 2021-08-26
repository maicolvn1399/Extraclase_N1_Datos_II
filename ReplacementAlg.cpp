//
// Created by Michael on 24/8/2021.
//

#include "ReplacementAlg.h"
#include "PagedArray.h"
#include "QuickSort.h"
#include "FileManager.h"

ReplacementAlg::ReplacementAlg(int *completeArray, int initialPage) : completeArray(completeArray), initialPage(initialPage) {

}

void ReplacementAlg::replace(){

    PagedArray pA = PagedArray(completeArray);

    for(int i = 0; i < 6; i++){
        if(i == initialPage){
            cout << "Page being taken: " + to_string(initialPage) << endl;
            continue;
        }else if( i == 0){
            int indexPage = pA[i];
            cout << "Page being taken: " + to_string(i) << endl;
            QuickSort qs;
            qs.quicksort(completeArray,0,indexPage);

            qs.printArray(completeArray,1536);
        }else{
            int indexPage = pA[i];
            cout << "Page being taken: " + to_string(i) << endl;
            QuickSort qs;
            qs.quicksort(completeArray,indexPage-256,indexPage);
            qs.printArray(completeArray,1536);
        }

    }

    QuickSort qSFinal;
    qSFinal.quicksort(completeArray,0,1536);
    qSFinal.printArray(completeArray,1536);

    FileManager fileResult = FileManager("Archivo_Resultado",1536);
    fileResult.createResultFile(completeArray);

}




