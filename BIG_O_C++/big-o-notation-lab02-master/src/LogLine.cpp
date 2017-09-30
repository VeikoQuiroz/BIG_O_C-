#include "LogLine.h"

LogLine::LogLine()
{
    counter = 0;
}

LogLine::~LogLine()
{
    //dtor
}

void LogLin(int coun) {
    counter = coun;
}

char getIP() {
    return "ip-" + counter;
}
