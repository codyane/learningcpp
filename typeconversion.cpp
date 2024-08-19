#include <iostream>

int main (){

    // type conversion = conversion a value of one datatype to another
    //                Implicit = automatic
    //                Explicit = Precede value with a new data type(int)

        int correct = 8;
        int question = 10;
        double score = correct/(double)question * 100;

        std::cout << score << "%";

    return 0;

}