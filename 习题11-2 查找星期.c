#include <string.h>
int getindex( char *s ){
	    if(strcmp("Sunday",s)==0){
            return 0;
        }
	    if(strcmp("Monday",s)==0){
            return 1;
        }
	    if(strcmp("Tuesday",s)==0){
            return 2;
        }
	    if(strcmp("Wednesday",s)==0){
            return 3;
        }
	    if(strcmp("Thursday",s)==0){
            return 4;
        }
	    if(strcmp("Friday",s)==0){
            return 5;
        }
	    if(strcmp("Saturday",s)==0){
            return 6;
        }
        return -1;
}