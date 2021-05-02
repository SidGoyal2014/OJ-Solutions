// Question Link: https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list/problem

static void printLinkedList(SinglyLinkedListNode head) {    
    while(head != null){
        System.out.println(head.data);
        head = head.next;
    }
}
