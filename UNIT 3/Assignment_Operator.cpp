#include <iostream>
#include <cstring>
using namespace std;

class FileData {
    char* content;  

public:
   
    FileData(const char* data = "") {
        content = new char[strlen(data) + 1];
        strcpy(content, data);
    }

    FileData& operator=(const FileData& f) {
        if (this != &f) { 
            delete[] content;
            content = new char[strlen(f.content) + 1];
            strcpy(content, f.content);
        }
        return *this;
    }

    void show() {
        cout << "File content: " << content << endl;
    }

    ~FileData() {
        delete[] content;
    }
};

int main() {
    FileData f1("Project Report Data");
    FileData f2;

    f2 = f1;  

    cout << "Copied file content:\n";
    f2.show();

    return 0;
}

