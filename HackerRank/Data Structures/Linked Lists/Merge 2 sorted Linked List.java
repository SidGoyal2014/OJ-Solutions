// Question Link: https://www.hackerrank.com/challenges/merge-two-sorted-linked-lists/problem

    // Complete the mergeLists function below.

    /*
     * For your reference:
     *
     * SinglyLinkedListNode {
     *     int data;
     *     SinglyLinkedListNode next;
     * }
     *
     */
    static SinglyLinkedListNode mergeLists(SinglyLinkedListNode head1, SinglyLinkedListNode head2) {
        
        SinglyLinkedListNode head;
        
        if(head1.data >= head2.data){
            SinglyLinkedListNode n = new SinglyLinkedListNode(head2.data);
            
            head = n;
            
            head2 = head2.next;
        }
        else{
            SinglyLinkedListNode n = new SinglyLinkedListNode(head1.data);
            
            head = n;
            
            head1 = head1.next;
        }
        
        SinglyLinkedListNode ptr = head;
        
        while(head1 != null && head2 != null){
            
            if(head1.data >= head2.data){
                
                SinglyLinkedListNode n = new SinglyLinkedListNode(head2.data);
                
                ptr.next = n;
                
                head2 = head2.next;
            }
            else{
                
                SinglyLinkedListNode n = new SinglyLinkedListNode(head1.data);
                
                ptr.next = n;
                
                head1 = head1.next;
            }
            
            ptr = ptr.next;
        }
        
        if(head1 != null){
            while(head1 != null){
                
                SinglyLinkedListNode n = new SinglyLinkedListNode(head1.data);
                
                ptr.next = n;
                
                head1 = head1.next;
                
                ptr = ptr.next;
            }
        }
        
        if(head2 != null){
            while(head2 != null){
                
                SinglyLinkedListNode n = new SinglyLinkedListNode(head2.data);
                
                ptr.next = n;
                
                head2 = head2.next;
                
                ptr = ptr.next;
            }
        }
        
        return head;
    }
