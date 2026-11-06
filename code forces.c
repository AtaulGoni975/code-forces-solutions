//code-forces 4A
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int main (){
//
//
//    int n;
//
//    scanf("%d", &n); // takes input(weight of the watermelon) from the user
//    system("cls");
//
//    if(n>100 || n<1){
//
//        printf("Inavlid."); // since 1<=n<=100
//    }
//
//    if(n%2 == 0){
//        printf("YES."); // it can be divided into two parts
//    }
//
//    else{
//        printf("NO!"); // it cant be divided into two parts
//    }
//return 0;
//}
//
//// code-forces 71A
//
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    int n;
//    char word[100];
//
//    scanf("%d", &n);
//
//    if(n<=0){
//        printf("Invalid.");
//        return 1;
//    }
//
//    int a;
//
//    for(int i=1; i<=n; i++){
//        scanf("%s", word);
//        a=strlen(word);
//
//        if(a<=10){
//            printf("%s\n", word);
//        }
//
//        else{
//            printf("%c%d%c\n", word[0], a-2, word[a-1]);
//        }
//
//    }
//    return 0;
//}
//
//code-forces 231A
//
//#include <stdio.h>
//
//int main()
//{
//    int n;
//
//    scanf("%d", &n);
//
//    int p[3];
//    int sum;
//    int j=0;
//
//    for(int i=1; i<=n;i++){
//        scanf("%d %d %d", &p[0],&p[1],&p[2]);
//        if(p[0]<0 || p[0]>1 || p[1]<0||p[1]>1||p[2]<0||p[2]>1 ){
//            i--;
//            continue;
//        }
//        sum=p[0]+p[1]+p[2];
//        if(sum>1){
//            j++;
//        }
//    }
//
//    printf("%d", j);
//    return 0;
//}
//
// code-forces  282A
//
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    int x=0, n;
//    char op[4];
//
//    scanf("%d",&n);
//    if(n<1 || n>150){
//
//        return 1;
//    }
//
//    for(int i=1; i<=n; i++){
//            scanf("%s", op);
//        if(strcmp(op, "X++")==0){
//            x++;
//        }
//        else if(strcmp(op, "++X")==0){
//            ++x;
//        }
//        else if(strcmp(op, "X--")==0){
//            x--;
//        }
//        else if(strcmp(op, "--X")==0){
//           --x;
//        }
//        else{
//            i--;
//            continue;
//        }
//
//    }
//
//    printf("%d", x);
//
//    return 0;
//}
// code-forces 158A

//#include <stdio.h>
//
//int main()
//{
//    int n,k;
//        scanf("%d %d", &n, &k);
//
//    int r[n];
//    int j=0;
//
//    for(int i=0; i<n;i++){
//        scanf("%d", &r[i]);
//    }
//
//    for(int i=0; i<n;i++){
//
//        if(r[i]>=r[k-1] && r[i]>0){
//           j++;
//        }
//    }
//
//    printf("%d", j);
//
//    return 0;
//}

//code forces 50A

//#include <stdio.h>
//
//int main()
//{
//    int m,n;
//
//    scanf("%d %d", &m,&n);
//
//    int r=(m*n)/2;
//
//    printf("%d", r);
//    return 0;
//}
//
//
//// code forces 112A
//
//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//
//int main()
//{
//    char first[100], second[100];
//    scanf("%s", first);
//    scanf("%s", second);
//    int u=0, l=0;
//
//    for(int i=0;first[i]!='\0';i++){
//        if(isupper((unsigned char)first[i])){
//            first[i]=tolower((unsigned char)first[i]);
//        }
//    }
//
//    for(int i=0;second[i]!='\0';i++){
//        if(isupper((unsigned char)second[i])){
//            second[i]=tolower((unsigned char)second[i]);
//        }
//    }
//
//    if(strcmp(first,second)>0){
//        printf("1");
//    }
//    else if(strcmp(first,second)<0){
//        printf("-1");
//    }
//    else if(strcmp(first,second)==0){
//        printf("0");
//    }
//    return 0;
//}
// code forces 236A
//
//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//
//int main ()
//{
//    char code[100];
//
//    scanf("%s", code);
//
//    for(int i=0;code[i]!='\0';i++){
//        if(isupper((unsigned char)code[i])){
//            code[i]=tolower((unsigned char)code[i]);
//        }
//    }
//
//    int a=strlen(code);
//    int c=0;
//
//
//    for(int i=0; i<a;i++){
//        int found =0;
//        for(int j=0;j<i;j++){
//            if(code[i]==code[j]){
//                found=1;
//                break;
//            }
//
//        }
//        if(found==0){
//            c++;
//        }
//    }
//
//    if(c%2==0){
//        printf("CHAT WITH HER!");
//    }
//    else{
//        printf("IGNORE HIM!");
//    }
//    return 0;
//}
// code forces 281A
//
//#include <stdio.h>
//#include <ctype.h>
//
//int main ()
//{
//    char word[1000];
//
//    scanf("%s", word);
//
//        if(islower((unsigned char)word[0])){
//            word[0]=toupper((unsigned char)word[0]);
//        }
//
//        printf("%s", word);
//
//    return 0;
//}
// code forces 791A
//
//#include <stdio.h>
//
//int main ()
//{
//    int l,b;
//
//    scanf("%d %d", &l,&b);
//
//    for(int i=1; ;i++){
//        l=l*3;
//        b=b*2;
//
//        if(l>b){
//            printf("%d", i);
//            break;
//        }
//    }
//    return 0;
//}
//// code forces 617A
//
//#include <stdio.h>
//
//int main()
//{
//    int a,i=5,d,r,s=0;
//    scanf("%d", &a);
//
//    while(a!=0){
//        d=a/i;
//        r=a%i;
//        a=r;
//        s=s+d;
//
//        if(r<i){
//            i--;
//        }
//    }
//
//    printf("%d", s);
//
//    return 0;
//}
//code forces 266A
//
//#include <stdio.h>
//
//int main()
//{
//    int n,c=0;
//    scanf("%d", &n);
//
//    char s[n];
//    scanf("%s", s);
//
//    for(int i=0;i<n;i++){
//        if(s[i]==s[i+1]){
//            c++;
//        }
//    }
//
//
//    printf("%d",c);
//
//    return 0;
//}
// code forces 546A
//
//#include <stdio.h>
//
//int main()
//{
//    int k,n,w,t=0;
//
//    scanf("%d %d %d", &k,&n,&w);
//
//    for(int i=1; i<=w;i++){
//        t+=i*k;
//    }
//
//    if(t<n){
//        printf("0");
//    }
//    else{
//    printf("%d", t-n);
//    }
//
//    return 0;
//}
// code forces 59A
//
//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//
//int main()
//{


//    char s[100],u,l;
//    scanf("%s",s);
//
//    for(int i=0;s[i]!='\0';i++){
//        if(isupper((unsigned char)s[i])){
//            u++;
//        }
//        else{
//            l++;
//        }
//    }
//
//    if(l>u || l==u){
//        for(int i=0;s[i]!='\0';i++){
//            s[i]=tolower((unsigned char)s[i]);
//        }
//    }
//    else{
//        for(int i=0;s[i]!='\0';i++){
//            s[i]=toupper((unsigned char)s[i]);
//        }
//    }
//
//    printf("%s", s);
//    return 0;
//}
// code forces 977A
//
//#include <stdio.h>
//
//int main ()
//{
//    int n,k,a;
//
//    scanf("%d %d",&n,&k);
//
//    for(int i=1;i<=k;i++){
//        if(n%10==0){
//            n=n/10;
//        }
//        else{
//            n=n-1;
//        }
//    }
//
//    printf("%d",n);
//
//    return 0;
//}
// code forces 110A
//
//#include <stdio.h>
//
//int main()
//{
//    long long int n,r=0;
//    scanf("%lld", &n);
//
//    while(n!=0){
//            if(n%10==4 || n%10==7){
//                r++;
//            }
//        n=n/10;
//    }
//    if(r==4||r==7){
//    printf("YES");
//    }
//    else{
//      printf("NO");
//    }
//    return 0;
//}
// code forces 734A
//

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    int a=0,d=0,n;
//
//    scanf("%d",&n);
//
//    char p[n];
//    scanf("%s", p);
//
//    for(int i=0;i<n;i++){
//        if(p[i]=='D'){
//            d++;
//        }
//        else{
//            a++;
//        }
//    }
//
//    if(a>d){
//        printf("Anton");
//    }
//    else if(d>a){
//        printf("Danik");
//    }
//    else{
//        printf("Friendship");
//    }
//
//    return 0;
//}
// code forces 41A
//
//#include <stdio.h>
//#include <string.h>
//
//int main ()
//{
//    char s[101], t[101];
//    int j=0;
//    scanf("%s", s);
//    scanf("%s", t);
//
//    int l=strlen(s);
//    int k=strlen(t);
//    int L=l;
//
//    if(l==k){
//
//
//    for(int i=0;s[i]!='\0';i++){
//            l=l-1;
//        if(s[l]==t[i]){
//           j++;
//        }
//        else{
//            printf("NO");
//            return 0;
//        }
//    }
//
//    if(j==L){
//        printf("YES");
//    }
//    }
//
//    else{
//        printf("NO");
//    }
//
//    return 0;
//}
// code forces 677A
//
//#include <stdio.h>
//
//int main()
//{
//    int n,h,j=0;
//    scanf("%d %d",&n, &h);
//
//    int a[n];
//
//    for(int i=0; i<n; i++){
//        scanf("%d", &a[i]);
//
//    }
//    for(int i=0;i<n;i++){
//        if(a[i]<=h){
//            j+=1;
//        }
//        else{
//            j+=2;
//        }
//    }
//
//    printf("%d", j);
//
//
//    return 0;
//}
// code forces 271A
//#include <stdio.h>
//
//int main()
//{
//    int y,a,b,c,d;
//    scanf("%d",&y);
//
//    for(int i=y+1; ;i++){
//            a=i%10;
//            b=(i/10)%10;
//            c=(i/100)%10;
//            d=i/1000;
//
//            if(a!=b&&b!=c&&c!=d&&d!=a&&a!=c&&b!=d){
//                printf("%d",i);
//            return 0;
//            }
//
//        }
//
//
//    return 0;
//}
// code forces 116A
//
//#include <stdio.h>
//
//int main ()
//{
//    int n,a,b,c=0,d=0,e,f,g=0,t=0;
//    scanf("%d", &n);
//    int tt[n];
//    for(int i=0; i<n;i++){
//        scanf("%d %d",&a,&b);
////        e=a;
////        f=b;
//        g=t-a;   // after running this code i realised the same thing works
//        t=b+g;  // only by using t=t-a+b; just put the value of g in t.
//        tt[i]=t;
//    }
//
//     int max=tt[0];
//
//     for(int i=0; i<n;i++){
//        if(tt[i]>max) max=tt[i];
//     }
//
//    printf("%d", max);
//    return 0;
//}
// code forces 1030A
//
//#include <stdio.h>
//
//int main ()
//{
//    int n,p;
//    scanf("%d",&n);
//
//    for(int i=1;i<=n;i++){
//        scanf("%d",&p);
//        if(p==1){
//            printf("HARD");
//            return 0;
//        }
//
//    }
//
//    printf("EASY");
//
//    return 0;
//}
// code forces 266B
//
//#include <stdio.h>
//
//int main ()
//{
//    int n,t;
//    scanf("%d %d", &n,&t);
//
//    char s[n+1],l[2];
//
//    for(int i=0;i<n;i++){
//        scanf(" %c", &s[i]);
//
//    }
//    for(;t>0;t--){
//    for(int i=0; i<n-1; i++){
//        if(s[i]=='B'&&s[i+1]=='G'){
//            l[0]=s[i];
//            s[i]=s[i+1];
//            s[i+1]=l[0];
//            i+=1;
//        }
//    }
//    }
//
//    for(int i=0;i<n;i++){
//        printf("%c",s[i]);
//    }
//    return 0;
//}
// code forces 486A
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//    long long int n,f=0;
//    scanf("%lld", &n);
//
//    if(n%2==0){
//        f=n/2;
//    }
//    else{
//        f=n/2-n;
//    }
//
//    printf("%lld", f);
//    return 0;
//}
// code forces 467A
//#include <stdio.h>
//
//int main ()
//{
//    int n,p,q,j=0;
//
//    scanf("%d",&n);
//
//    for(int i=1;i<=n;i++){
//        scanf("%d %d",&p,&q);
//        if(q>p&&q-p>=2){
//            j++;
//        }
//    }
//    printf("%d",j);
//    return 0;
//}
// code forces 344A
//#include <stdio.h>
//
//int main()
//{
//    int n;
//    scanf("%d", &n);
//
//    int j[n],k=1;
//
//    for(int i=0;i<n;i++){
//        scanf("%d", &j[i]);
//    }
//
//    for(int i=0;i<n-1;i++){
//        if(j[i]!=j[i+1]){
//            k++;
//        }
//    }
//
//    printf("%d",k);
//
//    return 0;
//}
//
// code forces 200B
//
//#include <stdio.h>
//
//int main ()
//{
//    int n,a;
//    long double sum=0,avg;
//
//    scanf("%d",&n);
//
//
//    for(int i=1;i<=n;i++){
//        scanf("%d",&a);
//        sum+=a;
//    }
//
//    avg=sum/n;
//
//    printf("%.12Lf",avg);
//
//    return 0;
//}
// code forces 136A
//
//#include <stdio.h>
//
//int main()
//{
//    int n;
//    scanf("%d",&n);
//
//    int num[n],N[n];
//    for(int i=0;i<n;i++){
//        scanf("%d",&num[i]);
//        N[num[i]-1]=i+1;
//
//    }
//
//    for(int i=0;i<n;i++){
//        printf("%d ",N[i]);
//    }
//
//
//    return 0;
//}
//code forces 228A
//#include <stdio.h>
//
//int main()
//{
//    int n[4],c=0;
//    for(int i=0;i<4;i++){
//        scanf("%d",&n[i]);
//    }
//
//    for(int i=0;i<4;i++){
//
//            int duplicate=0;
//                for(int j=0;j<i;j++){
//                    if(n[i]==n[j]){
//                        duplicate=1;
//                        c++;
//                    break;
//                }
//            }
//
//    }
//    printf("%d",c);
//
//    return 0;
//}
//code forces 61A
//#include <stdio.h>
//#include <string.h>
//
//int main ()
//{
//    char n1[101],n2[101],n3[101];
//
//    scanf("%s",n1);
//    scanf("%s",n2);
//
//    int l1=strlen(n1);
//
//
//    for(int i=0;i<l1;i++){
//        if(n1[i]!=n2[i]){
//            n3[i]='1';
//        }
//        else n3[i]='0';
//    }
//    n3[l1]='\0';
//
//    printf("%s",n3);
//    return 0;
//}
// code forces 1328A
//#include <stdio.h>
//
//int main()
//{
//    int n,a,b,c,s=0;
//    scanf("%d",&n);
//
//    for(int i=1; i<=n;i++){
//        scanf("%d %d", &a,&b);
//
////        if(a<b){
////                s=b-a;
////                }
////
////        else if(a%b!=0){
////            s=b*((a/b)+1)-a;
////                }
////        else{
////            s=b*(a/b)-a;
////        }
//
//        printf("%d\n",s);
//    }
//
//    return 0;
//}
//code forces 520A
//
//#include <stdio.h>
//#include <ctype.h>
//
//int main()
//{
//    int n,k=0;
//    scanf("%d",&n);
//
//    char s[n+1];
//
//    scanf("%s",s);
//
//    if(n<26){
//        printf("NO");
//        return 0;
//    }
//
//    for(int i=0;s[i]!='\0';i++){
//        //if(isupper((unsigned char)s[i])){
//            s[i]=tolower((unsigned char)s[i]);
//        //}
//    }
//
//    for(int i=0;i<n;i++){
//       int duplicate=0;
//       for(int j=0;j<i;j++){
//        if(s[i]==s[j]){
//            duplicate=1;
//            k++;
//            break;
//        }
//       }
//    }
//    if(n-k==26){
//        printf("YES");
//    }
//    else{
//        printf("NO");
//    }
//    return 0;
//}
// code forces 469A
//#include <stdio.h>
//
//int main()
//{
//    int n,m,o,k=0,l=1,r=0;
//
//    scanf("%d",&n);
//    //int N=2n;
//    int N[n];
//    for(int i=0;i<n;i++){
//        N[i]=l;
//        l++;
//    }
//
//    int xy[2*n];
//
//    scanf("%d",&m);
//    for(int i=0;i<m;i++){
//        scanf("%d",&xy[i]);
//    }
//
//    scanf("%d",&o);
//    for(int i=m;i<m+o;i++){
//        scanf("%d",&xy[i]);
//    }
//
//    for(int i=0;i<m+o;i++){
//            int seen=0;
//        for(int j=0;j<n;j++){
//            if(xy[i]==N[j]){
//               seen=1;
//                r++;
//                break;
//            }
//        }
//    }
//    for(int i=0;i<m+o;i++){
//        int duplicate=0;
//        for(int j=0;j<i;j++){
//            if(xy[i]==xy[j]){
//                duplicate=1;
//                k++;
//                break;
//            }
//        }
//
//    }
//
//    if(r-k==n){
//        printf("I become the guy.");
//    }
//    else{
//        printf("Oh, my keyboard!");
//    }
//    return 0;
//}
// code forces 263A
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    int a[5][5];
//
//    for(int i=0;i<5;i++){
//        for(int j=0;j<5;j++){
//            scanf("%d",&a[i][j]);
//        }
//    }
//
//     for(int i=0;i<5;i++){
//        for(int j=0;j<5;j++){
//            if(a[i][j]==1){
//                int s=abs(i-2)+abs(j-2);
//                printf("%d",s);
//                return 0;
//
//            }
//        }
//    }
//
//    return 0;
//}
// code forces 339A
//#include <stdio.h>
//#include <string.h>
//
//int main ()
//{
//    int one=0, two=0, three=0;
//
//    char sum[101];
//
//    scanf("%s",sum);
//    int l=strlen(sum);
//    for(int i=0;i<l;i+=2){
//        if(sum[i]=='1'){
//            one++;
//        }
//        else if(sum[i]=='2'){
//            two++;
//        }
//        else{
//            three++;
//        }
//    }
//    int i=0;
//    while(one!=0){
//        sum[i]='1';
//        i+=2;
//        one--;
//    }
//    int j=i;
//    while(two!=0){
//        sum[j]='2';
//        j+=2;
//        two--;
//    }
//    int k=j;
//    while(three!=0){
//        sum[k]='3';
//        k+=2;
//        three--;
//    }
//    printf("%s", sum);
//
//    return 0;
//}
// code forces 705A my fvrt till now
//#include <stdio.h>
//
//int main ()
//{
//    int n;
//    scanf("%d",&n);
//
//    printf("I hate ");
//
//    for(int i=2;i<=n;i++){
//        if(i%2==0){
//            printf("that I love ");
//        }
//        else{
//            printf("that I hate ");
//        }
//    }
//
//    printf("it");
//    return 0;
//}
// code forces 144A
//#include <stdio.h>
//#include <stdlib.h>
//
//int main ()
//{
//    int n;
//    scanf("%d",&n);
//
//    int o[n];
//    for(int i=0;i<n;i++){
//        scanf("%d",&o[i]);
//    }
//
//    int max=o[0];
//    int min=o[0];
//    for(int i=0;i<n;i++){
//        if(o[i]>max) max=o[i];
//        if(o[i]<min) min=o[i];
//    }
//
//    int j=0,k=0;
//    for(int i=0;i<n;i++){
//        if(o[i]==max){
//            j=i;
//            break;
//        }
//    }
//    for(int i=0;i<n;i++){
//        if(o[i]==min){
//
//
//            k=i;
//        }
//    }
//
//    int l=abs(j-0)+abs(n-1-k);
//
//    if(j>k){
//        l=l-1;
//    }
//
//
//    printf("%d",l);
//
//    return 0;
//}
// code forces 996A
//#include <stdio.h>
//
//int main ()
//{
//    long long int n;
//    scanf("%lld",&n);
//
//    int num[5]={1,5,10,20,100};
//
//    int d=0,s=0;
//    for(int i=4;i>=0;i--){
//        if(num[i]<=n){
//          d=num[i];
//          s+=n/d;
//          n=n%d;
//          if(n==0){
//            printf("%d",s);
//            return 0;
//          }
//        }
//    }
//    return 0;
//}
//code forces 443A
//#include <stdio.h>
//#include <string.h>
//
//int main ()
//{
//    char l[1001];
//
////    int i=0;
////    do{
////        scanf("%c",&l[i]);
////
////    }while(l[i++] != '}');
////
////    l[i]='\0';
//        scanf("%1000[^\n]",l);
//
//    int d=strlen(l);
//    int s=0;
//
//    for(int i=1;i<d-1;i+=3){
//        int found =0;
//        for(int j=1;j<i;j+=3){
//            if(l[i]==l[j]){
//                found =1;
//                break;
//            }
//        }
//
//        if(found == 0) s++;
//    }
//
//    printf("%d",s);
//    return 0;
//}
// code forces 148A
//#include <stdio.h>
//
//int main ()
//{
//    int k,l,m,n,d;
//    scanf("%d %d %d %d %d",&k,&l,&m,&n,&d);
//
////    int num[d];
////    int j=1;
////        for(int i=0;i<d;i++){
////            num[i]=j;
////            j++;
////        }
//        int c=0;
//            for(int i=1;i<=d;i++){
//                if(i%k==0 || i%l==0 || i%m==0 || i%n==0){
//                    c++;
//                }
//            }
//
//        printf("%d",c);
//
//    return 0;
//}
// code forces 785A
//#include <stdio.h>
//
//int main ()
//{
//    char shape[100];
//    int n,c=0;
//    scanf("%d",&n);
//
//        for(int i=1;i<=n;i++){
//            scanf("%s",shape);
//            if(shape[0]=='T'') c+=4;
//            else if (shape[0]=='C') c+=6;  //switch use korle better
//            else if (shape[0]=='O') c+=8;
//            else if (shape[0]=='D') c+=12;
//            else if (shape[0]=='I') c+=20;
//            else printf("Invalid Shape"); // dorker nai
//        }
//
//        printf("%d",c);
//
//
//    return 0;
//}




