int main() {
    while (1) {

        int lt, as, th, c;
        float a, diem;
        char n;
        printf("Nh?p di?m thi lý thuy?t:");
        scanf("%d", &lt);
        printf("Nh?p di?m thi asm:");
        scanf("%d", &as);
        printf("Nh?p di?m thi th?c hành:");
        scanf("%d", &th);
        a = ((as + th) / 25.0) * 100.0;
        diem = ((lt * 10.0) + a) / 2;
        if (a < 40 || diem < 40)printf("du?c %d%=> notpass\n", diem);
        else if (diem >= 40 && diem < 65)printf("du?c %d%=> tb\n", diem);
        else if (diem >= 65 && diem < 75)printf("du?c %d%=> khá\n", diem);
        else if (diem >= 75)printf("du?c %d%=> gi?i\n", diem);
        printf("b?n có mu?n ti?p t?c không (y/n)?:");
        scanf("%s", &c);
        if (c == 'n')break;
    }
}
