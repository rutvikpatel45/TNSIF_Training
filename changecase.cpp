#include <iostream>
#include <cctype> 

int main() {
    char arr[10]="rutvik";
    

    if (arr[0] != '\0') { 
        std::cout << "First letter of the string: " << arr[0] << std::endl;

        
        if (std::islower(arr[0])) { 
            arr[0] = std::toupper(arr[0]);
        } else if (std::isupper(arr[0])) {
            arr[0] = std::tolower(arr[0]);
        }

    
        std::cout << "First letter after changing case: " << arr[0] << std::endl;
    }
    else {
        std::cout << "String is empty." << std::endl;
    }

    return 0;
}
