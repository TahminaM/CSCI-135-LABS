/*
Author: Tahmina Akther Munni
Course: CS135
Instructor: Tong Yi
Assignment: Lab 11 D
Rectangle
*/

#include <string>
#include <iostream>

using namespace std;
/******************************************************************************/
/////////////////////////////////////CLASS A////////////////////////////////////
/******************************************************************************/
class Profile 
{
 private:
  string username;
  string displayname;
 public:
  // Profile constructor for a user (initializing 
  // private variables username=usrn, displayname=dspn)
  Profile(string usrn, string dspn);

  // Default Profile constructor (username="", displayname="")
  Profile();

  // Return username
  string getUsername();

  // Return name in the format: "displayname (@username)"
  string getFullName();
  
  // Change display name
  void setDisplayName(string dspn);

  void setUserName(string usrn); //class B에서 추가됨.
};

/******************************************************************************/
/////////////////////////////////////CLASS B////////////////////////////////////
/******************************************************************************/

struct Post //Post 구조체. 메시지를 쓴 사람과 메시지의 내용이 담겨있다.
{
  string username;
  string message;
}; //class D에서 추가되었는데 밑에서 써서 어쩔 수 없이 위에서 선언해야함.

class Network
{
  private: //This first version of the class should be able to add new users and store their profiles, 
  //for that, the class has the following private variables:
  static const int MAX_USERS = 20;
  Profile profiles[MAX_USERS]; //an array of registered user profiles,
  int numUsers; //an integer numUsers, which stores the number of registered users.
  
  int findID(string usrn); //we have a private function findID(usrn), 
  //it should return the ID of the user with that username, 
  //or -1 if the user is not found in the profiles array.

  // following[id1][id2] == true when id1 is following id2
  bool following[MAX_USERS][MAX_USERS]; //class C 에서 추가됨. 유저들끼리의 팔로우 관계를 저장한다.

  static const int MAX_POSTS = 100; //이하 3줄은 class_D에서 추가됨.
  int numPosts;                    // number of posts
  Post posts[MAX_POSTS];           // array of all posts

  public:
  Network();
  //For now, setting numUsers = 0 is enough.
  bool addUser(string usrn,string dspn);//유저를 추가하는 함수.
  //조건이 복잡한데 추가 가능하면 true, 아니면 false

  bool follow(string usrn1, string usrn2); //class C 에서 추가됨. 유저들끼리의 팔로우 관계를 추가한다.
  void printDot(); //class C 에서 추가됨. 유저들끼리의 팔로우 관계를 보여준다.

  // Add a new post
  bool writePost(string usrn, string msg); //class D에서 추가됨. 포스트를 남긴다.
  // Print user's "timeline"
  bool printTimeline(string usrn); //class D에서 추가됨. 타임라인 전체를 보여준다.
};

/******************************************************************************/
/////////////////////////////////////CLASS D////////////////////////////////////
/******************************************************************************/

/******************************************************************************/
/////////////////////////////////////CLASS A////////////////////////////////////
/******************************************************************************/
//profile은 두 개의 생성자와 3개의 기능 함수를 가진다.

//생성자 1
// Default Profile constructor (username="", displayname="")
Profile::Profile()
{
	username = "";
	displayname = "";
}

//생성자 2
// private variables username=usrn, displayname=dspn)
Profile::Profile(string usrn, string dspn)
{
	username = usrn;
	displayname = dspn;
}

//기능 함수 1
// Return username
string Profile::getUsername()
{
	return username;
}

//기능 함수 2
// Return name in the format: "displayname (@username)"
string Profile::getFullName()
{
	return displayname + " (@" + username + ")";
}

//기능 함수 3
//// Change display name
void Profile::setDisplayName(string dspn)
{
	displayname = dspn;
}

/******************************************************************************/
/////////////////////////////////////CLASS B////////////////////////////////////
/******************************************************************************/
Network::Network() //생성자
{
	numUsers = 0; //유저의 수를 0으로 초기화.
	for(int row = 0; row<MAX_USERS; row++) for(int col = 0; col<MAX_USERS; col++) following[row][col] = false;
	//팔로우 관계를 초기화
	numPosts = 0; //포스트의 개수를 0으로 초기화. //class D에서 추가됨.
}

int Network::findID(string usrn) //유저 이름이 이미 있는지 찾는 함수.
{
	for(int cnt = 0; cnt<MAX_USERS; cnt++)
	{
		if(profiles[cnt].getUsername() == usrn) return cnt;
	}
	return -1;
}

//원래는 객체 포인터로 만든 다음 동적할당으로 선언하고 싶었지만 그렇게 하지 말래서...
/*/
the new username usrn must be a non-empty alphanumeric string,
there is no other users in the network with the same username,
the array profiles is not full.
*/
void Profile::setUserName(string usrn)
{
	username = usrn;
}

bool Network::addUser(string usrn,string dspn)
{
	if(usrn == "" || dspn == "") return false; //유저명 혹은 디스플레이명이 비어있으면 실패
	for(int cnt = 0; cnt<usrn.length(); cnt++) if(!isalnum(usrn[cnt])) return false;
	//유저명이 alphanumeric하지 않으면 실패
	for(int cnt = 0; cnt<dspn.length(); cnt++) if(!isalnum(dspn[cnt])) return false;
	//디스플레이명이 alphanumeric 하지 않으면 실패
	if(MAX_USERS <= numUsers) return false; //유저가 가득 차있으면 실패를
	if(findID(usrn) != -1) return false; //유저가 신청한 이름이 이미 있으면 실패

	profiles[numUsers].setUserName(usrn);
	profiles[numUsers].setDisplayName(dspn);
	numUsers++; //유저의 수를 증가
	return true; //성공
}

/******************************************************************************/
/////////////////////////////////////CLASS C////////////////////////////////////
/******************************************************************************/
bool Network::follow(string usrn1, string usrn2)
{
	 // Make 'usrn1' follow 'usrn2' (if both usernames are in the network).
 	// return true if success (if both usernames exist), otherwise return false
	if(usrn1 == "" || usrn2 == "") return false; //유저명이 하나라도 비어있으면 실패
	if((findID(usrn1) == -1) || (findID(usrn2) == -1)) return false; //두 유저가 모두 존재하지 않으면 실패

	following[findID(usrn1)][findID(usrn2)] = true; //팔로우
	return true;
}

void Network::printDot() //조건에 맞는 포맷으로 팔로우 관계를 출력
{
	printf("digraph {\n");
	for(int cnt = 0; cnt<MAX_USERS; cnt++)
	{
		if(profiles[cnt].getUsername() !="") //printf("\t\"@%s\"\n",profiles[cnt].getUsername());
		{
			cout << "\t\"@" << profiles[cnt].getUsername() << "\"" <<endl;
		}
	}
	printf("\n");

	for(int row = 0; row<MAX_USERS; row++)
	{
		for(int col = 0; col<MAX_USERS; col++)
		{
			if(following[row][col])
			{
				//printf("\t\"@%s\" -> \"@%s\"\n",profiles[row],profiles[col]);
				cout << "\t\"@" << profiles[row].getUsername() << "\" -> \"@" << profiles[col].getUsername() << "\"" <<endl;
			}
		}
	}
	printf("}\n");
}

/******************************************************************************/
/////////////////////////////////////CLASS D////////////////////////////////////
/******************************************************************************/
bool Network::writePost(string usrn, string msg) //위에 adduser이랑 매우 비슷함
{
	//어... 이것도 좀 긴데 뭐냐면 usrn이 있고, msg도 공백이 아니고, post배열이 가득 차지 않으면
	//메시지를 저장하고 true를 반환하고 아니면 false;
	if(usrn =="" || msg == "") return false; //유저명이나 내용이 비었으면 실패
	if(findID(usrn) == -1) return false; // 유저가 없으면 실패
	if(MAX_POSTS<=numPosts) return false; //메시지 박스가 가득 찼으면 실패

	posts[numPosts].username = usrn; //메시지와 유저명을 저장
	posts[numPosts].message = msg;
	numPosts++; //메시지 개수를 증가
	return true; //성공
}

bool Network::printTimeline(string usrn)// 타임라인 전체를 보여주는 함수. 왜 또 이건 bool이지?
{
	for(int cnt = numPosts; 0<=cnt; cnt--) //역순으로 보여주라고 합니다(0번지에도 글이 있으므로 -1까지)
	{
		if((following[findID(usrn)][findID(posts[cnt].username)]) ||
		(posts[cnt].username == usrn)) // 자신이 팔로우 하는 사람이 쓴 글이거나 자신이 쓴 글이면
		{
			cout << profiles[findID(posts[cnt].username)].getFullName() << ": " << posts[cnt].message <<endl;
		}
	}
	return true;
}

int main() {
  Network nw;
  nw.addUser("mario", "Mario");
  nw.addUser("luigi", "Luigi");
  nw.addUser("yoshi", "Yoshi");
   
  nw.follow("mario", "luigi");
  nw.follow("luigi", "mario");
  nw.follow("luigi", "yoshi");
  nw.follow("yoshi", "mario");

  nw.writePost("mario", "It's a-me, Mario!");
  nw.writePost("luigi", "Hey hey!");
  nw.writePost("mario", "Hi Luigi!");
  nw.writePost("yoshi", "Test 1");
  nw.writePost("yoshi", "Test 2");
  nw.writePost("luigi", "I just hope this crazy plan of yours works!");
  nw.writePost("mario", "My crazy plans always work!");
  nw.writePost("yoshi", "Test 3");
  nw.writePost("yoshi", "Test 4");
  nw.writePost("yoshi", "Test 5");

  cout << endl;
  cout << "======= Mario's timeline =======" << endl;
  nw.printTimeline("mario");
  cout << endl;

  cout << "======= Yoshi's timeline =======" << endl;
  nw.printTimeline("yoshi");
  cout << endl;
}
