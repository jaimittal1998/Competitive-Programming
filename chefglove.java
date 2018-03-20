import java.io.*;
import java.util.*;

class chefglove
{
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
int t=sc.nextInt();
sc.nextLine();
String re[]=new String[t];
if(t>=1 && t<=100)
{
	for(int k=0;k<t;k++)
	{
		int c=0,d=0,front=0,back=0,temp=0;
		int n=sc.nextInt();
		sc.nextLine();
		String s=sc.nextLine();
		String s1=sc.nextLine();
		String st[]=s.split(" ");
		String st1[]=s1.split(" ");
		int a[]=new int[st.length];
		int b[]=new int[st1.length];
		for (int i=0; i<st.length; i++) 
		{
			a[i]=Integer.parseInt(st[i]);
			b[i]=Integer.parseInt(st1[i]);
			if(a[i]>=1 && a[i]<=1000000000  && b[i]>=1 && b[i]<=1000000000)
				temp++;
		}
		if(temp==n)
		{
	int rev[]=new int[a.length];
	for(int i=0;i<n;i++)
	{
		rev[i]=a[(n-1-i)];
	}

	for(int i=0;i<n;i++)
	{
		if(a[i]<=b[i])
			c++;
		if(rev[i]<=b[i])
			d++;
	}
	if(c==n)
		front++;
	if(d==n)
		back++;

	if(front==1 && back==1)
		re[k]="both";
	else if(front==1)
		re[k]="front";
	else if(back==1)
		re[k]="back";
	else
		re[k]="none";
	}
	}
}

for(int i=0;i<t;i++)
{
	System.out.println(re[i]);
}
}
}