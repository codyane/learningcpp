#include <iostream>

int main(){

    std::string questions[] = {"1.What year was C++ Created?: ",
                                "2.Who invented C++?: ",
                                "3.What is the predecessor of C++?: ",
                                "4.is the Earth flat?: "};
                        
    std::string options[][4] = { {"A. 1966", "B. 1975", "C. 1985", "D. 1985"},
                                 {"A. Guido van Rossum", "B. Bjarne Stroustrup",
                                  "C. Me", "D. You"},
                                 {"A. C", "B. C+", "C. C--", "D. A+"},     
                                 {"A. Yes", "B. No", "C. Sometimes", "D. IDK"} };

    char answerKey[] = {'C', 'B', 'A', 'A'};
            
    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score = 0;

    for(int i = 0; i < size; i++){
        std::cout << questions[i] << '\n';

        for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
            std::cout << options[i][j] << '\n';
        }

    std::cin >> guess ;
    guess = toupper(guess); // to make input uppercase

    if (guess == answerKey[i]){
        std::cout << "Correct!\n";
        score++;
    }
    else{
        std::cout << "wrong!\n";
        std::cout << "Answer: " << answerKey[i] << '\n';
    }
 }

    std::cout << "Quiz Over Your Score is: " << score << '\n';
    std::cout << "# of Questions: " << size << '\n';
    std::cout << "Score: " << (score/(double)size)*100 << "%";

    }
    
   