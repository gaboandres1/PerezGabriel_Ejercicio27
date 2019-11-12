#include <iostream>

int main(int argc, char **argv)
{
    int input = atoi(argv[1]);
    float h;
    if(input == 0){
        h = 0.1;
    }
    else if(input == 1){
        h = 0.01;
    }
    else{
        h = 1;
    }
    //int w = atoi(argv[1]);
    float w = 0.1;
    float tf = 4/w;
    float yo = 1;
    float dt = h/w;
    float t = 0.0;
    float yn = yo;
    int N = tf/dt;
    //std::cout << "Parámetros: w="<<w<<" tf="<<tf<<" h="<<h<<std::endl;
    std::cout << t<<"\t" << yn << std::endl;
    for(int i=1; i<=N; i++){
        t+=dt;
        yn = yo/(1+h);
        yo = yn;
        std::cout << t <<"\t"<< yn << std::endl;
    }
    
    //std::cout << t<<"\t" << yn << std::endl;    
    //std::cout<<t<<"\t"<<tf<<"\t"<<std::endl;
    //std::cout<<tf/h<<std::endl;
    return 0;
}