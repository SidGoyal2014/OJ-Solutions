// Question Link: https://www.hackerrank.com/challenges/reverse-a-doubly-linked-list/problem

    // Complete the reverse function below.

    /*
     * For your reference:
     *
     * DoublyLinkedListNode {
     *     int data;
     *     DoublyLinkedListNode next;
     *     DoublyLinkedListNode prev;
     * }
     *
     */
    static DoublyLinkedListNode reverse(DoublyLinkedListNode head) {
        
        DoublyLinkedListNode prev = null;
        DoublyLinkedListNode curr = head;
        
        while(curr != null){
            
            DoublyLinkedListNode nex = curr.next;
            
            // Set curr
            curr.next = prev;
            curr.prev = nex;
            
            // Update Pointers
            prev = curr;
            curr = nex;
        }
        
        return prev;
    }
