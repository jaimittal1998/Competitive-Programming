import java.io.*;
import java.util.*;

class bigsale
{
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
int t=sc.nextInt();
sc.nextLine();
double re[]=new double[t];
if(t>=1 && t<=10)
{
	for(int k=0;k<t;k++)
	{
		double sum=0.0;
		int n=sc.nextInt();
		sc.nextLine();
		if(n>=1 && n<=100000)
		{
			for(int i=0;i<n;i++)
			{
			String s=sc.nextLine();
			String st[]=s.split(" ");
			int a[]=new int[st.length];
			for(int j=0;j<st.length;j++)
			{
				a[j]=Integer.parseInt(st[j]);
			}
			if(a[0]>=1 && a[0]<=100 && a[1]>=1 && a[1]<=100 && a[2]>=0 && a[2]<=100)
			{
				double p=(double)a[0],q=(double)a[1],d=(double)a[2];
				double ip=p+(d/100*p);
				double dp=ip-(d/100*ip);
				double l=q*(a[0]-dp);
				sum=sum+l;
			}
			}
		}
		re[k]=sum;
	}
}
for(int i=0;i<t;i++)
{
	System.out.println(re[i]);
}
}
}