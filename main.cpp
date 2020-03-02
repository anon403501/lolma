//includes
#include <iostream>
#include <istream>
#include <string>
using namespace std;

//variables
string question = "unknown";
string question2[99]; // the questions stored in the program
string answer2[99]; // the answers stored in the program
string answer = "donno";
string YorN = "no";
int counter = 1; // to sync the answer location with the question location
int qnaCounter; // this is used to check all the plases in the answers and questions arrays in GetAnswer()
bool qnaExist = false; // to tell if the question exists in the array

int main()
{
    //functions pre declarations
    string GetAnswer(string ques);
    void intro(); // this one is just outputs text

////YOU STOPPED HERE

    //ready answers
    //i put them at the end of the array so new entries wont replace them
    question2[94] = "hello";
    answer2[94] = "hi_how_are_you";

    question2[95] = "fine";
    answer2[95] = "good_:)";

    question2[96] = "how_are_you";
    answer2[96] = "i_am_great";

    question2[97] = "hi";
    answer2[97] = "hello";

    question2[98] = "yo";
    answer2[98] = "sup";

    question2[99] = "test";
    answer2[99] = "IT'S_ALIVE_!!!";

    //main code
    intro();
    for (int f = 0; f < 1000; f++)
    {
        cout << "ask me a question : " << flush;
        cin >> question;
        GetAnswer(question); 
        if (answer == "donno") // GetAnswer() will pass "donno" if the question isnt already in the array
        {
            cout << "i can't figure out the answer for this question" << endl;
            cout << "do you have an answer for this question (reply with yes or no) : "<< flush;
            cin >> YorN;
            if (YorN == "yes" || YorN =="Yes" || YorN == "y" || YorN == "Y")
            {
                cout << "suggest an answer : " << flush;
                cin >> answer2[counter];
                cout << endl << "i will put that in mind... thanks" << endl;
                question2[counter] = question;
                counter++;
            }
            else
            {
                cout << "what ever you see... thanks anyway" << endl;
            }
        }
        else
        {
            if (answer == "")
            {
                cout << "answer = none (this is an error)" << endl;
            }
            cout << answer << endl;
        }
        answer = "donno";
    }
    //testes
    /*
    cout << "..........tests.........." << endl;
    cout << answer2[3] << endl;
    cout << question2[3] << endl;
    */
    cout << endl << endl;
    return 0;
}


//functions
string GetAnswer(string ques)
{

    for (int i = 0; i < 101; i++)
    {
        if (question == question2[i])
        {
            qnaExist = true;
            qnaCounter = i;
            answer = answer2[qnaCounter];
            break;
        }
    }

    return answer;
}

void intro() //nothing here... just text
{
    cout << "Hello and welcome" << endl;
    cout << "i am your virtual assistant lolma" << endl;
    cout << "i am stil learning right now so i hope you can help me out a bit" << endl;
    cout << "if you ask me a question that i don't know the answer for you can type the answer that i was supposed to say" << endl;
    cout << "that's enough for now..." << endl;
}
