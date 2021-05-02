// Question Link: https://www.hackerrank.com/challenges/insert-a-node-into-a-sorted-doubly-linked-list/problem

    // Complete the sortedInsert function below.

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
    static DoublyLinkedListNode sortedInsert(DoublyLinkedListNode head, int data) {
        
        if(head == null){
            DoublyLinkedListNode n = new DoublyLinkedListNode(data);
            head = n;
            return head;
        }
        
        if(data <= head.data){
            DoublyLinkedListNode n = new DoublyLinkedListNode(data);
            DoublyLinkedListNode temp = head;
            head = n;
            head.next = temp;
            temp.prev = head;
            return head;
        }
        else{
            
            DoublyLinkedListNode temp = head;
            
            while(temp.next != null &&  temp.next.data < data){
                temp = temp.next;
            }
            
            if(temp.next == null){
                System.out.println(temp.data + " -> ");
                DoublyLinkedListNode n = new DoublyLinkedListNode(data);
                temp.next = n;
                n.prev = temp;
            }
            else{
                DoublyLinkedListNode n = new DoublyLinkedListNode(data);
                n.next = temp.next;
                n.prev = temp;
                temp.next = n;
            }
        }
        
        return head;
    }
