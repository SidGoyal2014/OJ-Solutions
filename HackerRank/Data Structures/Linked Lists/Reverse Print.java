// https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list-in-reverse/problem

    // Complete the reversePrint function below.

    /*
     * For your reference:
     *
     * SinglyLinkedListNode {
     *     int data;
     *     SinglyLinkedListNode next;
     * }
     *
     */
    static void reversePrint(SinglyLinkedListNode head) {
        
        SinglyLinkedListNode prev = null;
        SinglyLinkedListNode curr = head;
        
        // while(curr!= null && curr.next != null){
        while(curr != null){
            
            SinglyLinkedListNode nex = curr.next;
            
            curr.next = prev;
            
            prev = curr;
            curr = nex;
        }
        
        SinglyLinkedListNode ptr = prev;
        
        while(ptr != null){
            System.out.println(ptr.data);
            ptr = ptr.next;
        }
    }
