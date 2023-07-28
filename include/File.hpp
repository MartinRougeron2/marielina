#include "shared.hpp"

class File {
    public:
        static std::vector<std::string> read(std::string path);
        static void write(std::string path, std::string content);
}