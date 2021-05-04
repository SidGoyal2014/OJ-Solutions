// Question Link: https://www.hackerrank.com/challenges/binary-search-tree-insertion/problem

    /* Node is defined as :
      class Node 
        int data;
        Node left;
        Node right;    
    */

	public static Node insert(Node root,int data) {
        
        if(root == null){
            Node n = new Node(data);
            
            root = n;
            return root;
        }
        
        if(data < root.data){
            
            if(root.left != null){
                root.left = insert(root.left,data);
            }
            else{
                Node n = new Node(data);
                
                root.left = n;
                
                return root;
            }
        }
        
        if(data > root.data){
            
            if(root.right != null){
                root.right = insert(root.right,data);
            }
            else{
                Node n = new Node(data);
                
                root.right = n;
            }
        }
        
        return root;
    }
