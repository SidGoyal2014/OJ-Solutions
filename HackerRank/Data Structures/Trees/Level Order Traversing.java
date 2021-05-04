// Question Link: https://www.hackerrank.com/challenges/tree-level-order-traversal/problem

	/* 
    
    class Node 
    	int data;
    	Node left;
    	Node right;
	*/
	public static void levelOrder(Node root) {
        
        Queue<Node> q = new LinkedList<>();
        
        q.add(root);
        
        while(!q.isEmpty()){
            
            Node ptr = q.element();
            
            q.remove();
            
            System.out.print(ptr.data + " ");
            
            if(ptr.left != null){
                q.add(ptr.left);
            }
            
            if(ptr.right != null){
                q.add(ptr.right);
            }            
        }        
    }
