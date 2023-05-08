#include <iostream>
#include <mutex>
#include <thread>
using namespace std;

class Logger
{
    static int ctr;
    static Logger *loggerinstance;
    static mutex mtx;

    Logger()
    {
        ctr++;
        cout << "new Instance Created.No of instances are" << ctr << endl;
    }
    Logger(const Logger &);
    Logger operator=(const Logger &);

public:
    static Logger *getlogger()
    {
        if (loggerinstance == nullptr)
        {
            mtx.lock();
            if (loggerinstance == nullptr)
            {
                loggerinstance = new Logger();
            }
            mtx.unlock();
        }
        return loggerinstance;
    }
    void Log(string msg)
    {
        cout << msg << endl;
    }
};

Logger *Logger ::loggerinstance = nullptr;
int Logger::ctr = 0;
mutex Logger::mtx;

void user1Logs()
{
    Logger *Logger1 = Logger::getlogger();
    Logger1->Log("this msg is from user 2");
}
void user2Logs()
{
    Logger *Logger2 = Logger::getlogger();
    Logger2->Log("this msg is from user 2");
}
int main()
{
    thread t1(user1Logs);
    thread t2(user2Logs);

    t1.join();
    t2.join();
}