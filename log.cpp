#include<iostream>
#include<string>
#include<fstream>

using namespace std;

// define enum for adding log levels
enum Loglevel{INFO,WARN,ERROR};


// define a class for logging
class Logger {
    private:
    ofstream  logFile;
    

    public:
     Logger(const string& report){
        logFile.open(report,ios::app);// ios :: app here for the append mode
     }
     ~Logger(){
        logFile.close(); // closing the logfile
     }
    // logging a message on different level (Warn,error,etc)
    void log(Loglevel level,const string& message){
        const char* levelStr="";
        switch (level){
            case INFO:
                levelStr="INFO";
                break;
             case WARN:
             levelStr="WARN";
             break;

             case ERROR:
                  levelStr="ERROR";
                  break;
       
        }
        logFile<<"["<<levelStr<<"]"<<"["<<message<<"]"<<endl; // writing message to the log file 
  cout<<"["<<levelStr<<"]"<<"["<<message<<"]"<<endl; // display on to the console
    }
    // Convenience methods for different log levels
    void info(const string& message) {
        log(INFO, message);
    }

    void warn(const string& message) {
        log(WARN, message);
    }

    void error(const string& message) {
        log(ERROR, message);
    }

};
/*
int main(){
    Logger logger("log_report");

    logger.info("this is information");
     logger.warn("this is warning message");
      logger.error("this is error message");
}

*/
