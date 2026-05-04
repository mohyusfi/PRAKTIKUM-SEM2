#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

class SinglyLinkedList {
private:
    Node* head;

public:
    SinglyLinkedList() {
        head = NULL;
    }

    // Menambahkan node di awal 
    void insertAtStart(int value) {
        Node* newNode = new Node(value);
        newNode->next = this->head;
        this->head = newNode;
    };

    // Menambahkan node di akhir
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);

        if (head == NULL) {
            head = newNode;
        } else {
            Node* temp = head;

            while (temp->next != NULL) {
                temp = temp->next;
            }

            temp->next = newNode;
        }

        cout << "Ditambahkan: " << value << endl;
    }

    // Menghapus node berdasarkan nilai
    void deleteNode(int value) {
        if (head == NULL) {
            cout << "List kosong! Tidak ada yang dihapus.\n";
            return;
        }

        // Jika node pertama yang dihapus
        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            cout << "Node dengan nilai " << value << " dihapus.\n";
            return;
        }

        // Mencari node yang akan dihapus
        Node* temp = head;
        Node* prev = NULL;

        while (temp != NULL && temp->data != value) {
            prev = temp;
            temp = temp->next;
        }

        if (temp == NULL) {
            cout << "Node dengan nilai " << value << " tidak ditemukan.\n";
            return;
        }

        prev->next = temp->next;
        delete temp;
        cout << "Node dengan nilai " << value << " dihapus.\n";
    }

    // Menampilkan isi linked list
    void display() {
        if (head == NULL) {
            cout << "List kosong!\n";
            return;
        }

        Node* temp = head;
        cout << "Isi Linked List: ";

        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL\n";
    }
};

int main() {
    SinglyLinkedList list;

    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.display();

    list.deleteNode(20);
    list.insertAtStart(10000);
    list.display();

    return 0;
}