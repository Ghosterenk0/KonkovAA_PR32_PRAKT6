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
    void Forward() {
        
    }
    void Backward() {

    }
    void Right() {

    }
    void Left() {

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
    LinkedList snake;
    snake.Push_p('@');
    int _kbhit(void);
    int ch;
    ch = _getch();
    ch = toupper(ch);
    switch (ch)
    {
    case 'w':
        break;
    case 's':
        break;
    case 'a':
        break;
    case 'd':
        break;
    default:
        break;
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
