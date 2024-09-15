
    #include <iostream>

int main() {
    for (int i = 0; i < 5; ++i) {
        switch (i) {
            case 0:
                std::cout << "Case 0" << std::endl;
                break;
            case 2:
                std::cout << "Case 2, continuing loop" << std::endl;
                break; // Correct usage: skips the rest of the loop iteration
            case 4:
                std::cout << "Case 4" << std::endl;
                break;
            default:
                std::cout << "Default case" << std::endl;
        }
        std::cout << "After switch statement" << std::endl;
    }

    return 0;
}

