int get_time(long long angle) {
    int a, b,c ,x;
    x=angle/6;
    if (x<60)
        return x;
    a=(int)(x/(60*60));
    b=(int)(x/60);
    c=x-((int)(x/60))*60;
    return a*10000+b*100+c;
}