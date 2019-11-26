//g++ jdk_classes.cpp -o jdk_classes -lboost_system -lboost_filesystem -lboost_program_options -std=c++14
//./jdk_classes mappa_nev


#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <vector>

#include "../boost_1_71_0/boost/filesystem.hpp"


using namespace std;



void read_file ( boost::filesystem::path path,int &szamlalo )
{

        if ( is_regular_file ( path ) ) {

                string ext ( ".java" );
                if ( !ext.compare ( boost::filesystem::extension ( path ) ) ) {

                        string actjavaspath = path.string();
                    size_t end = actjavaspath.find_last_of ( "/" );
                    string act = actjavaspath.substr ( 0, end );

                        
                        szamlalo++;

                }

        } else if ( is_directory ( path ) )
                for ( boost::filesystem::directory_entry & entry : boost::filesystem::directory_iterator ( path ) )
                        read_file ( entry.path(), szamlalo );

}

int main( int argc, char *argv[])
{
    
    char* filename=argv[1];
    string str = "mkdir "; 
    string str2 = "cd ";
    string str3 = "unzip /usr/lib/jvm/openjdk*/src.zip -d ";
    
    str = str + filename; 
    str2 = str2 + filename;
    
   str3 = str3 + filename+"/";
   
    
   const char* command=str.c_str();
   
   const char* second_command=str2.c_str();

   const char* third_command=str3.c_str();
   
   system(command);
   system(second_command);
   system(third_command);
    	
	string path=argv[1];
	boost::filesystem::path a(argv[1]);
    int szamlalo=0;
    read_file(a, szamlalo);
    cout<< "Az src.zip-ben található java osztályok száma: "<< szamlalo <<endl;
    return 0;

}
