#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int win, lose = 0;
    for (int i = 1; i<100000; i++){
        int choice = rand()%3;
        int randor = rand()%3;
        if(choice == randor){
            choice = (choice + 1)%3;
        }else{
            if((choice +1)%3 == randor){
                choice = (choice + 1)%3;
            }else{
                choice = (choice + 2)%3;
            }
        }
        if(choice == randor){
            win++;
        }else{
            lose++;
        }
    }
    cout << "Win:: " << win << endl << "Lose:: " << lose;
    return 0;
}