
void wait(unsigned int time){
    for(unsigned int i = 0; i<time; i++)
        for(unsigned char c = 0; c<165; c++)
}


void main(){
    TRISB = 1;  // OR trisb = 0XFF;
    TRICC = 0;

    unsigned char x = PORTB;

    wait(500);

    PORTC = x;

    while(1);

}


PORTx.Rxy


#define bit PORTCbits.RC5
void main(){
    TRISB = 0;
    TRIS
}