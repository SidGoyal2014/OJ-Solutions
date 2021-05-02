// Question Link: https://www.hackerrank.com/challenges/insert-a-node-at-a-specific-position-in-a-linked-list/problem

// Complete the insertNodeAtPosition function below.

    /*
     * For your reference:
     *
     * SinglyLinkedListNode {
     *     int data;
     *     SinglyLinkedListNode next;
     * }
     *
     */
    static SinglyLinkedListNode insertNodeAtPosition(SinglyLinkedListNode head, int data, int position) {
        
        SinglyLinkedListNode n = new SinglyLinkedListNode(data);
        
        if(head == null){
            head = n;
            return head;
        }
        
        SinglyLinkedListNode temp = head;
        
        int i = 0;
        
        while(i < (position - 1)){
            temp = temp.next;
            i++;
        }
        
        SinglyLinkedListNode temp1 = temp.next;
        
        temp.next = n;
        
        n.next = temp1;
        
        return head;
    }
