void judge()
{	
	int daan,n,num0;
	string s;
	cout<<"请输入你的年级？"<<endl;
	cin>>s;
	cout<<"请输入题目数？"<<endl;
	cin>>n;
	if(s=="一年级"||s=="二年级")
	{
		for(int i=0;i<n;i++)
		{
			create12();
			cout<<s<<endl;
			 
			cout<<calculate(s)<<endl;
			cin>>answer;
			
			if(answer==calculate(s))
			{
				sum++;
				
			}
			
		 } 
		
	}
	
	else if(s=="三年级"||s=="四年级")
	{
		
		
	}
	
	else if(s=="五年级"||s=="六年级")
	{
		
		
	}
	
	
	
	if(sum==n)
	{
		cout<<"结束！全部正确，太棒了！"<<endl;
	}
	else cout<<"结束！错了"<<n-sum<<"题哦"<<endl; 
}
