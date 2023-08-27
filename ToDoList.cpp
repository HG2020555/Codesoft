#include <iostream>
using namespace std;

class Node {
public:
    string data;
    string status;
    int number;
    Node* Next;

    Node(string data) {
        this->data = data;
        status = "Pending...";
        Next = nullptr;
    }
};

class ToDoList {
public:
    Node* Head;
    int counter = 0;

    ToDoList() {
        Head = nullptr;
    }

    bool IsEmpty() {
        return (Head == nullptr);
    }

    void insertFirst(string s) {
        Node* newNode = new Node(s);
        counter++;
        if (IsEmpty()) {
            newNode->Next = nullptr;
        }
        else {
            newNode->Next = Head;
        }
        Head = newNode;
        newNode->number = counter;
    }

    void Display() {
        Node* temp = Head;
        while (temp != nullptr) {
            cout << temp->number << "- " << temp->data << " " << temp->status << endl;
            temp = temp->Next;
        }
    }

    void mark(int s) {
        Node* temp = Head;
        while (temp != nullptr && temp->number != s) {
            temp = temp->Next;
        }
        if (temp != nullptr) {
            if (temp->status == "Completed! :)") {
                cout << "Already Completed!!" << endl;
            }
            else {
                temp->status = "Completed! :)";
            }
        }
    }

    bool IsFound(int numb) {
        Node* temp = Head;
        while (temp != nullptr) {
            if (temp->number == numb) {
                return true;
            }
            temp = temp->Next;
        }
        return false;
    }

    void Remove(int s) {
        if(IsEmpty()){
            cout<<"No Tasks To Be Removed!!"<<endl;
        }
        else if (IsFound(s)) {
            if (Head->number == s) {
                Node* temp = Head;
                Head = Head->Next;
                delete temp;
                cout << "Task Number " << s << " Is Removed :) ." << endl;
            }
            else {
                Node* temp = Head;
                while (temp->Next != nullptr && temp->Next->number != s) {
                    temp = temp->Next;
                }
                if (temp->Next != nullptr) {
                    Node* toRemove = temp->Next;
                    temp->Next = temp->Next->Next;
                    delete toRemove;
                    cout << "Task Number " << s << " Is Removed :) ." << endl;
                }
            }
        }
        else {
            cout << "No Task Numbered " << s << "!!!" << endl;
        }
    }
};

int main() {
    ToDoList x;
    cout << "----------------------------" << endl;
    cout << "     --To Do List--" << endl;
    cout << "----------------------------" << endl;
    cout << "1-Add Task." << endl;
    cout << "2-View Tasks." << endl;
    cout << "3-Mark Task." << endl;
    cout << "4-Remove Task." << endl;
    cout << "5-End Program." << endl;
    cout << "----------------------------" << endl;

    bool end = true;

    while (end) {
        cout << "Choose Options: ";
        int opt;
        cin >> opt;
        switch (opt) {
            case 1: {
                cout << "Enter The Task: ";
                string s;
                cin.ignore(); 
                getline(cin, s);
                x.insertFirst(s);
                break;
            }
            case 2: {
                x.Display();
                break;
            }
            case 3: {
                cout << "Enter The Completed Task Number: ";
                int task;
                cin >> task;
                x.mark(task);
                break;
            }
            case 4: {
                cout << "Enter The Task Number You Want To Remove: ";
                int task1;
                cin >> task1;
                x.Remove(task1);
                break;
            }
            case 5: {
                end = false;
                cout << "Good Job :)" << endl;
                break;
            }
            default:
                return 0;
        }
    }
    return 0;
}