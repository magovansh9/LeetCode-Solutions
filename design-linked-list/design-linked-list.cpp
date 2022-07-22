class MyLinkedList {
public:
    
   struct ListNode {
       ListNode* next;
       ListNode* prev;
       int val;
   };
    
    ListNode* head;
    int size;
    
    MyLinkedList() {
      size=0;
      head=NULL;
          // print();
    }
    
    int get(int index) {
        if(index<0 || index>=size || size==0){
            return -1;
        }
        
        ListNode* curr=head;
        int i{0};
        while(i<index){
            curr=curr->next;
            i++;
        }
          // print();
        return curr->val;
    }
    
    void addAtHead(int val) {
        ListNode* new_node= new ListNode();
        new_node->val=val;
        new_node->prev=NULL;
        new_node->next=head;
        if(size!=0){
            head->prev=new_node;
        }
        head=new_node;
        size++;
          // print();
    }
    
    void addAtTail(int val) {
        
        if(size==0){
            addAtHead(val);
            return;
        }
        
        ListNode* tail= new ListNode();
        tail->val=val;
        
        ListNode* curr=head;
        while(curr->next){
            curr=curr->next;
        }
        
        curr->next= tail;
        tail->next= NULL;
        tail->prev= curr;
        size++;
          // print();
     
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
        else {
            ListNode* newNode = new ListNode();
            newNode->val=val;
            
            int i{0};
            ListNode* curr=head;
            while(i<index){
                curr=curr->next;
                i++;
            }
            
            newNode->prev= curr->prev;
            newNode->next= curr;
            curr->prev->next=newNode;
            curr->prev=newNode;
            size++;    
        }
        
          // print();

    }
    
    void deleteAtIndex(int index) {
        
        if(index<0 || index>=size || size==0){
            return;
        }
        
        if(size==1){
            head=NULL;
            size--;
            return;
        }
        
        if(index==0){
            head=head->next;
            head->prev=NULL;
            size--;
            return;
        }
        
        
        ListNode* curr=head;
        int i{0};
        
        while(i<index){
            curr=curr->next;
            i++;
        }
        
        if(index==size-1){
            curr=curr->prev;
            curr->next=NULL;
            size--;
            return;
        }
        
        curr->prev->next=curr->next;
        curr->next->prev= curr->prev;
        size--;
        // print();
    
    }
    
    void print(){
     ListNode* curr=head;
        
     while(curr){
         std::cout<< curr->val<<"->";
         curr=curr->next;
     }
        std::cout<<"NULL"<<" size="<<size<<std::endl;
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