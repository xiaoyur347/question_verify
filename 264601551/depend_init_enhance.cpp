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
    void init() {
        Lower::GetInstance().addListener();
    }
    void uninit() {
        Lower::GetInstance().delListener();
    }
private:
    Higher() {
        printf("Higher::Higher()\n");
        Lower::GetInstance();
    }
    ~Higher() {
        printf("Higher::~Higher()\n");
        uninit();
    }
};

int main()
{
    Higher::GetInstance().init();
    return 0;
}
