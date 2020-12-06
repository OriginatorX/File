#include "interface/File.h"

int main(int, char** const) {

    try {
        std::unique_ptr<File> file(new File("../files/out.txt"));
        std::string text;
        getline(std::cin, text);
        file->Write(text);
        file.reset();

        File r_file("../files/out.txt", "r");
        r_file.Read();

    } catch(std::exception& exp) {
        std::cout << "runtime error: " << exp.what() << "\n";
    }

    return EXIT_SUCCESS;
}