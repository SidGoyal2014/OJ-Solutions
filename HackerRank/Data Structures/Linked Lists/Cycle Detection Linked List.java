// Question Link: https://www.hackerrank.com/challenges/detect-whether-a-linked-list-contains-a-cycle/problem

    // Complete the hasCycle function below.

    /*
     * For your reference:
     *
     * SinglyLinkedListNode {
     *     int data;
     *     SinglyLinkedListNode next;
     * }
     *
     */
    static boolean hasCycle(SinglyLinkedListNode head) {
        
        if(head == null){
            return false;
        }
        
        if(head.next == null){
            return false;
        }
        
        if(head.next.next == null){
            return false;
        }
        
        SinglyLinkedListNode ptr1 = head;
        SinglyLinkedListNode ptr2 = head; // .next.next;
        
        // int i = 0;
        
        while(ptr1 != null && ptr1.next != null && ptr2.next != null && ptr2 != null){
            
            ptr1 = ptr1.next;
            
            if(ptr2.next.next == null){
                return false;
            }
            ptr2 = ptr2.next.next;
            
            if(ptr1 == ptr2){
                return true;
            }
        }
        
        return false;
    }
