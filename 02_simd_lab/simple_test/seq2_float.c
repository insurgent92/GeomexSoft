#define MAX 5000000

float va [4*MAX];
float vb [4*MAX];

void main() {
  int i, ctr;
  for (ctr=0; ctr<1000; ctr++) {  
    for(i=0; i<4*MAX; i++) {
      va[i] = va[i] + vb[i];
    }
  }
}

