#include <iostream>

void checksignbehavior(){
    signed char sc = -160;
    unsigned char uc = sc;
    std::cout << uc;// uc == 116 (because 256-160==116)
    // print 't'
    // char count[256];
    // ++count[sc];
    // ++count[uc];// assume 8-bit chars
    // likely disaster: out-of-range access
    // OK
}

void digits()
{
    for(int i = 0; i<10; i++)
    {
        std::cout<<static_cast<char>('0'+i)<<"\t";
    }
    std::cout<<"\n";
    for(int i = 0; i<10; i++)
    {
        std::cout<<('0'+i)<<"\t";
    }
    std::cout<<"\n";
    for(int i = 0; i<10; i++)
    {
        char num = '0'+i;
        std::cout<<num<<"\t";
    }
    std::cout<<"\n";
}

void charstuff(){
    char c = 255;
    int i = c;

    std::cout<<"there are three char types signed, unsigend, and just char\n";
    std::cout<<"it is implementation defined( depend on machine ) wether a char type regarded as unsigned / signed\n";
    std::cout<<"for example, this machine assume that char is ";
    if(i==255){
        std::cout<<"unsigned\n";
    }else if(i==-1){
        std::cout<<"signed\n";
    }else{
        std::cout<<"undefined\n";
    }
}

int main(){
    checksignbehavior();
    // digits();
    // charstuff();
    return 0;
}