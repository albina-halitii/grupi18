void shfaqTeDhenat()
{
cout<<"----------------------------------"<<endl;
cout<<"Studenti: "<<id<<endl;
cout<<"Emri dhe mbiemri: "<<emri<<" "<<mbiemri<<endl;
cout<<"Statusi: ";
switch(statusi)
{
case I_RREGULLT:
cout<<"I rregullt";
break;
case ME_KORRESPONDENCE:
cout<<"Me korrespondence";
break;
default:
cout<<"?";
break;
}
cout<<endl;}
