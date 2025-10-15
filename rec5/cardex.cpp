#include <iostream>
using namespace std;

class Card {
public:
    Card(int r = 1, char s = 'S') : rank(r), suit(s) {}
    void Show() const { cout << rank << suit << " "; }
private:
    int rank;
    char suit;
};

class Player {
private:
    static const int MAX_HAND = 10;
    Card hand[MAX_HAND];
    int numCards; 

public:
    Player() : numCards(0) {}

    void addCard(const Card& c) {
        if (numCards < MAX_HAND) {
            hand[numCards++] = c;
        }
    }

    void showHand() const {
        for (int i = 0; i < numCards; i++) {
            hand[i].Show();
        }
        cout << endl;
    }
};

class Deck {
private:
    static const int MAX_CARDS = 52;
    Card cards[MAX_CARDS];
    int topCard;

public:
    Deck() : topCard(0) {
        // Initialize deck
        }
};