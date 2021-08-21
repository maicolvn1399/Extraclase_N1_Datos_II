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
    // Crea y abre el archivo
    ofstream File_TXT(FileName+".txt");

    for (int i = 0; i < numberOfIntegers; i++) {
        // Escribe el archivo
        int random = 1 + (rand() % 5001);
        File_TXT << to_string(random) + ",";
    }

    File_TXT.close();
}

void FileManager::readFile(){

    //Almacena las líneas del archivo
    string textFromFile;

    //Abre el archivo
    ifstream readFromFile(FileName+".txt");

    //loop para leer el archivo
    while (getline(readFromFile,textFromFile)){
        cout<<textFromFile;
    }
}
void FileManager::createResultFile(){

    ofstream resultFile("Archivo_Resultado.txt");

    resultFile <<"Números ordenados";

    resultFile.close();

}
