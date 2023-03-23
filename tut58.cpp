// ABSTRACT BASE CLASS AND PURE VIRTUAL FUNCTION. 
#include <iostream>
#include <cstring>
using namespace std;

class CWH // ---------> ABSTRACT BASE CLASS .
{
protected:
    string title;
    float rating;

public:
CWH(string s, float r){
    title = s;
    rating = r;
}
   virtual void display() = 0;//  DO NOTHING FUNCITON ---> PURE VIRUTAL FUNCTION 
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
    void display(){ // now if this display is not created the complier will throw an error 
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