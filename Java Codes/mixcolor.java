import java.io.*;
import java.util.*;
 
class mixcolor
{
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
int t=sc.nextInt();
sc.nextLine();
int re[]=new int[t];
if(t>=1 && t<=10)
{
	for(int k=0;k<t;k++)
	{
		int c=0,count=0;
		int n=sc.nextInt();
		sc.nextLine();
		if(n>=1 && n<=100000)
		{
			String s=sc.nextLine();
			String st[]=s.split(" ");
			int a[]=new int[st.length];
			for(int i=0;i<st.length;i++)
			{
				a[i]=Integer.parseInt(st[i]);
				if(a[i]>=1 && a[i]<=1000000000)
					c++;
			}
			if(c==n)
			{
				for(int i=0;i<a.length-1;i++)
				{
					for(int j=i+1;j<a.length;j++)
					{
							if(a[i]==a[j])
							{
								a[i]=a[i]+a[i+1];
								count++;
							}
					}
				}
			}
			re[k]=count;
		}
	}
}
for(int i=0;i<t;i++)
{
	System.out.println(re[i]);
}
}
} 