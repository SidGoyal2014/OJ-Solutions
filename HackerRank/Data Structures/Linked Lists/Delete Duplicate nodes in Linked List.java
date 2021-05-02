// Question Link: https://www.hackerrank.com/challenges/delete-duplicate-value-nodes-from-a-sorted-linked-list/problem

    // Complete the removeDuplicates function below.

    /*
     * For your reference:
     *
     * SinglyLinkedListNode {
     *     int data;
     *     SinglyLinkedListNode next;
     * }
     *
     */
    static SinglyLinkedListNode removeDuplicates(SinglyLinkedListNode head) {
        
        SinglyLinkedListNode ptr = head;

        while(ptr != null){
            
            SinglyLinkedListNode temp = ptr;
            
            while(temp.data == ptr.data && temp.next != null){
                
                temp = temp.next;
                
            }
            
            if(temp.next == null){
                if(temp.data != ptr.data){
                    ptr.next = temp;
                }
                else{
                    ptr.next = null;
                }
            }
            else{
                ptr.next = temp;
            }
            
            ptr = ptr.next;
        }

        return head;
    }
