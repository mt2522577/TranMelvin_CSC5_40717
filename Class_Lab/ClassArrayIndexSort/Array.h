/* 
 * File:   Array.h
 * Author: Melvin Tran
 * Created on February 10, 2015, 8:31 AM
 */

#ifndef ARRAY_H
#define	ARRAY_H

class Array{
private:
    int *data;
    int *index;
    int size;
public:
    void filAray(int);
    void prntAry(int);
    void destroy();
    void mrkSort();
};
void Array::mrkSort(){
    //Sort with the index
    for(int pos=0;pos<size-1;pos++){
        for(int lst=pos+1;lst<size;lst++){
            if(data[index[pos]]>
               data[index[lst]]){
                //Swap the indexes
                int temp=index[pos];
                index[pos]=index[lst];
                index[lst]=temp;
            }
        }
    }
}
void Array::destroy(){
    delete [] data;
    delete [] index;
}
void Array::prntAry(int perLine){
    cout<<endl;
    for(int i=0;i<size;i++){
        cout<<data[index[i]]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
}
void Array::filAray(int n){
    //Make sure valid size for the array
     if(n<=0)size=0;
    else size=n;
    //Dynamically create the array ADT
    
   
    //Now declare and allocate memory for the
    //data
    data=new int[size];
    index=new int[size];
    //Fill data with 2 digit numbers
    for(int i=0;i<size;i++){
        data[i]=rand()%90+10;
        index[i]=i;
        
    }
}

#endif	/* ARRAY_H */

