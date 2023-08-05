#include<iostream>
using namespace std;

    class account
    {
        private:
        string name;
        int accno;
        string Atype;
    public:
        void getdetail()
        {
            cout<<"\n enter customber name:";
            cin>>name;
            cout<<"\n enter the account no:";
            cin>>accno;
            cout<<"\n enter account type:";
            cin>>Atype;
        }

        void displaydetial()
        {
            cout<<"\n Customer name:"<<name;
            cout<<"\n Account number:"<<accno;
            cout<<"\n Account type:"<<Atype;

        }
    };
 class current_account:public account
        {
            private:
            float balance;
        public:
            void c_display()
            {
                cout<<"\n balance:"<<balance;
            }
            void c_deposit()
            {
                int cb;
                cout<<"\n enter amount to deposit";
                cin>>cb;
                balance=balance+cb;
            }
            void c_withdraw()
            {
                float withdraw;
                cout<<"\n balance:"<<balance;
                cout<<"\n enter amount to be withdraw:";
                cin>>withdraw;
                if(balance>1000)
                {
                    balance=balance-withdraw;
                    cout<<"\n balance amount after withdraw:"<<balance;
                }
        else
        {
            cout<<"\n insufficient balance";
        }
            }
        };

class saving_account:public account
{
    private:
        float sav_balance;
    public:
        void s_display()
        {
            cout<<"\n Balance:"<<sav_balance;
        }
        void s_display()
        {
            float deposit;
            cout<<"\n enter amount to deposit:";
            cin>>deposit;
            sav_balance=sav_balance+deposit;
        }
    void s_withdraw()
    {
        float withdraw;
        cout<<"\n balance:"<<sav_balance;
        cout<<"\n enter amount to be withdraw:";
        cin>>withdraw;
        if(sav_balance>500)
        {
            sav_balance=sav_balance-withdraw;
            cout<<"\n Balance amount after withdraw:"<<sav_balance;
        }
        else
        {
            cout<<"\n insufficient balance";
        }
    }
};

int main()
{
    current_account c1;
    saving_account s1;
    char type;
    cout<<"\n enter s for saving customber and c for current a/c customber:";
    cin>>type;
    int choice;
    if(type=='s'||type=='s')
    {
        s1.getaccountdetalis();
           while(1)
           {
            cout<<"\n chose your choice"<<endl;
            cout<<"\n 1. deposit"<<endl;
            cout<<"2. withdraw"<<endl;
            cout<<"\n3. display balance"<<endl;
            cout<<"4. display with full details"<<endl;
            cout<<"5. exit"<<endl;
            cout<<"enter your choice:";
            cin>>choice;
            switch(choice)
            {
                case 1:
                s1.s_deposit();
                break;
                case 2:
                s1.s_withdraw();
                break;
                case 3:
                s1.s_display();
                break;
                case 4:
                s1.s_displaydetails();
                s1.s_display();
                break;
                case 5:
                  goto end;
                default;
                cout<<"\n enter choice is inavidi\try again";
            }
           }
    }
};

 if(type=='c'||type=='c')
    {
        c1.getAccountdetalis();
           while(1)
           {
            cout<<"\n chose your choice"<<endl;
            cout<<"\n 1. deposit"<<endl;
            cout<<"2. withdraw"<<endl;
            cout<<"\n3. display balance"<<endl;
            cout<<"4. display with full details"<<endl;
            cout<<"5. exit"<<endl;
            cout<<"enter your choice:";
            cin>>choice;
            switch(choice)
            {
                case 1:
                c1.c_deposit();
                break;
                case 2:
                c1.c_withdraw();
                break;
                case 3:
                c1.c_display();
                break;
                case 4:
                c1.c_displaydetails();
                c1.c_display();
                break;
                case 5:
                  goto end;
                default;
                cout<<"\n enter choice is inavidi\try again";
            }
           }
    }

        else 
            cout<<"\n invalid account selection";
        
        end;
        cout<<"\n thnak you for banking with us..";
        return 0;
        