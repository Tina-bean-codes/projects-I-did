#include <iostream> 

using namespace std; 

string playerName; 
char playerChoice; 
int totalScore;
//start of main 
int main() 
{
cout << "Enter Your Name: "; 
getline(cin, playerName); 
cout << "Hello "<<playerName; 

cout << " ***************************************" << endl;
cout << "\t\t WELCOME " << endl;
cout << "\t\t to" << endl;
cout << "\t\t THE GAME" << endl;
cout << " ****************************************\n";
cout << " ****************************************\n";
cout << "\t BECOME A MILLIONAIRE!!!!!!!\n";
cout << "******************************************\n";
cout << "******************************************\n";


char ch;
cout << "\t > Press S to start the game\n";
cout << "\t > Press V to view the highest score\n";
cout << "\t > Press R to reset score\n";
cout << "\t > Press H for help\n";
cout << "\t > Press Q to quit\n";
while (cin >> ch)
{
if (ch == 'Q')
{
cout << "See you next time!\n";
return 0; // quit the game if character is 'Q'
}
if (ch == 'V')
{
void show_score(); // show the user his/her score
cout << "you earned 500 point. good job!"<<endl;
}
if (ch== 'H')
{
    cout << "if you need help please call 911."<<endl;
    cout<< "just kidding make sure you are using ALL CAPS when you are choosing your choices."<<endl;
}


if (ch == 'S') // start the game if user enters character s;
{
    char choice;
    
    cout << "Enter 1, 2, 3, 4, or 5: ";
    cin >> choice;
    switch (choice)
    {
        case '1': cout << " Which animal has wings? \n";
    cout << " A) cow \n";
    cout << " B) dog \n";	// making the question
    cout << " C) bird \n";
    cout << " D) cat \n\n";
    
    char answer;
    cin >> answer;
    
    
    if (answer == 'C')
    cout<<"correct you earned 100 points"<<endl;
    else
    {
        cout<< "you failed now I must hunt you down" << endl;
    }
    
    
        
        case '2': cout << " Which animal slither its way through life? \n";
    cout << " A) cow \n";
    cout << " B) snake \n";	// making the question
    cout << " C) bird \n";
    cout << " D) cat \n\n";
    
    char choice;
   cin >> choice;
    
    if (choice == 'B')
    {
        cout<<"correct you earned 200 points"<<endl;
    }
    
    else
    {
        cout<< "you failed now I must hunt you down and you lost 100 points" << endl;
    }
    
    
        
        case '3':cout << " Which animal is a mammal? \n";
    cout << " A) cow \n";
    cout << " B) snake \n";	// making the question
    cout << " C) bird \n";
    cout << " D) worm \n\n";
    
    char ch;
   cin >> ch;
    
    if (ch == 'A')
    {
        cout<<"correct you earned 300 points"<<endl;
    }
    
    else
    {
        cout<< "you failed now I must hunt you down and you lost 100 points" << endl;
    }
    
    
        
        case '4': cout << " Which animal drinks milk? \n";
    cout << " A) cow \n";
    cout << " B) snake \n";	// making the question
    cout << " C) bird \n";
    cout << " D) cat \n\n";
    
    char c;
   cin >> c;
    
    if (c == 'D')
    {
        cout<<"correct you earned 400 points"<<endl;
    }
    
    else
    {
        cout<< "you failed now I must hunt you down and you lost 100 points" << endl;
    }
    
    

        case '5': cout << " what animal lives in water? \n";
    cout << " A) dolphin \n";
    cout << " B) cow \n";	// making the question
    cout << " C) bird \n";
    cout << " D) cat \n\n";
    
    char s;
   cin >> s;
    
    if (s == 'A')
    {
     cout<< "><><><><><><><><><><><><><><><><><><><><><><><<><><><><><><><><><><<><"<<endl;
        cout<<"correct you earned 500 points"<<endl;
     cout<< "><><><><><><><><><><><><><><><><><><><><><><><<><><><><><><><><><><<>"<<endl;
    }
    
    else
    {
        cout<< "you failed now I must hunt you down and you lost 100 points" << endl;
    }
    
    

        
        break;
        default: cout << "you did not enter 1, 2, 3, 4, or 5!\n";
    }
    return 0;
}
}
}

