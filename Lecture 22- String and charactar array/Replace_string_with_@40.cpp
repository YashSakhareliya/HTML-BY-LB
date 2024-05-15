#include <iostream>
#include <string>
// 
// this is invalid code fix it 


void replace_spaces_inplace(std::string& STR) {
    int spaces_count = 0;
    for (char c : STR) {
        if (c == ' ') {
            spaces_count++;
        }
    }

    int new_length = STR.length() + spaces_count * 2;
    STR.resize(new_length);

    int j = new_length - 1;
    for (int i = STR.length() - 1; i >= 0; i--) {
        if (STR[i] == ' ') {
            STR[j--] = '0';
            STR[j--] = '4';
            STR[j--] = '@';
        } else {
            STR[j--] = STR[i];
        }
    }
}

int main() {
    std::string STR = "Hello World";
    replace_spaces_inplace(STR);
    std::cout << STR << std::endl; // Output: Hello@40World

    return 0;
}