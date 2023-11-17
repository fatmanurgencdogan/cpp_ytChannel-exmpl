#include <iostream>
#include <list>

using namespace std;

class YouTubeChannel{
public:
    string Name;
    string OwnerName;
    int SubscriberCount;
    list<string> PublishedVideoTitles;
};
int main(){

    YouTubeChannel ytChannel;
    ytChannel.Name = "Code Beauty";
    ytChannel.OwnerName = "Saldina";
    ytChannel.SubscriberCount = 1800;
    ytChannel.PublishedVideoTitles = {"vidi vidi" , "edi budi"};

    cout << "Name: " << ytChannel.Name << endl;
    cout << "OwnerName: " << ytChannel.OwnerName << endl;
    cout << "SubscriberCount: " << ytChannel.SubscriberCount << endl;
    cout << "Videos: " << endl;
        for(string videoTitle : ytChannel.PublishedVideoTitles){
            cout << videoTitle << endl;
        }

    system(pause>0);
}