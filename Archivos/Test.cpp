#include <fstream>
#include <iostream>


int main(){
    std::string line;
    
    std::ifstream MyFile("test.txt");
    std::ofstream MyFile2("test2.txt");

    int count =1;

    while ( getline (MyFile, line) ) {
        MyFile2<< line << '\n';
        if(count++ %5 == 0)
            MyFile2<<" "<<std::endl<<std::endl;
    }
    
    MyFile.close();
    MyFile2.close();

    return 0;
}