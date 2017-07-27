#include <cstdio>
#include <stack>
#include <queue>

using namespace std;

int main () {

  stack<char>s;
  queue<char>q;
  deque<char>d;

  printf("==============Stack===========\n");

  s.push('a');
  s.push('b');
  s.push('c');
  printStack();

//  s.pop();
  printf("Top %c \n",s.top() );

  // while(!s.empty()){
  //   q.push(s.top());
  //   s.pop();
  // }
  printf("atas \n",s.top() );
  q.push('z');
 printf("========QURUE==========\n");
 printf("c\n",q.front() );




}
