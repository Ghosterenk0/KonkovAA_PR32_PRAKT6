#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

struct Node {

    Node* next;
    char t;

    Node(char T) : t(T), next(nullptr) {}
};

class LinkedList {
    Node* head = nullptr;
    Node* tail = nullptr;

public:
    void Push_p(char t) {
        Node* newNode = new Node(t);
        newNode->next = head;
        head = newNode;
    }
    void Display() {
        while (head != nullptr) {
            cout << head->t;
            head = head->next;
        }
    }
};

void Game() {
    system("cls");
    bool f = true;
    LinkedList snake;
    snake.Push_p('@');
    while (f) {
        int _kbhit(void);
        int ch;
        ch = _getch();
        ch = toupper(ch);
        if (_kbhit != 0) {
            switch (ch)
            {
            case 'W':
                break;
            case 'S':
                break;
            case 'A':
                break;
            case 'D':
                break;
            default:
                break;
            }
        }
    }
    
    
}

void Menu() {
    cout << "1. Начать игру";
    cout << endl;
    cout << "2. Выйти";
    cout << endl;
    cout << "Выберете действие: ";
    cout << endl;
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
