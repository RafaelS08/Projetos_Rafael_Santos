#import <stdio.h>

int main(){
    int seg;
    int hr = 0;
    int min = 0;
    int seg_ = 0;
    int s = seg - hr*3600;
    
    printf("Inisra um valor em segundos: ");
    scanf("%d", &seg);

    if (seg < 3600){
        if (seg < 60){
            min = 0;
            seg_ = seg;
        }
        else{
            for (int n = 60; n <= seg; n = n + 60){
                //n = n+60;
                min++;
            }
            seg_ = seg - min*60;
        }
    }
    else{
        for (int n = 3600; n <= seg; n = n + 3600){
            hr++;
        }

        if (seg < 60){
            min = 0;
            seg_ = s;
        }
    else{
        for (int n = 60; n <= s; n = n + 60){
            min++;
        }
            seg_ = s - min*60;
        }
    }
    printf("hr: %d, min: %d, seg: %d", hr, min, seg_);
}
