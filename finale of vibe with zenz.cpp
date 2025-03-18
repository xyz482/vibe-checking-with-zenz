#include <iostream>
#include <string>
using namespace std;

void searchSlang() {
    string term;
    cout << "Enter a Gen Z slang term: ";
    cin >> term;

    if (term == "lit") cout << "Lit means: Exciting or excellent!\n";
    else if (term == "fam") cout << "Fam means: A close group of friends or family.\n";
    else if (term == "slay") cout << "Slay means: To do something really well!\n";
    else if (term == "bet") cout << "Bet means: To confirm or agree with something.\n";
    else if (term == "cap") cout << "Cap means: To lie. 'No cap' means you're being truthful.\n";
    else if (term == "sus") cout << "Sus means: Suspicious or shady.\n";
    else if (term == "vibe") cout << "Vibe means: The overall feeling or mood.\n";
    else if (term == "noob") cout << "Noob means: A beginner or newcomer.\n";
    else if (term == "goat") cout << "GOAT means: Greatest of all time.\n";
    else if (term == "stan") cout << "Stan means: To strongly support or be a fan of.\n";
    else if (term == "mood") cout << "Mood means: Describes your emotional state.\n";
    else if (term == "slaps") cout << "Slaps means: Something that's really good, especially music.\n";
    else if (term == "fomo") cout << "FOMO means: Fear of Missing Out.\n";
    else if (term == "yolo") cout << "YOLO means: You Only Live Once.\n";
    else if (term == "simp") cout << "Simp means: Someone overly supportive to someone they like.\n";
    else if (term == "flex") cout << "Flex means: To show off or boast.\n";
    else if (term == "clout") cout << "Clout means: Influence or power, usually on social media.\n";
    else if (term == "snatched") cout << "Snatched means: Looking good or fashionable.\n";
    else if (term == "tea") cout << "Tea means: Gossip or the latest news.\n";
    else if (term == "savage") cout << "Savage means: Someone who is bold or unapologetic.\n";
    else if (term == "cheugy") cout << "Cheugy means: Something that is outdated or uncool.\n";
    else if (term == "no cap") cout << "No cap means: To be honest or truthful.\n";
    else if (term == "drip") cout << "Drip means: Stylish or fashionable.\n";
    else if (term == "ghosting") cout << "Ghosting means: Suddenly cutting off all communication with someone.\n";
    else if (term == "lowkey") cout << "Lowkey means: Something that's subtle or not too obvious.\n";
    else if (term == "highkey") cout << "Highkey means: Something that's obvious or strongly expressed.\n";
    else if (term == "deadass") cout << "Deadass means: Seriously or truthfully.\n";
    else if (term == "mood") cout << "Mood means: Describes your emotional state.\n";
    else if (term == "lit") cout << "Lit means: Exciting or excellent!\n";
    else if (term == "sksksk") cout << "Sksksk means: A phrase expressing excitement, often used with 'and I oop'.\n";
    else cout << "Sorry, I don't know that term.\n";
}

void provideMentalHealthTips() {
    cout << "Mental Health Tips:\n";
    cout << "1. Talk to someone you trust – it can help lighten the load.\n";
    cout << "2. Take a moment to breathe, relax, and reset.\n";
    cout << "3. Practice mindfulness and meditation.\n";
    cout << "4. It's okay to not be okay. Reach out for help if needed.\n";
    cout << "5. If there is stress or anxiety then take medicine with doctor consultant.\n";
}

int main() {
    int choice;
    cout << "Welcome to Vibe Checking with Zenz!\n";
    do {
        cout << "\n1. Look up a Gen Z slang term\n";
        cout << "2. Get mental health tips\n";
        cout << "3. Exit\n";
        cout << "Choose an option (1-3): ";
        cin >> choice;

        if (choice == 1) {
            searchSlang();
        } else if (choice == 2) {
            provideMentalHealthTips();
        } else if (choice == 3) {
            cout << "Take care and stay awesome!\n";
        } else {
            cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 3);

    return 0;
}

