//
// Created by Michael on 20/8/2021.
//

#ifndef EXTRACLASE_N1_DATOS_II_FILEMANAGER_H
#define EXTRACLASE_N1_DATOS_II_FILEMANAGER_H
#endif //EXTRACLASE_N1_DATOS_II_FILEMANAGER_H

#include "fstream"
#include <iostream>

/**
 * @file FileManager.h
 * @author Michael Valverde
 * @brief Clase manejadora de archivos
 * @version 1.0
 * @date 20/08/2021
 */

class FileManager{

public:

    /**
     * @brief Constructor de clase FileManager
     * @param fileName Nombre del archivo
     * @param numberOfIntegers Cantidad de enteros en el archivo
     */

    FileManager(const std::string &fileName, int numberOfIntegers);

    const std::string &getFileName() const;

    void setFileName(const std::string &fileName);

    int getNumberOfIntegers() const;

    void setNumberOfIntegers(int numberOfIntegers);

    /**
     * @brief Método para crear un archivo con extensión .txt y con números aleatorios en un rango
     * de 1 a 5000
     */
    void createFile();

    /**
     * @brief Método que permite leer un archivo de extensión .txt
     */
    void readFile();


    /**
     * @brief Método que permite crear el archivo resultado, con los números enteros ordenados
     */
    void createResultFile();

public:
    std::string FileName;
    int numberOfIntegers;

};
