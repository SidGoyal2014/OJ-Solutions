// Question Link: https://www.hackerrank.com/challenges/reverse-a-linked-list/problem

    // Complete the reverse function below.

    /*
     * For your reference:
     *
     * SinglyLinkedListNode {
     *     int data;
     *     SinglyLinkedListNode next;
     * }
     *
     */
    static SinglyLinkedListNode reverse(SinglyLinkedListNode head) {
        
        SinglyLinkedListNode prev = null;
        SinglyLinkedListNode curr = head;
        
        while(curr != null){
            
            SinglyLinkedListNode nex = curr.next;
            
            curr.next = prev;
            
            prev = curr;
            curr = nex;
        }
        
        return prev;
    }
