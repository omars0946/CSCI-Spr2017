#include <iostream>
#include <string>
using namespace std;

int main() {
    int Name, Action, Team, Body_part, Fear, Object, Creature;
    

    string Story;

cout << "Enter your name: ";
    cin >> Name;
cout << "Enter a funny action:" ;
    cin >> Action;
cout << "Enter a sports team:" ;
    cin >> Team;
cout << "Name a part of your face:" ;
    cin >> Body_part;
cout << "Something that scares you:";
    cin >> Fear;
cout << "Enter a random object:";
    cin >> Object;
cout << "Name a mystical creature";
    cin >> Creature;
cout << endl;
    
    

    
    
// Building the story
cout << "DO NOT READ UNTIL YOU FINISH QUESTIONARE" << endl;

cout << "A person named " << Name << ", " << "was arrested this morning after he/she " << Action << " in front of the"  << Team << endl;
cout << "They were so upset with " << Name << "That they threw a chair directly at " << Name << "'s face!" << endl;
cout << "The injuries were so bad, that the " << Body_part << "had to be amputated. While unconscious,  " << Name << "had a dream that they awoke from the hospital, and the place was overrun with " << Creature << endl; 
cout << "s! The first thing he/she saw was a" << Object << "and used it to defend themselves, unfortunately, " << Name << "missed and hit himself so hard he woke up" << endl;
cout << "When he actually awoke, the" << Creature << "came and took them away, never to be seen again" << endl;

 return 0;    

}



