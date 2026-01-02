#include <iostream> //for cout & cin statement
#include <cstdlib> //for srand() & rand() statement 
#include <ctime> //for time(0)
#include <unistd.h> //for sleep
using namespace std;
int main()
{
    srand(time(0)); //seed random number
    int level = 1, lives = 3;
    cout<<"Welcome to BiMemory Game\n";
    cout<<"Type the binary after it's gone. You have 3 lives \n\n";
    while(lives > 0)
    {
        int length = level + 2;
        string binary = ""; //Generate random binary numbers
        for(int i = 0; i < length; i++)
        {
            binary += ( rand() % 2 ) ? '1':'0';
        }
        //show binary to remember
        cout<< " level " << level <<" Remember this -> "<< binary << endl;
        sleep(2); //show for 2 seconds only
        system("cls"); // To clear screen
        cout<< " Now Type The Binary: ";
        string input;
        cin >> input;
        if(input == binary)
        {
            cout<< " Correct!\n\n ";
            level++;
        }
        else{
            lives--;
            cout<< " Wrong! correct answer was: "<< binary <<" lives left "<< lives <<"\n\n";
        }
    }
    cout<< " Game Over! You reached level "<< level-1 <<"\n";
    return 0;
}
