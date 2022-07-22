class MyLinkedList {
public:
    
    struct ListNode{
        int val;
        ListNode* next;
        ListNode* prev;
    };
    
    ListNode* head;
    int size;
    
    MyLinkedList() {
      size=0;
       head=NULL;
    }
    
    int get(int index) {
      if(index<0 || index>=size|| size==0){
          return -1;
      }
        
      ListNode* curr=head;
      int i{0};
      while(i<index){
          curr=curr->next;
          i++;
      }
            print();
        return curr->val;         
    }
    
    void addAtHead(int val) {
        ListNode* newHead= new ListNode();
        newHead->val= val;
        
        newHead->next=head;
        newHead->prev=NULL;
        if(size!=0){
            head->prev=newHead;
        }
        head=newHead;
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
        while(curr->next){
            curr=curr->next;
        }
        
        curr->next=tail;
        tail->prev=curr;
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
            ListNode* newNode= new ListNode();
            newNode->val=val;
            
            ListNode* curr=head;
            int i{0};
            while(i<index){
                curr=curr->next;
                i++;
            }
            
            newNode->prev= curr->prev;
            newNode->next=curr;
            curr->prev->next=newNode;
            curr->prev=newNode;
            size++;
        }
          
        
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
     else if(index==0){
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
        
        curr->prev->next= curr->next;
        curr->next->prev= curr->prev;
        size--;
        
    
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