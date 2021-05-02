// Question Link: https://www.hackerrank.com/challenges/insert-a-node-at-the-tail-of-a-linked-list

// Complete the insertNodeAtTail function below.

    /*
     * For your reference:
     *
     * SinglyLinkedListNode {
     *     int data;
     *     SinglyLinkedListNode next;
     * }
     *
     */
    static SinglyLinkedListNode insertNodeAtTail(SinglyLinkedListNode head, int data) {
        
        SinglyLinkedListNode n = new SinglyLinkedListNode(data);
        
        SinglyLinkedListNode temp = head;
        
        if(head == null){
            head = n;
            return head;
        }
        
        while(temp.next != null){
            temp = temp.next;
        }
        
        temp.next = n;
        
        return head;
    }
