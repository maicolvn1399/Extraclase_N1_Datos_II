#include <iostream>
#include "QuickSort.h"
#include "FileManager.h"
#include "PagedArray.h"
using namespace std;
#include <iostream>
#include <fstream>


int main()
{
    FileManager file1 = FileManager("Archivo_Enteros", 1536);
    file1.createFile();
    cout << "File created" << endl;

    cout<<"Information from file:\n" << endl;
    file1.readFile();


    int array[1536];
    copy(begin(file1.myArray), end(file1.myArray), begin(array));

    //cout << "from main" << endl;

    //for(int i = 0; i<1536; i++){
        //cout <<array[i] << endl;
    //}

    PagedArray pA = PagedArray(array);
    //pA[0];

    int n = pA[0];

    //int array[] = {95, 45, 48, 98, 1, 485, 65, 478, 1, 2325};
    //int n = sizeof(array)/sizeof(array[0]);

    //std::cout << "Before Quick Sort :" << std::endl;
    //QuickSort::printArray(array, n);

    cout << "Running quicksort" << endl;
    QuickSort qs;
    qs.quicksort(array,0,n);

    qs.printArray(array,1536);

    //QuickSort::quicksort(array, 0, n);

    //std::cout << "After Quick Sort :" << std::endl;
    //QuickSort::printArray(array, n);

    return 0;
}
