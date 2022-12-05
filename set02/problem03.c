#include<stdio.h>
struct camel {
	float radius, height, length,weight;
};

typedef struct camel Camel;
Camel input();
float find_weight(Camel c);  

int main(){
    float r,h,l,w;
    printf("Enter the radius\n");
    printf("Enter the height\n");
    printf("Enter the length\n");
    find_weight(r,h,l);
    output(r,h,l,w);
}

Point input(){
  Point a;
  scanf("%f%f%f", r,h,&l);
  return(a);
}

float find_weight(float radius, float height, float length){
    float weight = 3.14 * radius * radius * radius * sqrt(height * length);
    return(weight);
}

void output(float radius, float height, float length, float weight){
      printf("The weight of the camel with %2.1f,%2.1f,%2.1f is %2.1f\n",radius,height,length,weight);
}