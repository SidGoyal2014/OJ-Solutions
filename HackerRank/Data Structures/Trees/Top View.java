// Question Link: https://www.hackerrank.com/challenges/tree-top-view/problem

    /* 

      class Node 
        int data;
        Node left;
        Node right;
    */

    public static class Pair{
        
        Node first;
        int second;
        
        Pair(Node f,int sec){
            this.first = f;
            this.second = sec;
        }
    }
    
	  public static void topView(Node root) {
        
        Map<Integer, Integer> mp = new TreeMap<Integer, Integer>();
        
        // val_key = pos -> node.data;
        
        mp.put(0,root.data);
        
        Queue<Pair> q = new LinkedList<>();
        
        q.add(new Pair(root,0));
        
        while(!q.isEmpty()){
            
            Node temp = q.peek().first;
            int d = q.peek().second;
            
            q.remove();
            
            if(mp.get(d) == null){   
                mp.put(d,temp.data);
            }
            
            ///////
            if(temp.left != null){
                q.add(new Pair(temp.left, d-1));
            }
            
            if(temp.right != null){
                q.add(new Pair(temp.right,d+1));
            }
        }
        
        /*
        for(Integer i : mp.keySet()){
            System.out.print(i + " ");
        }
        System.out.println();
        */
        for(Integer i : mp.values()){
            System.out.print(i + " ");
        }
    }
