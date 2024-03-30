#include <iostream>
using namespace std;

struct node{
	int a;
	node *next;
};


int main(){
	node *head;
	
	node *first;
	node *second;
	node *third;
	node *fourth;
	node *fifth;
	node *sixth;
	node *seventh;
	node *eighth;
	node *ninth;
	node *tenth;
	node *eleventh;
	node *twelveth;
	node *thirteenth;
	node *fourteenth;
	node *fifteenth;
	node *sixteenth;
	node *seventeenth;
	node *eighteenth;
	node *nineteenth;
	node *twentieth;
	node *twentyfirst;
	node *twentysecond;
	node *twentythird;
	node *twentyfourth;
	node *twentyfifth;
	node *twentysixth;
	node *twentyseventh;
	node *twentyeighth;
	node *twentyninth;
	node *thirtieth;
	
	
	first = new node;
	second=new node;
	third=new node;
	fourth= new node;
	fifth= new node;
	sixth= new node;
	seventh= new node;
	eighth= new node;
	ninth= new node;
	tenth= new node;
	eleventh= new node;
	twelveth= new node;
	thirteenth= new node;
	fourteenth= new node;
	fifteenth= new node;
	sixteenth= new node;
	seventeenth= new node;
	eighteenth= new node;
	nineteenth= new node;
	twentieth= new node;
	twentyfirst= new node;
	twentysecond= new node;
	twentythird= new node;
	twentyfourth= new node;
	twentyfifth= new node;
	twentysixth= new node;
	twentyseventh= new node;
	twentyeighth= new node;
	twentyninth= new node;
	thirtieth= new node;
	
	first->a=1;
	second->a=2;
	third->a=3;
	fourth->a=4;
	fifth->a=5;
	sixth->a=6;
	seventh->a=7;
	eighth->a=8;
	ninth->a=9;
	tenth->a=10;
	eleventh->a=11;
	twelveth->a=12;
	thirteenth->a=13;
	fourteenth->a=14;
	fifteenth->a=15;
	sixteenth->a=16;
	seventeenth->a=17;
	eighteenth->a=18;
	nineteenth->a=19;
	twentieth->a=20;
	twentyfirst->a=21;
	twentysecond->a=22;
	twentythird->a=23;
	twentyfourth->a=24;
	twentyfifth->a=25;
	twentysixth->a=26;
	twentyseventh->a=27;
	twentyeighth->a=28;
	twentyninth->a=29;
	thirtieth->a=30;
	
	first->next=second;
	second->next=third;
	third->next=fourth;
	fourth->next=fifth;
	fifth->next=sixth;
	sixth->next=seventh;
	seventh->next=eighth;
	eighth->next=ninth;
	ninth->next=tenth;
	tenth->next=eleventh;
	eleventh->next=twelveth;
	twelveth->next=thirteenth;
	thirteenth->next=fourteenth;
	fourteenth->next=fifteenth;
	fifteenth->next=sixteenth;
	sixteenth->next=seventeenth;
	seventeenth->next=eighteenth;
	eighteenth->next=nineteenth;
	nineteenth->next=twentieth;
	twentieth->next=twentyfirst;
	twentyfirst->next=twentysecond;
	twentysecond->next=twentythird;
	twentythird->next=twentyfourth;
	twentyfourth->next=twentyfifth;
	twentyfifth->next=twentysixth;
	twentysixth->next=twentyseventh;
	twentyseventh->next=twentyeighth;
	twentyeighth->next=twentyninth;
	twentyninth->next=thirtieth;
	thirtieth->next=NULL;
	
	head = first;
  while (head != NULL) {
    cout << head->a<<endl;
    head = head->next;
  }
}
