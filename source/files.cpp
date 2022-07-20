#include <filesystem>

void _errorlog(){
    if (!std::filesystem::exists("../err.log")){
        freopen( "../err.log", "wa", stderr );
    } else{
        freopen( "../err.log", "w", stderr );
    }

}