sfr port2 = 0xA0;
void delay (unsigned int );
void main() {
	while(1) {
		port2  = 0x05; //rotate in clock wise
		delay(500000);
		port2 = 0x00; //to stop
		delay(500000);
		port2  = 0x0A;//rotate in anti-clock wise
		delay(500000);
		port2 = 0x00; //to stop
		delay(500000);
		port2  = 0x09; //rotate in first motor clock wise - second anti clock wise
		delay(500000);
		port2 = 0x00; //to stop
		delay(500000);
		port2  = 0x06; //rotate in first motor anti-clock wise second clock wise
		delay(500000);
		port2 = 0x00; //to stop
		delay(500000);
	}
}
void delay (unsigned int x) {
	unsigned int i;
	for (i=0;i<x;i++);
}
	
	
	