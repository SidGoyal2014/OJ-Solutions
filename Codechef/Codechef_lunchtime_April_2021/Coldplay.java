// Problem Code: SLOOP
// Question Link: https://www.codechef.com/LTIME95C/problems/SLOOP

/* package codechef; // don't place package name! */
import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner sc = new Scanner(System.in);

	    int t = sc.nextInt();

	    while(t > 0){
		int m,s;
		m = sc.nextInt();
		s = sc.nextInt();

		System.out.println(m/s);

		t--;
	    }
	}
}
