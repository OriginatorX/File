#ifndef FILE_H
#define FILE_H

#include <iostream>
#include <exception>
#include <string>
#include <memory>
#include <sstream>

class File {
    FILE* file;
public:
    File(const std::string& filename, const char* mode = "w");
    ~File();

    void Write(const std::string& label);
    void Read();
};

#endif // FILE_H!