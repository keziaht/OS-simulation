#define JOBTABLE_H
#ifdef  JOBTABLE_H

#include <iostream>
#include <list>
#include <iterator>

using namespace std;


list<long> jobspecs;
list<list<long> > jobtable;
list<long>::iterator jiter;
list<list<long> > ::iterator liter;

long numjobs=0;

void jobadd(long i[]){

    if(jobtable.size() <50){
        for(long j=1; j<6; j++){
            jobspecs.push_back(i[j]);
        }
        jobtable.push_back(jobspecs);
    }

}
void print(){
    for(liter=jobtable.begin(); liter != jobtable.end(); liter++){
        for(jiter=jobspecs.begin(); jiter !=jobspecs.end(); jiter++){
            cout<<" " << *jiter;
        }
    }


}

/*
void jobremove(int i){

}

int jobPri(){
    return;
}

int jobSize(){
    return;
}

int jobCPUt(){
    return;
}

int jobCURt(){
    return;
}
*/

#endif
