#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

struct Node {

    Node* next;
    int date;

    Node(int Date) : date(Date), next(nullptr) {}
};

class LinkedList {
    Node* head = nullptr;
    Node* tail = nullptr;

public:
    void Push_p(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }
    void Display() {
        while (head != nullptr) {
            cout << head->date;
            head = head->next;
        }
    }
};

void Polygon() {

}

void Game() {

}

void Menu() {
    cout << "1. Начать игру";
    cout << "2. Выйти";
    cout << endl;
    cout << "Выберете действие: ";
}

int main()
{
    setlocale(LC_ALL, "Ru");

    bool f = true;
    while (f) {
        int user;
        Menu();
        cin >> user;
        switch (user)
        {
        case 1:
            Game();
            break;
        case 2:
            f = false;
            break;
        default:
            cout << "Выбрано не верное действие";
            break;
        }

    }
}
