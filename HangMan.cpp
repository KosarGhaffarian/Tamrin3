#include <iostream>
#include <time.h>
#include <string>



using namespace std;

int main()
{
    string words[] = { "computer", "console", "desktop" };
    string word, user_input[10];
    char user_letter;
    int random,counter=0;

    srand(time(0));

    random = rand()%3;

    word = words[random];

    /*cout << word;*/


    /*for(int i=0; i < word.size(); i++)
    {
        cout << "__" <<'\t' ;
    }
    cout << endl;*/


    for(int i=0; i < word.size(); i++)
    {
        cout << "__" <<'\t' ;
    }

    cout << "\nwelcome to game!";


    for(int i=0; i<word.size(); i++)
    {
        cout << endl << "\nEnter a letter: ";
        cin >> user_letter;

        for(int j=0; j<word.size(); i++)
        {

            if(user_letter == word[i])
            {
               user_input[i] = user_letter;
                cout << user_letter;
                counter = counter+1;
            }
            else
            {
                cout << "-";
            }
            while (counter == word.size()){

            }
           /* if( counter == word.size())
            {
                cout << "won";
                break;
            }
            else
            {
                cout << "-";
                break;
            }*/

        }
    }



    return 0;
}
