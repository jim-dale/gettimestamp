
#include <stdio.h>
#include <tchar.h>
#include <time.h>

#define BUF_SIZE 200

int wmain()
{
    time_t now;
    time(&now);

    struct tm gmtime;
    errno_t err = gmtime_s(&gmtime, &now);
    if (0 == err)
    {
        _TCHAR buffer[BUF_SIZE];

        _tcsftime(buffer, BUF_SIZE, _T("%Y-%m-%dT%H-%M-%SZ"), &gmtime);

        _putts(buffer);
    }
    return 0;
}
