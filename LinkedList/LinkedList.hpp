class LinkedList {
public: 

    int data;
    LinkedList* next;

    void addNode(int data);
    void popNode();
    void insertNode(int position, int data);
    void removeNode(int position);
    void changeNode(int position, int data);

};