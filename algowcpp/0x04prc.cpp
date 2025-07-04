#include<iostream>
using namespace std;

struct Node {
  Node *next;
  int data;
};

int main() {
    Node* head = nullptr;
    
    Node* node1 = new Node{nullptr,1};
    head = node1;

    Node* node2 = new Node{nullptr,2};
    node1->next = node2;

    Node* node3 = new Node{nullptr,3};
    node2->next = node3;

    Node* node4 = new Node{nullptr,4};
    node2->next = node4;

    Node* cur = head;
        while(cur != nullptr) {
        cout << cur->data << ' ';
        cur = cur->next;
    }
    Node* cur = head;
        while (cur != nullptr) {
        Node* temp = cur;     // 현재 노드 임시 저장
        cur = cur->next;      // 다음 노드로 이동
        delete temp;          // 현재 노드 삭제
        }

}