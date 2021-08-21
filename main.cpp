#include <iostream>
#include "perro.h"
#include "QuickSort.h"
#include "FileManager.h"
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


    //int array[] = {95, 45, 48, 98, 1, 485, 65, 478, 1, 2325};
    //int n = sizeof(array)/sizeof(array[0]);

    //std::cout << "Before Quick Sort :" << std::endl;
    //QuickSort::printArray(array, n);

    //QuickSort qs;
    //qs.quicksort(array,0,n);

    //qs.printArray(array,n);


    //QuickSort::quicksort(array, 0, n);

    //std::cout << "After Quick Sort :" << std::endl;
    //QuickSort::printArray(array, n);

    return 0;
}
