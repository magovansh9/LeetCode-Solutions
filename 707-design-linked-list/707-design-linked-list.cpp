class MyLinkedList {
public:
    
    struct ListNode{
        ListNode* next;
        int val; 
    };
    
    ListNode* head;
    int size;
    
    MyLinkedList() {
        head=NULL;
        size=0;
    }
    
    int get(int index) {
        if(index<0 || index>=size){
            return -1;
        }
        
        int i{0};
        ListNode* curr= head;
        while(i<index){
            curr=curr->next;
            i++;
        }
        
     std::cout<< "getting index: "<< index << "\n";
        return curr->val;

    }
    
    void addAtHead(int val) {
        ListNode* new_head= new ListNode();
        new_head->val=val;
        
        new_head->next=head;
        head=new_head;
        size++;

    }
    
    void addAtTail(int val) {
        
        if(size==0){
            addAtHead(val);
            return;
        }
        
        ListNode* tail= new ListNode();
        tail->val=val;
        tail->next=NULL;
        
        ListNode* curr=head;
        while(curr->next!=NULL){
            curr=curr->next;
        }
        
        curr->next= tail;
        size++;  

    }
    
    void addAtIndex(int index, int val) {
        
        if(index<0 || index>size){
            return;
        }
        
        if(index==0){
            addAtHead(val);
            return;
        }
        else if(index==size){
            addAtTail(val);
            return;
        }
        else{
            ListNode* new_node= new ListNode();
            new_node->val=val;
            
            int i{0};
            ListNode* curr= head;
            ListNode* prev=head;
            while(i<index){
                prev=curr;
                curr=curr->next;
                i++;
            }
            
            prev->next=new_node;
            new_node->next=curr;
        }
        size++;

    }
    
    void deleteAtIndex(int index) {
        
       if(index<0 || index>=size){
            return;
        }
        
        if(index==0){
            head=head->next;
        }
        
        else{
           
            int i{0};
            ListNode* curr= head;
            ListNode* prev=head;
            while(i<index){
                prev=curr;
                curr=curr->next;
                i++;
            }
            
            prev->next=curr->next;
        }
        size--;

    }
    
    void print(){
        ListNode* curr=head;
        while(curr!=NULL){
            std::cout<< curr->val << " ";
            curr=curr->next;
        }
        std::cout<< "\n ";
        std::cout<< "size: "<< size<< std::endl;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */