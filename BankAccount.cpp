
                              class BankAcca1unt 
{
private:
	string name;
	int account  ;
	

public:
	double balance;
	

    void BankAcca1unt::setbalance(double bal)
	{
		balance =bal;
	}

	void BankAcca1unt::setname(string s)
	{
		name=s;
	}
	void BankAcca1unt::setaccount(int n)
	{
		account=n;
	}

    int BankAcca1unt::getaccount()
	{
		return account ;
	}
    string  BankAcca1unt::getname()
	{
	 return name ;
	}

	double BankAcca1unt::getbalance()
	{
		return balance;
	}
	

	

	void deposite (double money )
	{
		if ( money <0)
			cout<<"negative deposite not allawed ";
		else 
		balance+= money ;
	}
	void withdraw (double money )
	{
		balance-= money ;
	}
};

                                                         


