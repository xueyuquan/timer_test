#include <iostream>
#include <time.h>
#include <unistd.h>

using namespace std;
int main() {
    time_t start_t = 0;
    time_t end_t = 0;
    while (1)
    {
        start_t = time(NULL);
        sleep(3);
        end_t = time(NULL);
        cout << "start_t: " << start_t << endl;
        cout << "end_t: " << end_t << endl;
        cout << "end_t - start_t: " << (end_t - start_t) << endl;
    }
    return 0;
}
