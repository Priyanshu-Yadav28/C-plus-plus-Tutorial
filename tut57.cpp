// VIRTUAL FUNCTIONS EXAMPLES + CREATION RULE IN C++.
#include <iostream>
#include <cstring>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
CWH(string s, float r){
    title = s;
    rating = r;
}
   virtual void display() {}

};
class CWHVideo : public CWH{
    float videoLength;
    public:
    CWHVideo(string s, float r, float vl) : CWH(s, r){
        videoLength = vl; 
    }
void display(){
        cout<<"This is an amazing video with title "<<title<<endl;
        cout<<"Ratings: " <<rating<<" Out of 5 stars "<<endl;
        cout<<"Length of this video is :" <<videoLength<< " minutes"<< endl;
    }
    
};

class CWHText :public CWH{
    int words;
    public:
    CWHText(string s, float r, int wc) : CWH(s, r){
    words = wc;
    }
    void display(){
        cout<<"This is an amazing Text video with title "<<title<<endl;
        cout<<"Ratings of this text tutorial is : " <<rating<<" Out of 5 stars "<<endl;
        cout<<"Number of words in this text tutorial is : " <<words<< endl;
    }
};
int main()
{
    string title;
    float rating, vlen;
    int words;

    // FOR CODE WITH HARRY VIDEO
    title = "django tutorial ";
    vlen = 4.23;
    rating = 4.89;
    CWHVideo djvideo(title, rating , vlen);
    // djvideo.display();

 // FOR CODE WITH HARRY TEXT 
    title = "django Text ";
    rating = 4.89;
    words = 300;
    CWHText djText(title, rating , words);
    // djText.display();

    CWH* tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djText;

    tuts[0]->display();       

    tuts[1]->display(); 

    return 0;
}

// RULES FOR VIRTUAL FUNCTION 
// 1. They cannot be static 
// 2. They are accessed by object Pointers 
// 3. virtual function can be friend of another function 
// 4. A virtual function in base class might not be used 
// 5. If a virtual fuction is defined in a base class, there is no necessity of redifining it
//  in derived class 
