//
// Created by Michael on 20/8/2021.
//

#include "FileManager.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


FileManager::FileManager(const std::string &fileName, int numberOfIntegers) : FileName(fileName),
                                                                              numberOfIntegers(numberOfIntegers) {
}

const std::string &FileManager::getFileName() const {
    return FileName;
}

void FileManager::setFileName(const std::string &fileName) {
    FileName = fileName;
}

int FileManager::getNumberOfIntegers() const {
    return numberOfIntegers;
}

void FileManager::setNumberOfIntegers(int numberOfIntegers) {
    FileManager::numberOfIntegers = numberOfIntegers;
}

void FileManager::createFile(){
    //Crea y abre el archivo
    ofstream File_TXT(FileName+".txt");

    for (int i = 0; i < numberOfIntegers; i++) {
        //Escribe el archivo
        int random = 1 + (rand() % 5001);
        File_TXT << to_string(random) + ",";
    }
    File_TXT.close();
}

int* FileManager::readFile(){

    //Almacena las líneas del archivo
    string textFromFile;


    //Abre el archivo
    //ifstream readFromFile(FileName+".txt");

    ifstream infile;
    //int myArray[1536];

    int i=0;

    char cNum[10] ;
    infile.open ("Archivo_Enteros.txt", ifstream::in);
    if (infile.is_open())
    {
        while (infile.good())
        {
            infile.getline(cNum, 256, ',');
            myArray[i]= atoi(cNum) ;
            i++ ;
        }
        infile.close();
    }
    else
    {
    }


    //for (int i = 1536 - 1; i >= 0; i--)
        //cout << myArray[i] << endl;

    /*
    for(int i = 0; i<1536-1; i++){
        cout << myArray[i] << endl;
    }
    */
    return myArray;
}

    void FileManager::createResultFile(){

        ofstream resultFile("Archivo_Resultado.txt");

        resultFile <<"Números ordenados";

        resultFile.close();

    }
