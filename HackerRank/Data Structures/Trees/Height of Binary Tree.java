// Question Link: https://www.hackerrank.com/challenges/tree-height-of-a-binary-tree/problem

  /*
    class Node 
    	int data;
    	Node left;
    	Node right;
	*/
	public static int height(Node root) {
        
        int a = 0;
        int b = 0;
        
        if(root.right != null){
            a = 1 + height(root.right);
        }
        
        if(root.left != null){
            b = 1 + height(root.left);
        }
        
        return Math.max(a,b);
    }
