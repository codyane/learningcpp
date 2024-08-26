#include <iostream>
#include <string>

using namespace std;

void menu ();
void inputStudentData(std::string[], int[], int);
void displayStudentData(const string students[], const int grades[], int size);
float calculateAverage(const int grades[], int size);

int main()
{
    const int SIZE = 5;
    std::string students[SIZE];
    int grades[SIZE];
    int choice;
    bool running = true;

    while(running){
        menu();
        std::cout << "Enter Your Choice: ";
        std::cin >> choice;

        switch(choice){
            case 1: inputStudentData(students, grades, SIZE);
                        break;
            case 2: displayStudentData(students,grades,SIZE);
                        break;
            case 3: calculateAverage(grades, SIZE);
                        break;
            case 4: running = false;
                    std::cout << "Exiting the Program\n\n";
                    break;
            default :
                        std::cout << "Invalid Input\n\n";
        }
            std::cout << '\n';
    }


    return 0;
}

void menu()
{
    std::cout << "Menu\n\n";
    std::cout << "1.Input Student Data\n\n";
    std::cout << "2.Display Student Data\n\n";
    std::cout << "3.Calculate Class Average\n\n";
    std::cout << "4.Exit\n\n";

}

void inputStudentData(std::string students[], int grades[], int size){
    for (int i = 0 ; i < size; i++){
        std::cout << "Enter Student " << i + 1 << " Name: or 'q' if you like to quit: ";
        std::cin.ignore();  // Ignore leftover newline from previous input
        std::getline(std::cin, students[i]);  // Read the full name including spaces
    
        if (students[i] == "q") {
            break;  // Quit the loop if the user enters 'q'
        }

        std::cout << "Enter " << students[i] << "'s Grade: ";
        std::cin >> grades[i];

    }
 
}

void displayStudentData(const string students[], const int grades[], int size){
    std::cout << "Student Data: \n\n";
        for (int i = 0; i < size; i ++){
            std::cout << students[i] << ": " << grades[i] << std::endl;
        }
}

float calculateAverage(const int grades[], int size){
    int sum;

    for(int i = 0 ; i < size; i ++){
        sum += grades[i];
    }
    return static_cast<float>(sum) / size;
}