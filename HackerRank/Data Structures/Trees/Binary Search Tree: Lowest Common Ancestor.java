// Problem Link: https://www.hackerrank.com/challenges/binary-search-tree-lowest-common-ancestor/problem

  /*
    class Node 
    	int data;
    	Node left;
    	Node right;
	*/
	public static Node lca(Node root, int v1, int v2) {
        
        // Base Case
        if(root == null){
            return null;
        }
        
        // Rec Case
        if((root.data > v1) && (root.data > v2)){
            return lca(root.left,v1,v2);
        }
        else if((root.data < v1) && (root.data < v2)){
            return lca(root.right,v1,v2);
        }
        else{
            return root;
        }
    }
