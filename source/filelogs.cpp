#include <filesystem>
#include <string>

using namespace std;

string errorlog = "logs/err.log";
//string log = "logs/log.log";
char *err;

void _errorlog(std::string msg){
    //strcpy(err, errorlog);
    err = errorlog.data();
    FILE *f;
    if (!std::filesystem::exists(errorlog)){
        char *ms = msg.data();
        f = freopen(err, "w", stderr );
        fprintf(f, "%s",ms);
    } else{
        freopen(err, "a", stderr );
    }

}