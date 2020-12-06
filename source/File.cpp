#define _CRT_SECURE_NO_WARNINGS

#include "../interface/File.h"

File::File(const std::string& filename, const char* mode) {
    std::stringstream ss(mode);
    std::string str{};
    ss >> str;

    if (str == "w") {
        std::cout << "writing\n";
    } else if (str == "r") {
        std::cout << "Reading\n";
    } else {
        throw std::runtime_error("Undefined mode");
    }

    file = fopen(filename.data(), mode);
    if (file == nullptr) {
        throw std::runtime_error(filename.data());
    }
}

File::~File() {
    fclose(file);
}

void File::Write(const std::string& label) {
    if (fputs(label.data(), file) == EOF) {
        throw std::runtime_error(" text not written");
    }
}

void File::Read() {
    char buffer[256];
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        std::cout << buffer << "\n";
    }

    if (feof(file))
       puts("End of file reached");
}