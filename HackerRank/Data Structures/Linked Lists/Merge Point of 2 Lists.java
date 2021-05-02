    // Complete the findMergeNode function below.

    /*
     * For your reference:
     *
     * SinglyLinkedListNode {
     *     int data;
     *     SinglyLinkedListNode next;
     * }
     *
     */
    static int findMergeNode(SinglyLinkedListNode head1, SinglyLinkedListNode head2) {
        
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
        
        h1 = head1;
        h2 = head2;
        
        // System.out.println("n1 : " + n1);
        // System.out.println("n2 : " + n2);
        
        if(n1 > n2){
            int i = 0;
            
            while(i < (n1 - n2)){
                h1 = h1.next;
                i++;
            }            
        }
        else if(n2 > n1){
            int i = 0;
            
            while(i < (n2 - n1)){
                h2 = h2.next;
                i++;
            }
        }
        
        // h1 & h2 are at the same distance apart from joining point
        while(h1 != h2){
            h1 = h1.next;
            h2 = h2.next;
        }
        
        return h1.data;
    }
