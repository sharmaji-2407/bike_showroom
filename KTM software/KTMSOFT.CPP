#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<stdio.h>
#include<string.h>
#include<fstream.h>
#include<process.h>
//......Discount class..............
class DSCT
{
public:
void d(int p)
{
int a;
a=p-(p/10);
delay(500);
cout<<"\n\nTotat amount : $";
cout<<a;
cout<<"\n";
}};

//...........................M A I N ( ) ......................

main()
{
clrscr();
textcolor(6);
textbackground(WHITE);
cprintf("\n                                KTM - READY TO RACE                            \n");

delay(700);
textcolor(6);
textbackground(0);
cout<<"\n";
cprintf(" \n                                     WELCOME                                    ");
cout<<"\n\nLogIN AS : 1> STAFF or  2> CUSTOMER\n\n";
cprintf("Enter your choice ") ;
int KTM;
cin>>KTM;
switch (KTM)
{
case 2:
cout<<"\n\n";
textbackground(BLACK);
cprintf("~Please Enter your name(excludin your last name).");
cout<<"\n\n NOTE :Please see there is no space in between your entry.\n\n";cprintf("NAME - ");
ofstream f2;
f2.open("KTMs.txt",ios::ate||ios::trunc);
char nam[100];
cin>>nam;
f2<<nam;
f2.close();
cout<<"\n\nDEAR  "<<nam;
delay(500);
cout<<"\n\n\n\t\t1> MOTORCYCLES";
cout<<"   \t\t   2> X-BOW";
int a;
delay(500);
cout<<"\n\n\nEnter your choice :";cout<<" #";
cin>>a;
switch(a)
{
case 1:
textcolor(6);
cprintf("%38.4s","\n\n\nM");delay(200);cprintf("O");delay(200);cprintf("T");delay(200);cprintf("O");delay(200);cprintf("R");delay(200);cprintf("C");delay(200);cprintf("Y");delay(200);cprintf("C");delay(200);cprintf("L");delay(200);cprintf("E");delay(200);cprintf("S");
cout<<"\n";
for(int i=1;i<=80;i++)
{
textcolor(BLACK);
textbackground(WHITE);
cprintf("_");
delay(12);
}
int b;
cout<<" 1> 4-STROKE \n 2> 2-STROKE";
cout<<"\n Enter your choice here : #";cin>>b;
switch(b)
{
case 1:
textbackground(BLACK);
textcolor(YELLOW);cprintf("%35.1s","4");delay(100);cout<<"-";delay(100);textcolor(RED);cprintf("STROKE");
cout<<"\n";
for(int i=1;i<=80;i++)
{
cout<<"-";
delay(12);
}
cout<<"\nThere are 3 motorcycles :";
textcolor(10);
cprintf("(G)- 450 SX-F ;");
textcolor(14);
cprintf(" (Y)- 350 SX-F ;");
textcolor(20);
cprintf(" (R)- 250 SX-F");
textcolor(RED);cout<<"\n\n\n";cprintf("HELP :");
cout<<"Enter CODES as your choice, from G - green, Y - yellow,R - red ,it dosen't      rep. the color of individual bike. And your input will be case sensitive.";
char ch;
cout<<"\n\nEnter the code :";
cin>>ch;
switch(ch)
{
case 'G':
delay(300);
textcolor(6);cprintf("\nREADY TO RACE ");
for(int i=1;i<=81;i++)
{
cout<<">";
delay(15);
}
delay(900) ;
textcolor(RED);cprintf(" THE");delay(600);cprintf(" ULTIMATE");delay(600); cprintf(" COMBO");delay(600); cout<<" 450 SX-F";
delay(400);
cout<<"\n\nThank you for choosing 450 SX-F, No surprise here, with the combination of 450 - style muscle and the agility of a 250. Who said you can't have everything";
cout<<"\n\nTECHNICAL DETAILS  450 SX-F\n\n";
textcolor(BLUE);cprintf("FRAME DESIGN"); cout<<" - 25CrMo4 steel central-tube frame\n";
textcolor(BLUE);cprintf("FRONT SUSPENSION"); cout<<" - WP-USD, AER 48, phi 48mm\n";
textcolor(BLUE);cprintf("REAR SUSPENSION"); cout<<" - WP shockabsorber with linkge\n";
textcolor(BLUE);cprintf("SUSPENSION TRAVEL (FRONT)"); cout<<" - 310mm\n";
textcolor(BLUE);cprintf("SUSPENSION TRAVEL (REAR)"); cout<<" - 300mm\n";
textcolor(BLUE);cprintf("FRONT BRAKE"); cout<<" - Disc brake";
cout<<"\n\nMSRP : $9,399";
char p;
cout<<"\nDo you want to proceed? (y/n)";
cin>>p;
if(p=='y'||p=='Y')
{
cout<<"\nThank you for choosing us.";
cout<<"\nThere are special discounts for our customers";
cout<<"\nDiscount on 450 SX-F is 10 %";
DSCT obj1;
obj1.d(9399);
cout<<"\nDo you want to proceed for payment? (y/n):";
char pr;
cin>>pr;
if(pr=='y'||pr=='Y')
{cout<<"\nThank you for trusting us you may pay to the reception.Have a nice day.";
}
if(pr=='n'||p=='N')
{cout<<"\n\nHave a nice day.";
}}
if(p=='n'||p=='N'){
cout<<"\n\nThank you for stopping by.Have a nice day.";}
break;
case 'Y':
delay(300);
textcolor(6);cprintf("\nREADY TO RACE ");
for(int q=1;q<=81;q++)
{
cout<<">";
delay(15);
}
delay(900) ;
textcolor(RED);cprintf(" DROP");delay(600);cprintf(" THE");delay(600); cprintf(" HAMMER");delay(600); cout<<" 350 SX-F";
delay(400);
cout<<"\n\nThank you for choosing 350 SX-F ,If";textcolor(YELLOW);cprintf(" gold");cout<<" is what you're after ,a";textcolor(6);cprintf(" KTM 450 SX-F");cout<<" is what you get.\n\n\n";
cout<<"TECHNICAL DETAILS  350 SX-F\n\n";
textcolor(BLUE);cprintf("FRAME DESIGN"); cout<<" - 25CrMo4 steel central-tube frame\n";
textcolor(BLUE);cprintf("FRONT SUSPENSION"); cout<<" - WP-USD, AER 48, phi 48mm\n";
textcolor(BLUE);cprintf("REAR SUSPENSION"); cout<<" - WP shockabsorber with linkge\n";
textcolor(BLUE);cprintf("SUSPENSION TRAVEL (FRONT)"); cout<<" - 310mm\n";
textcolor(BLUE);cprintf("SUSPENSION TRAVEL (REAR)"); cout<<" - 300mm\n";
textcolor(BLUE);cprintf("FRONT BRAKE"); cout<<" - Disc brake";
cout<<"\n\nMSRP : $9,299";
char p1;
cout<<"\nDo you want to proceed? (y/n)";
cin>>p1;
if(p1=='y'||p1=='Y')
{
cout<<"\nThank you for choosing us.";
cout<<"\nThere are special discounts for our customers";
cout<<"\nDiscount on 350 SX-F is 10 %";
DSCT obj1;
obj1.d(9299);
cout<<"\nDo you want to proceed for payment? (y/n):";
char pr1;
cin>>pr1;
if(pr1=='y'||pr1=='Y')
{cout<<"\nThank you for trusting us you may pay to the reception.Have a nice day.";
}
if(pr1=='n'||pr1=='N')
{cout<<"\n\nHave a nice day.";
}}
if(p1=='n'||p1=='N'){
cout<<"\n\nThank you for stopping by.Have a nice day.";}
break;
case 'R':
delay(300);
textcolor(6);cprintf("\nREADY TO RACE ");
for(int t=1;t<=81;t++)
{
cout<<">";
delay(15);
}
delay(900) ;
textcolor(RED);cprintf(" DROP");delay(600);cprintf(" THE");delay(600); cprintf(" HAMMER");delay(600); cout<<" 250 SX-F";
delay(400);
cout<<"\n\nThank you for choosing 250 SX-F ,If";textcolor(YELLOW);cprintf(" gold");cout<<" is what you're after ,a";textcolor(6);cprintf(" KTM 450 SX-F");cout<<" is what you get.\n\n\n";
cout<<"TECHNICAL DETAILS  250 SX-F\n\n";
textcolor(BLUE);cprintf("FRAME DESIGN"); cout<<" - 25CrMo4 steel central-tube frame\n";
textcolor(BLUE);cprintf("FRONT SUSPENSION"); cout<<" - WP-USD, AER 48, phi 48mm\n";
textcolor(BLUE);cprintf("REAR SUSPENSION"); cout<<" - WP shockabsorber with linkge\n";
textcolor(BLUE);cprintf("SUSPENSION TRAVEL (FRONT)"); cout<<" - 310mm\n";
textcolor(BLUE);cprintf("SUSPENSION TRAVEL (REAR)"); cout<<" - 300mm\n";
textcolor(BLUE);cprintf("FRONT BRAKE"); cout<<" - Disc brake";
cout<<"\n\nMSRP : $9,199";
char p2;
cout<<"\nDo you want to proceed? (y/n)";
cin>>p2;
if(p2=='y'||p2=='Y')
{
cout<<"\nThank you for choosing us.";
cout<<"\nThere are special discounts for our customers";
cout<<"\nDiscount on 250 SX-F is 10 %";
DSCT obj1;
obj1.d(9199);
cout<<"\nDo you want to proceed for payment? (y/n):";
char pr2;
cin>>pr2;
if(pr2=='y'||pr2=='Y')
{cout<<"\nThank you for trusting us you may pay to the reception.Have a nice day.";
}
if(pr2=='n'||pr2=='N')
{cout<<"\n\nHave a nice day.";
}}
if(p2=='n'||p2=='N'){
cout<<"\n\nThank you for stopping by.Have a nice day.";}

break;
default:
cout<<"\n Enter code correctly";
}
break;
case 2:
textcolor(YELLOW); textbackground(BLACK);cprintf("%38.1s","2");delay(100);cout<<"-";delay(100);textcolor(RED);cprintf("STROKE");
cout<<"\n";
for(int j=1;j<=80;j++)
{
cout<<"-";
delay(12);
}
cout<<"\nThere are 3 motorcycles :";
textcolor(10);
cprintf("(G)- 450 SX ;");
textcolor(14);
cprintf(" (Y)- 350 SX ;");
textcolor(20);
cprintf(" (R)- 250 SX");
textcolor(RED);cout<<"\n\n\n";cprintf("HELP :");
cout<<"Enter CODES as your choice, from G - green, Y - yellow,R - red ,it dosen't      rep. the color of individual bike. And your input will be case sensitive.";
char ch1;
cout<<"\n\nEnter the code :";
cin>>ch1;
switch(ch1)
{
case 'G':
delay(300);
textcolor(6);cprintf("\nREADY TO RACE ");
for(int i=1;i<=81;i++)
{
cout<<">";
delay(15);
}
delay(900) ;
textcolor(RED);cprintf(" THE");delay(600);cprintf(" ULTIMATE");delay(600); cprintf(" COMBO");delay(600); cout<<" 450 SX";
delay(400);
cout<<"\n\nThank you for choosing 450 SX, No surprise here, with the combination of 450 - style muscle and the agility of a 250. Who said you can't have everything";
cout<<"TECHNICAL DETAILS  450 SX\n\n";
textcolor(BLUE);cprintf("FRAME DESIGN"); cout<<" - 25CrMo4 steel central-tube frame\n";
textcolor(BLUE);cprintf("FRONT SUSPENSION"); cout<<" - WP-USD, AER 48, phi 48mm\n";
textcolor(BLUE);cprintf("REAR SUSPENSION"); cout<<" - WP shockabsorber with linkge\n";
textcolor(BLUE);cprintf("SUSPENSION TRAVEL (FRONT)"); cout<<" - 310mm\n";
textcolor(BLUE);cprintf("SUSPENSION TRAVEL (REAR)"); cout<<" - 300mm\n";
textcolor(BLUE);cprintf("FRONT BRAKE"); cout<<" - Disc brake";
cout<<"\n\nMSRP : $9,399";
char p;
cout<<"\nDo you want to proceed? (y/n)";
cin>>p;
if(p=='y'||p=='Y')
{
cout<<"\nThank you for choosing us.";
cout<<"\nThere are special discounts for our customers";
cout<<"\nDiscount on 450 SX is 10 %";
DSCT obj1;
obj1.d(9399);
cout<<"\nDo you want to proceed for payment? (y/n):";
char pr;
cin>>pr;
if(pr=='y'||pr=='Y')
{cout<<"\nThank you for trusting us you may pay to the reception.Have a nice day.";
}
if(pr=='n'||pr=='N')
{cout<<"\n\nHave a nice day.";
}
if(p=='n'||p=='N'){
cout<<"\n\nThank you for stopping by.Have a nice day.";}
}
break;
case 'Y':
delay(300);
textcolor(6);cprintf("\nREADY TO RACE ");
for(int q=1;q<=81;q++)
{
cout<<">";
delay(15);
}
delay(900) ;
textcolor(RED);cprintf(" DROP");delay(600);cprintf(" THE");delay(600); cprintf(" HAMMER");delay(600); cout<<" 350 SX";
delay(400);
cout<<"\n\nThank you for choosing 350 SX ,If";textcolor(YELLOW);cprintf(" gold");cout<<" is what you're after ,a";textcolor(6);cprintf(" KTM 450 SX-F");cout<<" is what you get.\n\n\n";
cout<<"TECHNICAL DETAILS  350 SX\n\n";
textcolor(BLUE);cprintf("FRAME DESIGN"); cout<<" - 25CrMo4 steel central-tube frame\n";
textcolor(BLUE);cprintf("FRONT SUSPENSION"); cout<<" - WP-USD, AER 48, phi 48mm\n";
textcolor(BLUE);cprintf("REAR SUSPENSION"); cout<<" - WP shockabsorber with linkge\n";
textcolor(BLUE);cprintf("SUSPENSION TRAVEL (FRONT)"); cout<<" - 310mm\n";
textcolor(BLUE);cprintf("SUSPENSION TRAVEL (REAR)"); cout<<" - 300mm\n";
textcolor(BLUE);cprintf("FRONT BRAKE"); cout<<" - Disc brake";
cout<<"\n\nMSRP : $9,299";
char p1;
cout<<"\nDo you want to proceed? (y/n)";
cin>>p1;
if(p1=='y'||p1=='Y')
{
cout<<"\nThank you for choosing us.";
cout<<"\nThere are special discounts for our customers";
cout<<"\nDiscount on 350 SX is 10 %";
DSCT obj1;
obj1.d(9299);
cout<<"\nDo you want to proceed for payment? (y/n):";
char pr1;
cin>>pr1;
if(pr1=='y'||pr1=='Y')
{cout<<"\nThank you for trusting us you may pay to the reception.Have a nice day.";
}
if(pr1=='n'||pr1=='N')
{cout<<"\n\nHave a nice day.";
}}
if(p1=='n'||p1=='N'){
cout<<"\n\nThank you for stopping by.Have a nice day.";}
break;
case 'R':
delay(300);
textcolor(6);cprintf("\nREADY TO RACE ");
for(int t=1;t<=81;t++)
{
cout<<">";
delay(15);
}
delay(900) ;
textcolor(RED);cprintf(" LEADER");delay(600);cprintf(" OF THE");delay(600); cprintf(" PACK");delay(600); cout<<" 250 SX";
delay(400);
cout<<"\n\nThank you for choosing 250 SX ,If";textcolor(YELLOW);cprintf(" gold");cout<<" is what you're after ,a";textcolor(6);cprintf(" KTM 450 SX-F");cout<<" is what you get.\n\n\n";
cout<<"TECHNICAL DETAILS  250 SX\n\n";
textcolor(BLUE);cprintf("FRAME DESIGN"); cout<<" - 25CrMo4 steel central-tube frame\n";
textcolor(BLUE);cprintf("FRONT SUSPENSION"); cout<<" - WP-USD, AER 48, phi 48mm\n";
textcolor(BLUE);cprintf("REAR SUSPENSION"); cout<<" - WP shockabsorber with linkage\n";
textcolor(BLUE);cprintf("SUSPENSION TRAVEL (FRONT)"); cout<<" - 310mm\n";
textcolor(BLUE);cprintf("SUSPENSION TRAVEL (REAR)"); cout<<" - 300mm\n";
textcolor(BLUE);cprintf("FRONT BRAKE"); cout<<" - Disc brake";
cout<<"\n\nMSRP : $9,199";
char p2;
cout<<"\nDo you want to proceed? (y/n)";
cin>>p2;
if(p2=='y'||p2=='Y')
{
cout<<"\nThank you for choosing us.";
cout<<"\nThere are special discounts for our customers";
cout<<"\nDiscount on 250 SX is 10 %";
DSCT obj1;
obj1.d(9199);
cout<<"\nDo you want to proceed for payment? (y/n):";
char pr2;
cin>>pr2;
if(pr2=='y'||pr2=='Y')
{cout<<"\nThank you for trusting us you may pay to the reception.Have a nice day.";
}
if(pr2=='n'||pr2=='N')
{cout<<"\n\nHave a nice day.";
}}
if(p2=='n'||p2=='N'){
cout<<"\n\nThank you for stopping by.Have a nice day.";}

break;
default:
cout<<"\n Enter code correctly";
}
break;
default:
cout<<"Please choose correcly between 1 and 2.";
}
break;
case 2:             //X-BOW
textcolor(6);
cprintf("%42.10s","\n\n\n      X");delay(200);cprintf("-");delay(200);cprintf("B");delay(200);cprintf("O");delay(200);cprintf("W");
cout<<"\n";
for(int p=1;p<=80;p++)
{
textcolor(BLACK);
textbackground(WHITE);
cprintf("_");
delay(12);
}
delay(300);
textcolor(6);cprintf("\nREADY TO RACE ");
for(int t=1;t<=81;t++)
{
cout<<">";
delay(15);
}
delay(900) ;
textcolor(RED);textbackground(BLACK);cprintf(" WORLDWIDE");delay(600);cprintf(" &");delay(600); cprintf(" QUOT");delay(600); cout<<" X-BOW GT4";
delay(400);
cout<<"\n\nThank you for choosing KTM X-BOW GT4 . The development of GT4 was exclusively carried out togrther with highly specialized companies.";
cout<<"\nTECHNICAL DETAILS  GT4\n\n";
textcolor(BLUE);cprintf("DIMENSIONS"); cout<<" - 4.112 x 1.933 x 1.140\n";
textcolor(BLUE);cprintf("TURNING CIRCLE"); cout<<" - 18m\n";
textcolor(BLUE);cprintf("WHEELBASE"); cout<<" - 2599mm\n";
textcolor(BLUE);cprintf("TRACK FRONT/REAR"); cout<<" - 1.670 / 1.670 mm\n";
textcolor(BLUE);cprintf("POWER TRANSMISSION"); cout<<" - Rear-wheel drive with adjustable slip differential\n";
textcolor(BLUE);cprintf("TRANSMISSION"); cout<<" - Holinger sequential gearbox\n";
textcolor(BLUE);cprintf("MAXIMUM SPEED"); cout<<" - 265 km/h";
cout<<"\n\nMSRP : $9,999";
char p2;
cout<<"\nDo you want to proceed? (y/n)";
cin>>p2;
if(p2=='y'||p2=='Y')
{
cout<<"\nThank you for choosing us.";
cout<<"\nThere are special discounts for our customers";
cout<<"\nDiscount on KTM X-BOW GT4 is 10 %";
DSCT obj1;
obj1.d(9999);
cout<<"\nDo you want to proceed for payment? (y/n):";
char pr2;
cin>>pr2;
if(pr2=='y'||pr2=='Y')
cout<<"\nThank you for trusting us you may pay to the reception.Have a nice day.";
if(pr2=='n'||pr2=='N')
cout<<"\n\nHave a nice day.";
else
cout<<"Sorry won't got you.";
}
if(p2=='n'||p2=='N')
{cout<<"\n\nThank you for stopping by.Have a nice day.";}
else if(p2 !='y' || p2 !='n'||p2!='Y'||p2!='N')
{
cout<<"\nSorry won't got you..";
}
break;
default:
textcolor(12);
sound(500);
delay(200);
cprintf("\n\n ** Please enter choice between (1-3)");
nosound();
}
cout<<"\n\nThank you for visiting us , "<<nam<<".";
break;
case 1:
cout<<"ENTER PASSWORD TO LOGIN.\n\n";
char paswd[10];
cin>>paswd;
if(strcmp (paswd,"ktmstaff")==0)
{
cout<<"You are Logged in. \n\nName of customer : #visited - ";
cout<<"\n\n";   // to add a name
char ch1[100];
fstream f1;
f1.open("KTMs.txt",ios::in);
cin>>ch1;
f1<<ch1;
delay(200);
cprintf("Successfully ADDED");
f1.close();
}
if(strcmp(paswd,"ktmstaff")!=0)
{
textcolor(RED);
cprintf("\n Password invalid");
for(int r=0;r<4;r++)
{
delay(80);
sound(57);
delay(82);
nosound();
}
}
break;
default:
cout<<"\nPlease choose correctly";
}
getch();
}

