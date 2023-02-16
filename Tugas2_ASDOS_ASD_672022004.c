#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    int j;
    system("cls");
    printf(" ================================\n");
    printf("        Tugas Kalkulator         \n");
    printf(" ================================\n");
    printf(" 1. PingPoroLanSudo              \n");
    printf(" 2. SinCosTan                    \n");
    printf(" 3. Hitung Keliling Luas Volume  \n");
    printf(" 4. Hitung Akar Kuadrat          \n");
    printf(" 5. KELUAR                       \n");
    printf(" ================================\n");
    printf("Masukan Pilihan :");
    scanf("%d",&j);
    switch(j){
        case 1:
            ppls();
            break;
        case 2:
            sct();
            break;
        case 3:
            klv();
            break;
        case 4:
            akar();
            break;
        case 5:
            keluar();
            break;
        default:
            system("cls");
            printf(" INPUT SALAH!\n");
            printf(" Press ENTER to continue...");
            getch();
            main();
    }
}

void keluar()
{
    system("cls");
    printf(" ================================\n");
    printf("            TERIMA KASIH         \n");
    printf(" ================================\n\n");
    printf(" Press ENTER to continue...");
    getch();
}

void ppls()
{
    int k;
    system("cls");
    printf(" ==================\n");
    printf("   PingPoroLanSudo \n");
    printf(" ==================\n");
    printf(" 1. Perkalian      \n");
    printf(" 2. Pembagian      \n");
    printf(" 3. Penjumlahan    \n");
    printf(" 4. Pengurangan    \n");
    printf(" 5. KEMBALI        \n");
    printf(" ==================\n");
    printf(" Masukan Pilihan : ");
    scanf("%d",&k);
    switch(k){
        case 1:
            kali();
            break;
        case 2:
            bagi();
            break;
        case 3:
            jumlah();
            break;
        case 4:
            kurang();
            break;
        case 5:
            main();
            break;
        default:
            system("cls");
            printf(" INPUT SALAH!\n");
            printf(" Press ENTER to continue...");
            getch();
            ppls();
    }
}

void kali()
{
    system("cls");
    int kali1,kali2,khasil;
	printf("Masukan Angka Pertama :");
	scanf("%d",&kali1);

	printf("Masukan Angka Kedua :");
	scanf("%d",&kali2);

	khasil = kali1 * kali2;
	printf("\nHasil Perkalian : %d\n\n",khasil);
	printf(" Press ENTER to continue...");
	getch();
	kalitanya();

}

void kalitanya()
{
    system("cls");
    int tkali;
    printf(" 1. Yes\n");
    printf(" 2. No\n");
    printf(" Ulangi?");
    scanf("%d",&tkali);
    switch(tkali){
        case 1:
            kali();
            break;
        case 2:
            ppls();
            break;
        default:
            system("cls");
            printf(" INPUT SALAH!\n");
            printf(" Press ENTER to continue...");
            getch();
            kalitanya();
    }
}

void bagi()
{
    system("cls");
    float bagi1,bagi2,bhasil;
	printf("Masukan Angka Pertama :");
	scanf("%f",&bagi1);

	printf("Masukan Angka Kedua :");
	scanf("%f",&bagi2);

	bhasil = bagi1 / bagi2;
	printf("\nHasil Pembagian : %.2f\n\n",bhasil);
    printf(" Press ENTER to continue...");
	getch();
	bagitanya();
}

void bagitanya()
{
    system("cls");
    int tbagi;
    printf(" 1. Yes\n");
    printf(" 2. No\n");
    printf(" Ulangin?");
    scanf("%d",&tbagi);
    switch(tbagi){
        case 1:
            bagi();
            break;
        case 2:
            ppls();
            break;
        default:
            system("cls");
            printf(" INPUT SALAH!\n");
            printf(" Press ENTER to continue...");
            getch();
            bagitanya();
    }
}

void jumlah()
{
    system("cls");
    int j1,j2,jhasil;
	printf("Masukan Angka Pertama :");
	scanf("%d",&j1);

	printf("Masukan Angka Kedua :");
	scanf("%d",&j2);

	jhasil = j1 + j2;
	printf("\nHasil Penjumlahan : %d\n\n",jhasil);
    printf(" Press ENTER to continue...");
	getch();
	jtanya();
}

void jtanya()
{
    system("cls");
    int tjumlah;
    printf(" 1. Yes\n");
    printf(" 2. No\n");
    printf(" ==================\n");
    printf(" Ulangi?");
    scanf("%d",&tjumlah);
    switch(tjumlah){
        case 1:
            jumlah();
            break;
        case 2:
            ppls();
            break;
        default:
            system("cls");
            printf(" INPUT SALAH!\n");
            printf(" Press ENTER to continue...");
            getch();
            jtanya();
    }
}

void kurang()
{
    system("cls");
    int kr1,kr2,krhasil;
	printf(" Masukan angka pertama :");
	scanf("%d",&kr1);

	printf(" Masukan angka kedua :");
	scanf("%d",&kr2);

	krhasil = kr1 - kr2;
	printf("\nHasil Pengurangan : %d\n\n",krhasil);
    printf(" Press ENTER to continue...");
	getch();
	ktanya();
}

void ktanya()
{
    system("cls");
    int tkurang;
    printf(" 1. Yes\n");
    printf(" 2. No\n");
    printf(" ==================\n");
    printf("Ulangi?");
    scanf("%d",&tkurang);
    switch(tkurang){
        case 1:
            kurang();
            break;
        case 2:
            ppls();
            break;
        default:
            system("cls");
            printf(" INPUT SALAH!\n");
            printf(" Press ENTER to continue...");
            getch();
            ktanya();
    }
}

void sct()
{
    int m2;
    system("cls");
    printf(" ==================\n");
    printf("      SinCosTan    \n");
    printf(" ==================\n");
    printf(" 1. Sinus          \n");
    printf(" 2. Cosinus        \n");
    printf(" 3. Tangen         \n");
    printf(" 4. KEMBALI        \n");
    printf(" ==================\n");
    printf("Masukin Pilihan :");
    scanf("%d",&m2);
    switch(m2){
        case 1:
            sinu();
            break;
        case 2:
            cosin();
            break;
        case 3:
            tang();
            break;
        case 4:
            main();
            break;
        default:
            system("cls");
            printf(" INPUT SALAH!\n");
            printf(" Press ENTER to continue...");
            getch();
            sct();
    }
}

void sinu()
{
    system ("cls");
    double x,sin_x;
    printf(" Input derajat sinus = ");
    scanf("%lf",&x);
    sin_x = sin(x);
    printf(" Hasil sin (%f) : %lf\n\n",x,sin_x);
    printf(" Press ENTER to continue...");
    getch();
    sintanya();
}

void sintanya()
{
    system("cls");
    int tsin;
    printf(" 1. Yes\n");
    printf(" 2. No\n");
    printf(" ==================\n");
    printf("Ulangi?");
    scanf("%d",&tsin);
    switch(tsin){
        case 1:
            sinu();
            break;
        case 2:
            sct();
            break;
        default:
            system("cls");
            printf(" INPUT SALAH!\n");
            printf(" Press ENTER to continue...");
            getch();
            sintanya();
    }
}

void cosin()
{
    system ("cls");
    double x,cos_x;
    printf("Masukan Derajat Cosinus : ");
    scanf("%lf",&x);
    cos_x = cos(x);
    printf("Hasil Cosinus : %lf,x\n\n",x,cos_x);
    printf(" Press ENTER to continue...");
    getch();
    costanya();
}

void costanya()
{
    system("cls");
    int tcos;
    printf(" 1. Yes\n");
    printf(" 2. No\n");
    printf(" ==================\n");
    printf("Ulangi?");
    scanf("%d",&tcos);
    switch(tcos){
        case 1:
            cosin();
            break;
        case 2:
            sct();
            break;
        default:
            system("cls");
            printf(" INPUT SALAH!\n");
            printf(" Press ENTER to continue...");
            getch();
            costanya();
    }
}

void tang()
{
    system("cls");
    double x,tan_x;
    printf("Masukan Derajat Tangen : ");
    scanf("%lf",&x);
    tan_x = tan(x);
    printf("Hasil Tangen : %lf,x\n\n",x,tan_x);
    printf(" Press ENTER to continue...");
    getch();
    tantanya();
}

void tantanya()
{
    system("cls");
    int ttan;
    printf(" 1. Yes\n");
    printf(" 2. No\n");
    printf(" ==================\n");
    printf("Ulangi?");
    scanf("%d",&ttan);
    switch(ttan){
        case 1:
            tang();
            break;
        case 2:
            sct();
            break;
        default:
            system("cls");
            printf(" INPUT SALAH!\n");
            printf(" Press ENTER to continue...");
            getch();
            tantanya();
    }
}

void klv()
{
    int m3;
    system("cls");
    printf(" ==============================\n");
    printf("      Keliling Luas Volume     \n");
    printf(" ==============================\n");
    printf(" 1. Keliling Bangun Datar      \n");
    printf(" 2. Luas Bangun Datar          \n");
    printf(" 3. Volume Bangun Ruang        \n");
    printf(" 4. KEMBALI                    \n");
    printf(" ==============================\n");
    printf("Masukan Pilihan :");
    scanf("%d",&m3);
    switch(m3){
        case 1:
            keli();
            break;
        case 2:
            luas();
            break;
        case 3:
            volu();
            break;
        case 4:
            main();
            break;
        default:
            system("cls");
            printf(" INPUT SALAH!\n");
            printf(" Press ENTER to continue...");
            getch();
            klv();
    }
}

void keli()
{
    int mk;
    system("cls");
    printf(" ==============================\n");
    printf("      Keliling Bangun Datar    \n");
    printf(" ==============================\n");
    printf(" 1. Persegi                    \n");
    printf(" 2. Trapesium                  \n");
    printf(" 3. Layang-layang              \n");
    printf(" 4. Lingkaran                  \n");
    printf(" 5. KEMBALI                    \n");
    printf(" ==============================\n");
    printf("Masukan Pilihan : ");
    scanf("%d",&mk);
    switch(mk){
        case 1:
            kpsg();
            break;
        case 2:
            ktrp();
            break;
        case 3:
            klyg();
            break;
        case 4:
            klng();
            break;
        case 5:
            klv();
            break;
        default:
            system("cls");
            printf(" INPUT SALAH!\n");
            printf(" Press ENTER to continue...");
            getch();
            keli();
    }
}

void kpsg()
{
    system("cls");
    float s, k;
    printf("Masukan Panjang Sisi : ");
    scanf("%f", &s);
    k = 4 * s;
    printf("Keliling persegi : %.2f\n\n",k);
    printf(" Press ENTER to continue...");
    getch();
    kpsgtanya();
}

void kpsgtanya()
{
    system("cls");
    int tkpsg;
    printf(" 1. Yes\n");
    printf(" 2. No\n");
    printf(" ==================\n");
    printf("Ulangi?");
    scanf("%d",&tkpsg);
    switch(tkpsg){
        case 1:
            kpsg();
            break;
        case 2:
            keli();
            break;
        default:
            system("cls");
            printf(" INPUT SALAH!\n");
            printf(" Press ENTER to continue...");
            getch();
            kpsgtanya();
    }
}

void ktrp()
{
    system("cls");
    float s1, s2, s3, s4, k;
    printf("Masukan Panjang Sisi Pertama :");
    scanf("%f", &s1);
    printf("MAsukan Panjang Sisi Kedua :");
    scanf("%f", &s2);
    printf("Masukan Panjang Sisi Ketiga :");
    scanf("%f", &s3);
    printf("Masukan Panjang Sisi Keempat :");
    scanf("%f", &s4);
    k = s1 + s2 + s3 + s4;
    printf("\nKeliling Trapesium : %.2f\n\n", k);
    printf(" Press ENTER to continue...");
    getch();
    ktrptanya();
}

void ktrptanya()
{
    system("cls");
    int tktrp;
    printf(" 1. Yes\n");
    printf(" 2. No\n");
    printf(" ==================\n");
    printf("Ulangi?");
    scanf("%d",&tktrp);
    switch(tktrp){
        case 1:
            ktrp();
            break;
        case 2:
            keli();
            break;
        default:
            system("cls");
            printf(" INPUT SALAH!\n");
            printf(" Press ENTER to continue...");
            getch();
            ktrptanya();
    }
}

void klyg()
{
    system("cls");
    float s_a, s_b, k;
    printf("Masukan Panjang Diagonal Pertama :");
    scanf("%f", &s_a);
    printf("Masukan Panjang Diagonal Kedua :");
    scanf("%f", &s_b);
    k = 2 * (s_a + s_b);
    printf("\nKeliling Layang-layang : %.2f\n\n",k);
    printf(" Press ENTER to continue...");
    getch();
    klygtanya();
}

void klygtanya()
{
    system("cls");
    int tklyg;
    printf(" 1. Yes\n");
    printf(" 2. No\n");
    printf(" ==================\n");
    printf("Ulangi?");
    scanf("%d",&tklyg);
    switch(tklyg){
        case 1:
            klyg();
            break;
        case 2:
            keli();
            break;
        default:
            system("cls");
            printf(" INPUT SALAH!\n");
            printf(" Press ENTER to continue...");
            getch();
            klygtanya();
    }
}

void klng()
{
    system("cls");
    float j, k;
    const float phi = 3.14;
    printf("Masukan Panjang Jari - jari : ");
    scanf("%f", &j);
    k = 2 * phi * j;
    printf(" Keliling Lingkaran : %.2f\n",k);
    printf(" Press ENTER to continue...");
    getch();
    klngtanya();
}

void klngtanya()
{
    system("cls");
    int tklng;
    printf(" 1. Yes\n");
    printf(" 2. No\n");
    printf(" ==================\n");
    printf("Ulangi?");
    scanf("%d",&tklng);
    switch(tklng){
        case 1:
            klng();
            break;
        case 2:
            keli();
            break;
        default:
            system("cls");
            printf(" INPUT SALAH!\n");
            printf(" Press ENTER to continue...");
            getch();
            klngtanya();
    }
}

void luas()
{
    int ml;
    system("cls");
    printf(" ==============================\n");
    printf("        Luas Bangun Datar      \n");
    printf(" ==============================\n");
    printf(" 1. Persegi                    \n");
    printf(" 2. Trapesium                  \n");
    printf(" 3. Layang-layang              \n");
    printf(" 4. Lingkaran                  \n");
    printf(" 5. KEMBALI                    \n");
    printf(" ==============================\n");
    printf("Masukan Pilihan :");
    scanf("%d",&ml);
    switch(ml){
        case 1:
            lpsg();
            break;
        case 2:
            ltrp();
            break;
        case 3:
            llyg();
            break;
        case 4:
            llng();
            break;
        case 5:
            klv();
            break;
        default:
            system("cls");
            printf(" INPUT SALAH!\n");
            printf(" Press ENTER to continue...");
            getch();
            luas();
    }
}

void lpsg()
{
    system("cls");
    float s, l;
    printf("Masukan Panjang Sisi : ");
    scanf("%f", &s);
    l = s * s;
    printf(" Luas Persegi : %.2f\n\n",l);
    printf(" Press ENTER to continue...");
    getch();
    lpsgtanya();
}

void lpsgtanya()
{
    system("cls");
    int tlpsg;
    printf(" 1. Yes\n");
    printf(" 2. No\n");
    printf(" ==================\n");
    printf("Ulangi?");
    scanf("%d",&tlpsg);
    switch(tlpsg){
        case 1:
            lpsg();
            break;
        case 2:
            luas();
            break;
        default:
            system("cls");
            printf(" INPUT SALAH!\n");
            printf(" Press ENTER to continue...");
            getch();
            lpsgtanya();
    }
}

void ltrp()
{
    system("cls");
    float a1, a2, t, l;
    printf("Masukan Panjang Alas Bawah : ");
    scanf("%f", &a1);
    printf("Masukan Panjang Alas Atas : ");
    scanf("%f", &a2);
    printf("Masukan Panjang Tinggi : ");
    scanf("%f", &t);
    l = 0.5 * (a1 + a2) * t;
    printf("\nLuas Trapesium : %.2f\n\n", l);
    printf(" Press ENTER to continue...");
    getch();
    ltrptanya();
}

void ltrptanya()
{
    system("cls");
    int tltrp;
    printf(" 1. Yes\n");
    printf(" 2. No\n");
    printf(" ==================\n");
    printf("Ulangi?");
    scanf("%d",&tltrp);
    switch(tltrp){
        case 1:
            ltrp();
            break;
        case 2:
            luas();
            break;
        default:
            system("cls");
            printf(" INPUT SALAH!\n");
            printf(" Press ENTER to continue...");
            getch();
            ltrptanya();
    }
}

void llyg()
{
    system("cls");
    float d1, d2, l;
    printf("Masukan Panjang Diagonal Pertama : ");
    scanf("%f", &d1);
    printf("Masukan Panjang Diagonal Kedua : ");
    scanf("%f", &d2);
    l = 0.5 * d1 * d2;
    printf("\nLuas Layang-layang : %.2f\n\n",l);
    printf(" Press ENTER to continue...");
    getch();
    llygtanya();
}

void llygtanya()
{
    system("cls");
    int tllyg;
    printf(" 1. Yes\n");
    printf(" 2. No\n");
    printf(" ==================\n");
    printf("Ulangi?");
    scanf("%d",&tllyg);
    switch(tllyg){
        case 1:
            llyg();
            break;
        case 2:
            luas();
            break;
        default:
            system("cls");
            printf(" INPUT SALAH!\n");
            printf(" Press ENTER to continue...");
            getch();
            llygtanya();
    }
}

void llng()
{
    system("cls");
    float j, l;
    const float phi = 3.14;
    printf("Masukan Panjang Jari-jari : ");
    scanf("%f", &j);
    l = phi * j * j;
    printf(" Luas Lingkaran : %.2f\n\n",l);
    printf(" Press ENTER to continue...");
    getch();
    llngtanya();
}

void llngtanya()
{
    system("cls");
    int tllng;
    printf(" 1. Yes\n");
    printf(" 2. No\n");
    printf(" ==================\n");
    printf("Ulangi?");
    scanf("%d",&tllng);
    switch(tllng){
        case 1:
            llng();
            break;
        case 2:
            luas();
            break;
        default:
            system("cls");
            printf(" INPUT SALAH!\n");
            printf(" Press ENTER to continue...");
            getch();
            llngtanya();
    }
}

void volu()
{
    int mv;
    system("cls");
    printf(" ==============================\n");
    printf("       Volume Bangun Ruang     \n");
    printf(" ==============================\n");
    printf(" 1. Kubus                      \n");
    printf(" 2. Prisma                     \n");
    printf(" 3. Limas                      \n");
    printf(" 4. Bola                       \n");
    printf(" 5. KEMBALI                    \n");
    printf(" ==============================\n");
    printf("Masukan Pilihan : ");
    scanf("%d",&mv);
    switch(mv){
        case 1:
            vkub();
            break;
        case 2:
            vpris();
            break;
        case 3:
            vlim();
            break;
        case 4:
            vbol();
            break;
        case 5:
            klv();
            break;
        default:
            system("cls");
            printf(" INPUT SALAH!\n");
            printf(" Press ENTER to continue...");
            getch();
            volu();
    }
}

void vkub()
{
    system("cls");
    float s, v;
    printf("Masukan Panjang Sisi Kubus : ");
    scanf("%f", &s);
    v = s * s * s;
    printf(" Volume Kubus : %.2f\n\n", v);
    printf(" Press ENTER to continue...");
    getch();
    vkubtanya();
}

void vkubtanya()
{
    system("cls");
    int tvkub;
    printf(" 1. Yes\n");
    printf(" 2. No\n");
    printf(" ==================\n");
    printf("Ulangi?");
    scanf("%d",&tvkub);
    switch(tvkub){
        case 1:
            vkub();
            break;
        case 2:
            volu();
            break;
        default:
            system("cls");
            printf(" INPUT SALAH!\n");
            printf(" Press ENTER to continue...");
            getch();
            vkubtanya();
    }
}

void vpris()
{
    system("cls");
    float a, t_a, t_p, v;
    printf("Masukan Panjang Alas Segitiga : ");
    scanf("%f", &a);
    printf("Masukan Tinggi Alas Segitiga : ");
    scanf("%f", &t_a);
    printf("Masukan Tinggi Prisma : ");
    scanf("%f", &t_p);
    v = 0.5 * a * t_a * t_p;
    printf("\n Volume Prisma Segitiga : %.2f\n\n",v);
    printf(" Press ENTER to continue...");
    getch();
    vpristanya();
}

void vpristanya()
{
    system("cls");
    int tvpris;
    printf(" 1. Yes\n");
    printf(" 2. No\n");
    printf(" ==================\n");
    printf("Ulangi?");
    scanf("%d",&tvpris);
    switch(tvpris){
        case 1:
            vpris();
            break;
        case 2:
            volu();
            break;
        default:
            system("cls");
            printf(" INPUT SALAH!\n");
            printf(" Press ENTER to continue...");
            getch();
            vpristanya();
    }
}

void vlim()
{
    system("cls");
    float a, t_a, t_l, v;
    printf("Masukan Panjang Alas Segitiga : ");
    scanf("%f", &a);
    printf("Masukan Tinggi Alas Segitiga : ");
    scanf("%f", &t_a);
    printf("Masukan Tinggi Limas : ");
    scanf("%f", &t_l);
    v = 0.33 * a * t_a * t_l;
    printf("\n Volume Limas Segitiga : %.2f\n\n", v);
    printf(" Press ENTER to continue...");
    getch();
    vlimtanya();
}

void vlimtanya()
{
    system("cls");
    int tvlim;
    printf(" 1. Yes\n");
    printf(" 2. No\n");
    printf(" ==================\n");
    printf("Ulangi?");
    scanf("%d",&tvlim);
    switch(tvlim){
        case 1:
            vlim();
            break;
        case 2:
            volu();
            break;
        default:
            system("cls");
            printf(" INPUT SALAH!\n");
            printf(" Press ENTER to continue...");
            getch();
            vlimtanya();
    }
}

void vbol()
{
    system("cls");
    float j, v;
    const float phi = 3.14;
    printf("Masukan Panjang Jari-jari Bola : ");
    scanf("%f", &j);
    v = 4.0 / 3.0 * phi * j * j * j;
    printf(" Volume Bola : %.2f\n\n",v);
    printf(" Press ENTER to continue...");
    getch();
    vboltanya();
}

void vboltanya()
{
    system("cls");
    int tvbol;
    printf(" 1. Yes\n");
    printf(" 2. No\n");
    printf(" ==================\n");
    printf("Ulangi?");
    scanf("%d",&tvbol);
    switch(tvbol){
        case 1:
            vbol();
            break;
        case 2:
            volu();
            break;
        default:
            system("cls");
            printf(" INPUT SALAH!\n");
            printf(" Press ENTER to continue...");
            getch();
            vboltanya();
    }
}

void akar()
{
    float n,r;
    system("cls");
    printf("Masukan Bilangan Akar :");
    scanf("%f",&n);
    r = sqrt(n);
    printf("Hasil Akar %.2f : %2.f\n\n",n,r);
    printf(" Press ENTER to continue...");
    getch();
    akartanya();
}

void akartanya()
{
    system("cls");
    int aktanya;
    printf(" 1. Yes\n");
    printf(" 2. No\n");
    printf(" Ulangi?");
    scanf("%d",&aktanya);
    switch(aktanya){
        case 1:
            akar();
            break;
        case 2:
            main();
            break;
        default:
            system("cls");
            printf(" INPUT SALAH!\n");
            printf(" Press ENTER to continue...");
            getch();
            akartanya();
    }
}
