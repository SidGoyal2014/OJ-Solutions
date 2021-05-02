// Question Link: https://www.hackerrank.com/challenges/delete-a-node-from-a-linked-list/problem

    // Complete the deleteNode function below.

    /*
     * For your reference:
     *
     * SinglyLinkedListNode {
     *     int data;
     *     SinglyLinkedListNode next;
     * }
     *
     */
    static SinglyLinkedListNode deleteNode(SinglyLinkedListNode head, int position) {
        
        int i = 0;
        
        if(position  == 0){
            return head.next;
        }
        if(head == null){
            return head;
        }
        else if(head.next == null){
            return null;
        }
        
        SinglyLinkedListNode temp = head;
        
        while(i < (position - 1)){
            temp = temp.next;
            i++;
        }
        
        SinglyLinkedListNode temp1 = temp.next;
        
        if(temp1.next == null){
            temp.next = null;
        }
        else{
            temp.next = temp1.next;
        }
        
        return head;
    }
