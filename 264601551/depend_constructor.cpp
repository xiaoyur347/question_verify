#include <stdio.h>

class Lower {
public:
    static Lower& GetInstance() {
        static Lower _instance;
        return _instance;
    }
    void addListener() {

    }
    void delListener() {

    }
private:
    Lower() {
        printf("Lower::Lower()\n");
    }
    ~Lower() {
        printf("Lower::~Lower()\n");
    }
};

class Higher {
public:
    static Higher& GetInstance() {
        static Higher _instance;
        return _instance;
    }
private:
    Higher() {
        printf("Higher::Higher()\n");
        Lower::GetInstance().addListener();
    }
    ~Higher() {
        printf("Higher::~Higher()\n");
        Lower::GetInstance().delListener();
    }
};

int main()
{
    Higher::GetInstance();
    return 0;
}
