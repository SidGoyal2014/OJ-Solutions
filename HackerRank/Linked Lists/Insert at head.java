// Question Link: https://www.hackerrank.com/challenges/insert-a-node-at-the-head-of-a-linked-list

// Complete the insertNodeAtHead function below.

    /*
     * For your reference:
     *
     * SinglyLinkedListNode {
     *     int data;
     *     SinglyLinkedListNode next;
     * }
     *
     */
    static SinglyLinkedListNode insertNodeAtHead(SinglyLinkedListNode llist, int data) {
        
        SinglyLinkedListNode n = new SinglyLinkedListNode(data);
        
        if(llist == null){
            llist = n;
            return llist;
        }
        
        SinglyLinkedListNode temp = llist;
        
        llist = n;
        llist.next =  temp;
        
        return llist;
    }
