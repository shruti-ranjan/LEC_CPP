#include <iostream>
namespace BEI{

char subject[30] = "Electronics Engineering";
int room = 908;

void printSubject()
{
std::cout<<subject;
}

void printRoom()
{
    std::cout<<room;
}
}
namespace BCT{

char subject[30] = "Computer Engineering";
int labRoom = 401;
void printSubject()
{
std::cout<<subject;
}

void printLabRoom()
{
std::cout<<labRoom;
}

}

int main()
{
using namespace BEI;
using namespace BCT;
printLabRoom();
printRoom();
BEI::printSubject();
BCT::printSubject();
return 0;
}