int set = (1 << k) - 1;
int limit = (1 << n);
while (set < limit) {
    doStuff(set);

    // gospers trick fra hackmem175:
    int c = set & -set;
    int r = set + c;
    set = ((r^set) >>> 2) / c | r;
}