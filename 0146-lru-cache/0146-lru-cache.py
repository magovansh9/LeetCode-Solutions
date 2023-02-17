class Node:
    def __init__(self,key,value):
        self.key,self.val=key,value
        self.prev=self.next=None
        
class LRUCache:

    def __init__(self, capacity: int):
        self.cap = capacity
        self.cache = {}
        
        # Left=LRU, Right=MRU
        self.left,self.right=Node(0,0),Node(0,0)
        self.left.next,self.right.prev=self.right,self.left
    
    def remove(self,node):
        prev,nxt=node.prev,node.next
        prev.next=nxt
        nxt.prev=prev
         
    def insert(self,node):
        prev,nxt=self.right.prev,self.right
        prev.next=node
        node.next=nxt
        nxt.prev=node
        node.prev=prev
        
    def get(self, key: int) -> int:
        #TODO: update the most recently used node
        if key in self.cache:
            self.remove(self.cache[key])
            self.insert(self.cache[key])
            return self.cache[key].val
        else:
            return -1

    def put(self, key: int, value: int) -> None:
        # already in cache:- remove from the cache and insert a new node with the key-val pair, add to ll
        if key in self.cache:
            self.remove(self.cache[key])
        self.cache[key]=Node(key,value)
        self.insert(self.cache[key])
        
        if len(self.cache)>self.cap:
            #remove from linked list and delete lru
            lru=self.left.next
            self.remove(lru)
            del self.cache[lru.key]
        


# Your LRUCache object will be instantiated and called as such:
# obj = LRUCache(capacity)
# param_1 = obj.get(key)
# obj.put(key,value)