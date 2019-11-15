#include <string>
#include <vector>

class Screen {
    public:
        //method 1
        typedef std::string::size_type pos;
        //method 2
        //using pos = std::string::size_type;

        //member functions
        //needed because Screen has another constructor
        Screen() = default;
        //cursor initialized to 0 by its in-class initializer
        Screen(pos ht, pos wd, char c):height(ht), width(wd), contents(ht*wd, c){}
        
        char get() const { return contents[cursor];} //implicitly inline
        inline char get(pos ht, pos wd) const;  //explicitly inline
        Screen &move(pos r, pos c); //can be made inline later
        void some_member() const {};
    private:
        pos cursor = 0;
        pos height =0, width =0;
        std::string contents;

        //may change even in a const object
        mutable size_t access_ctr;
};

//basically inline can be add in declaration and definition
inline Screen &Screen::move(pos r, pos c){
    pos row = r * width; //compute the row location
    cursor = row + c;   //move cursor to the column within that row
    return *this;   //return this object as an lvalue
}

char Screen::get(pos r, pos c) const{
    pos row = r * width;
    return contents[row+c];
}

//mutable example , can change const variable
void Screen::some_member() const
{
    ++access_ctr;
}

//another class which is a collection of screens on a given display
class Window_mgr {
    private:
        //Screeens this Window_mgr is tracking
        //by default, a window mgr has one standard sized blank screen
        std::vector<Screen> screens{Screen(24, 80, ' ') };
}
//note: in-class initializer must use either the = form of initialization or the direct form of initialization(using{ })