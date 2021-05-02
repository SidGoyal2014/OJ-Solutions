// Question Link: https://www.hackerrank.com/challenges/get-the-value-of-the-node-at-a-specific-position-from-the-tail/problem

    // Complete the getNode function below.

    /*
     * For your reference:
     *
     * SinglyLinkedListNode {
     *     int data;
     *     SinglyLinkedListNode next;
     * }
     *
     */
    static int getNode(SinglyLinkedListNode head, int positionFromTail) {
        
        int n = 0;
        
        SinglyLinkedListNode temp = head;
        
        while(temp != null){
            temp = temp.next;
            n++;
        }
        
        int x = n - positionFromTail - 1;
        
        int i = 0;
        
        System.out.println("n : " + n);
        System.out.println("x : " + x);
        System.out.println("i : " + i);
        
        while(i < x){
            
            head = head.next;
            
            i++;
        }
        
        return head.data;
    }
