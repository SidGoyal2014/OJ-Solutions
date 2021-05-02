// Question Link: https://www.hackerrank.com/challenges/compare-two-linked-lists/problem

    // Complete the compareLists function below.

    /*
     * For your reference:
     *
     * SinglyLinkedListNode {
     *     int data;
     *     SinglyLinkedListNode next;
     * }
     *
     */
    static boolean compareLists(SinglyLinkedListNode head1, SinglyLinkedListNode head2) {
        
        SinglyLinkedListNode h1 = head1;
        SinglyLinkedListNode h2 = head2;
        
        int n1 = 0;
        int n2 = 0;
        
        while(h1 != null){
            h1 = h1.next;
            n1++;
        }
        
        while(h2 != null){
            h2 = h2.next;
            n2++;
        }
        
        if(n1 != n2){
            return false;
        }
        
        // reset
        h1 = head1;
        h2 = head2;
        
        while(h1 != null && h2 != null){
            if(h1.data != h2.data){
                return false;
            }
            
            h1 = h1.next;
            h2 = h2.next;
        }
        
        return true;
    }
