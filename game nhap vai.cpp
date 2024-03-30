// game nhap vai tuong tac bang chu
//tac gia Pham Thanh Dat
//co the mang cac tu ngu nhay cam :-)
/*
hp=mau
p=thuoc
mana= nang luong
s=phep thuat

*/
#include<stdio.h>
#include<math.h>
#include<cstdlib>
#include<ctime>
int hp =100;
int dame =10;
int php =0;
int mind =100;
int pm=0;
int def=50;
int stdd=100-def;
int sxtoy=0;
int gioi_tinh;
int main(){
		printf("Tro choi nhap vai c++\n");
printf("Cung bat dau tro choi nao\n");
printf("chon nhan vat cua ban\n");
printf("nam=1 nu=2 gay=3\n");
scanf("%d",&gioi_tinh);
if (gioi_tinh == 3)
{printf ("get out my game now!!! nam gay");}
else
if (gioi_tinh == 2)//phan choi cua nu
{
	printf("lua chon cua ban la [nu]\nlua chon hay day\n");
	printf("hay cung vao man choi nao\n");
	printf("ban dang la mot con nguoi binh thuong dang tren duong tim kiem suc manh than thanh va chang hoang tu co#k to trong truyen thuyet\nban chuan bi gi truoc chuyen di\n1.mot so thuoc hoi phuc\n2.mot so goi tra\n3.dung cu tinh than :-o\n4.dao ngan\n5.khong can gi\nlua chon ");
	int kd;
	scanf ("%d",&kd);
	/*
	if(kd==1){php=1;printf("ban nhan duoc 1 lo thuoc hoi mau");}
	else
	if(kd==2){pm=1;printf("ban nhan duoc 1 goi tra");}
	else
	if(kd==3){sxtoy=1;printf("ban nhan duoc 1 do choi tinh than");}
	else
	if(kd==4){dame=15;printf("ban nhan duoc 15 dame");}
	else
	if(kd==5){php=1;printf("ban di thang den vi ban chi suy nghi ve hoang tu co#k to,a nham ti,vi con duong tim den suc manh than thanh\n");}
	*/
	switch(kd) {
		case 1:
			php=1;printf("ban nhan duoc 1 lo thuoc hoi mau");
			break;
		case 2:
			pm=1;printf("ban nhan duoc 1 goi tra");
			break;
		case 3:
			sxtoy=1;printf("ban nhan duoc 1 do choi tinh than");
			break;
		case 4:
			dame=15;printf("ban nhan duoc 15 dame");
			break;
		case 5:
			php=1;printf("ban di thang den vi ban chi suy nghi ve hoang tu co#k to,a nham ti,vi con duong tim den suc manh than thanh\n");
			break;	
	}
	
	
	
	
	printf("\ncuoc hanh trinh bat dau,nhan phim 1 de tiep tuc(khong nhap 2)\n");
	int batdau;
	scanf("%d",&batdau);
	if (batdau == 2)
	{printf("canh bao pha luat nhe\n");
	printf("ban bi Tien Dong bat ve ham va dit 7749 tu the\n");
	printf("sau mot khoang thoi gian Tien Dong da tha ban di vi ban che anh ay cube\n");
	printf("ban tiep tuc hanh trinh\n");
    printf("Tren duong di cua ban co nhung con duong huong ve noi ban muon den\n1.khu rung goblin\n2.ham nguc no le\n3.bien xuc tu\nban chon di huong nao(khong the chon lai)  ");}
	else
	if (batdau == 1)
	printf("Tren duong di cua ban co nhung con duong huong ve noi ban muon den\n1.khu rung goblin\n2.ham nguc no le\n3.bien xuc tu\nban chon di huong nao(khong the chon lai)  ");
	int map;
	scanf("%d",&map);
	if(map==1){
		
		printf("ban tien vao khu rung goblin");//luot 1
		printf("man 1\nkhi ban vua buoc vao khu rung ban cam thay co cai gi do dang theo doi ban\n");
		printf("khi ban di den phia bui cay ben duong de nghi mat thi mot con goblin baby voi cay gay thit 10cm dang huong den ban\n");
		printf("ban bat dau rut vu khi ra va sang sang cho cuoc chien\n");
int hanhdong1a;
int goblinbaby = 10;
int goblinbabydame = 10;
int goblinbabymind = 5;
while(goblinbaby>0)
{
	if(hp>0&&mind>0){
printf("chon hanh dong cua ban\n1.Tan cong\n2.do don\n3.dung thuoc hoi mau\n4.dung tra\n");
scanf("%d",&hanhdong1a);
if(hanhdong1a==1){goblinbaby=goblinbaby-dame;hp=hp-goblinbabydame;mind=mind-goblinbabymind;}
else
if(hanhdong1a==2){hp=hp-(goblinbabydame*stdd/100);goblinbaby=goblinbaby-(dame/2);mind=mind-(goblinbabymind/2);}
else
if(hanhdong1a==3){
	if(php>0){hp=hp+50;php=php-1;printf("ban da dung 1 thuoc hoi mau,ban con %d\n",php); if (hp>100) hp=100; else hp=hp;}
	else printf("ban khong con thuoc hoi mau\n");
}
else
if(hanhdong1a==4){
if(pm>0){mind=mind+50;pm=pm-1;printf("ban da pha 1 ly tra,ban con %d\n",pm); if(mind>100) mind=100; else mind=mind;}
else printf("ban khong con tra\n");}

printf("hp cua ban la %d\n",hp);
printf("do tinh tao cua ban la %d\n",mind);
printf("hp cua goblinbaby la %d\n",goblinbaby);
}
else
printf("GAME OVER");
}
printf("thanh cong danh bai goblinbaby,no khong mang do gi gia tri\n");
//ruong 1
printf("sau khi chien dau voi cay gay thit do ban tiep tuc chuyen di cua minh\n");
printf("ban thay no cung cute,a khong,muc tieu cua ban la gap duoc hoang tu di#k to ma\n");
printf("ban nhan ra phia trong bui cay co mot cai ruong khong khoa,ban quyet dinh \n");
printf("ban quyet dinh\n1.mo ruong\n2.khong mo ruong va tiep tuc chan duong\n");
int quyetdinh1a;
scanf("%d",&quyetdinh1a); 
if(quyetdinh1a==1){
	std::srand(std::time(0));
int ruong1a = std::rand()%5+1;
if (ruong1a==1){printf("trong ruong khong co do gi gia tri");}
else
if (ruong1a==2){printf("ban nhan ra do la mot cai ruong quai vat\n no su dung cai luoi dieu luyen de choi dua voi co the ban\n");printf("ban cam thay nhop nhap ky la va nong rang\n");hp=hp-10;mind=mind-20;
printf("hp cua ban la %d\n",hp);
printf("do tinh tao cua ban la %d\n",mind);
if(hp<0){printf("GAME OVER");}}
else
if (ruong1a==3){printf("ban nhan duoc 1 thuoc hoi mau\n");php=php+1;printf("hien tai ban co %d  thuoc hoi mau\n",php);}
else
if (ruong1a==4){printf("ban nhan duoc 1 goi tra\n");pm=pm+1;printf("hien tai ban co %d  goi tra\n",pm);}
else
if (ruong1a==5){printf("ban nhan duoc vien thuoc kim cuong\n");dame=dame+5;printf("hien tai ban co %d dame\n",dame);}}
else
if(quyetdinh1a==2)
{printf("ban cam thay tiec vi ruong nhung co the no la mot cai bay\nban cam thay minh that thong minh\n");}
printf("ban tiep tuc tien sau hon vao khu rung\n");
printf("ban nhan thay mot dam khoi boc len tu phia ben trai khu rung, co the la mot ai do cung dang tren duong cua ho,ban quyet dinh\n 1.Tiep tuc di thang\n2.Xem thu phia ben kia khu rung\n");
//luot 2
int quyetdinh2a;
scanf("%d",&quyetdinh2a);
if(quyetdinh2a==1)
{printf("ban tiep tuc tien ve muc tieu quan trong hon\n");}
else
if(quyetdinh2a==2)
{printf("ban di tim dam khoi do va bat gap mot co gai dang nau tra tai lua trai\n");
printf("ban den va chao co ay\n");printf("Co gai:chao JUBY,rat vui duoc gap co\n");
printf("Ban:sao ban lai biet ten toi\n");
printf("Co gai:ai cung biet ve muc tieu cua co khi dien khu rung nay,co dang di tim nguon suc manh than thanh duoc don dai bay lau nay phai khong\n");
printf("Ban:cung khong han\n");
printf("Co gai:toi cung the,ngoai suc manh ra thi cong chua cua vuong quoc toi can tim vi hoang tu co#k to ve thoa man co ay\n");
printf("1.cong chua?\n2.hoang tu co#k to?(gia ngu)\n3.Vi hoang tu do la cua toi!!!");
int quyetdinh2aa;
scanf ("%d",&quyetdinh2aa);
if(quyetdinh2aa==1)
{printf("Co gai:?,ban khong biet ve cong chua Niggar cua dat nuoc chung toi u.Co ay la cong chua duy nhat ma ban co the de nghi nhan duoc chang trai trong mo uoc cua ban\n");printf("ban va co ay cung ngoi noi chuyen mot chut,co ay moi ban uong tra\n ban hoi lai 25 do tinh tao"),mind=mind+25;if(mind>100) mind=100;else mind=mind;}
else
if(quyetdinh2aa==2)
{printf("Co gai:That su ban khong biet ve vi hoang tu ay u,anh ay la nguoi co con c# dinh nhat then the gioi day");printf("ban va co ay cung ngoi noi chuyen mot chut,co ay moi ban uong tra\n ban hoi lai 25 do tinh tao"),mind=mind+25;if(mind>100) mind=100;else mind=mind;}
else
if(quyetdinh2aa==3)
{printf("Co gai:toi khong nghi nhu the dau,co phai vuot qua chien binh hoang gia nay da\nCa hai lao vao cuoc chien\n");
int cogai = 50 ;;
int hanhdong2aa  ;
int cogaidame = 20 ;
while(cogai>0)
{
	if(hp>0&&mind>0){
printf("chon hanh dong cua ban\n1.Tan cong\n2.do don\n3.dung thuoc hoi mau\n4.dung tra\n");
scanf("%d",&hanhdong2aa);
if(hanhdong2aa==1){cogai=cogai-dame;hp=hp-cogaidame;}
else
if(hanhdong2aa==2){hp=hp-(cogaidame*stdd/100);cogai=cogai -(dame/2);}
else
if(hanhdong2aa==3){
	if(php>0){hp=hp+50;php=php-1;printf("ban da dung 1 thuoc hoi mau,ban con %d\n",php); if (hp>100) hp=100; else hp=hp;}
	else printf("ban khong con thuoc hoi mau\n");}
else
if(hanhdong2aa==4){
if(pm>0){mind=mind+50;pm=pm-1;printf("ban da pha 1 ly tra,ban con %d\n",pm); if(mind>100) mind=100; else mind=mind;}
else printf("ban khong con tra\n");}

printf("hp cua ban la %d\n",hp);
printf("nang luong cua ban la %d\n",mind);
printf("hp cua Co gai la %d\n",cogai);
}
else
printf("GAME OVER");
}
printf("ban da danh bai co gai,ban nhan duoc 1 do choi tinh than,1 chai hoi mau");sxtoy=sxtoy+1;php=php+1;
}
}
//luot 3
printf("\nban tiep tuc tien sau hon vao trong khu vuc toi tam\nban nhan ra moi hoi am toa ra tu phia truoc\nmot phan cua cai hog dog nong ran o tren vai ban\nban quay lai va thay mot con sau khong lo dan co va them muon ban\nban lao vao cuoc chien\n");
int saucdai = 40;
int hanhdong3a ;
int saucdaidame = 7;
int saucdaimind = 10;
while(saucdai>0)
{
	if (hp>0&&mind>0){
printf("chon hanh dong cua ban\n1.Tan cong\n2.do don\n3.dung thuoc hoi mau\n4.dung tra\n");
scanf("%d",&hanhdong3a);
if(hanhdong3a==1){ saucdai=saucdai-dame;hp=hp - saucdaidame;mind=mind-saucdaimind;}
else
if(hanhdong3a==2){hp=hp-( saucdaidame*stdd/100);saucdai= saucdai -(dame/2);mind=mind - (saucdaimind/2);}
else
if(hanhdong3a==3){
	if(php>0){hp=hp+50;php=php-1;printf("ban da dung 1 thuoc hoi mau,ban con %d\n",php); if (hp>100) hp=100; else hp=hp;}
	else printf("ban khong con thuoc hoi mau\n");
}
else
if(hanhdong3a==4){
if(pm>0){mind=mind+50;pm=pm-1;printf("ban da pha 1 ly tra,ban con %d\n",pm); if(mind>100) mind=100; else mind=mind;}
else printf("ban khong con tra\n");}

printf("hp cua ban la %d\n",hp);
printf("nang luong cua ban la %d\n",mind);
printf("hp cua sinh vat la %d\n",saucdai);
}
else
printf("GAME OVER");
}
printf("ban da tieu diet con sau nong bong do\nban nhan duoc 1 manh giap tay\n ");def=def+10;
//luot 4
printf("ban tiep tuc tien vao sau hon nua\nban thay mot hon da nhin giong 2 hon d#i,ban nhat len\nban thay mot hoc da thieu di 2 hon\n");
printf("ban quyet dinh\n1.nhet hai hon da\n2.khong lam gi ca\n");
int quyetdinh4a;
scanf("%d",&quyetdinh4a);
if (quyetdinh4a==1){printf(" tu hoc da moc len mot cay gay da,o dinh cua no co mot it chat dich trang,ban quyet dinh mut no\nban mat 10 nang luong");mind=mind-10;}
else
if (quyetdinh4a==2){printf("hai hon da bat dau phong to len\nban quyet dinh\n1.tiep tuc giu lai\n2.vut ngay\n");int quyetdinh4aa; scanf("%d",&quyetdinh4aa); if(quyetdinh4aa==1) {printf("hai hon da phat no,ban tum lum chat nhay mau trang\n");mind=mind-30;}else if (quyetdinh4aa==2) printf("ban nhanh chong nem no ra phia xa va no phat no ngay sau do,ban may man ne duoc dich trang tu vu no\n");}
//luot 5
printf("sau nhung truyen ki la tren,ban da di duoc nua chang duong\nban da tim thay mot den tho cua than chien tranh va hoa binh\nban quyet dinh tho phung ai\n1.than chien tranh(+15 dame,2 thuoc hoi mau,2 goi tra)\n2.than hoa binh(15 phong thu,2 thuoc hoi mau,2 goi tra)\n3.ca 2 vi than(?)\n4.hoa si vo danh nao do(?)\n");
int quyetdinh5a;
scanf("%d",&quyetdinh5a);
if (quyetdinh5a==1){printf("ban duoc ban phat suc manh ki la,di vao trong co bap cua ban,+15 dame\nban nhan thay o giua khu vuc tho phung xuat hien 2 chai thuoc hoi mau,2 goi tra,ban nhat len bo vao tui do");dame=dame+15;php=php+2;pm=pm+2;}
else
if (quyetdinh5a==2){printf("ban duoc ban phat suc manh ki la,di vao trong da cua ban,+15 phong thu\nban nhan thay o giua khu vuc tho phung xuat hien 2 chai thuoc hoi mau,2 goi tra,ban nhat len bo vao tui do");def=def+15;php=php+2;pm=pm+2;}
else
if (quyetdinh5a==3){printf("ban duoc ca 2 ban phat suc manh,nhung ho co ve khong hai long ve quyet dinh cua ban\n,ban thay cac luong suc manh mo nhat di vao co the ban,+5 dame,+5 phong thu\nban nhan thay o giua khu vuc tho phung xuat hien 4 chai thuoc hoi mau,ban nhat len bo vao tui do");def=def+5;php=php+4;dame=dame+5;pm=pm+4;}
else
if (quyetdinh5a==4){printf("ban duoc ban phat suc manh cua ngon lua do thai tham vao tung mac mau trong co the cua ban,+30 dame!\n");dame=dame+30;}
//luot 6
printf("sau khi qua trinh tho phung ket thuc,mot con golbin canh gac khu den da phat hien ra ban\nhan co cay hang khung nhu cai chan thu ba\nca hai lao vao cuoc chien");
int goblincanhgac = 100;
int hanhdong6a ;
int goblincanhgacdame = 20;
int goblincanhgacmind = 15;
while(goblincanhgac>0)
{
	if (hp>0&&mind>0){
printf("chon hanh dong cua ban\n1.Tan cong\n2.do don\n3.dung thuoc hoi mau\n4.dung tra\n");
scanf("%d",&hanhdong6a);
if(hanhdong6a==1){goblincanhgac=goblincanhgac-dame;hp=hp - goblincanhgacdame;mind=mind-goblincanhgacmind;}
else
if(hanhdong6a==2){hp=hp-( goblincanhgacdame*stdd/100);goblincanhgac= goblincanhgac -(dame/2);mind=mind-(goblincanhgacmind/2);}
else
if(hanhdong6a==3){
	if(php>0){hp=hp+50;php=php-1;printf("ban da dung 1 thuoc hoi mau,ban con %d\n",php); if (hp>100) hp=100; else hp=hp;}
	else printf("ban khong con thuoc hoi mau\n");
}
else
if(hanhdong6a==4){
if(pm>0){mind=mind+50;pm=pm-1;printf("ban da pha 1 ly tra,ban con %d\n",pm); if(mind>100) mind=100; else mind=mind;}
else printf("ban khong con tra\n");}

printf("hp cua ban la %d\n",hp);
printf("nang luong cua ban la %d\n",mind);
printf("hp cua sinh vat la %d\n",goblincanhgac);
}
else
printf("GAME OVER");
}
printf("ban da danh bai golbin canh gac,nhan duoc 1 chai thuoc hoi mau");php=php+1;
//luot 7

}
	 //phan choi khu rung goblin
	else
	if(map==2){
		printf("ban tien vao ham nguc no le");
	}//phan choi ham nguc no le
	else
	if(map==3){
		printf("ban len thuyen di ra bien xuc tu");
	}//phan choi bien xuc tu
	
}//phan choi cua nu
	}
