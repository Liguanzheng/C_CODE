# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>
int main()
{
	/*float n, p=1, r = 0.07;
	for(n=0;n<10;n++)
	{
		p = p * (1 + r);
	}
	printf("%f", p);*/
	/*double r = 0.03, p = 1000;
	p = p * (1 + r * 5);
	printf("%f\n", p);
	r = 0.021;
	double m = 1000,x;
	x = m * ( 2 * r);
	r = 0.0275;
	p = (m + x) * (1 + 3 * r);
	printf("%f\n", p);
	x = m * (3 * r);
	double r1 = 0.015, r2 = 0.021, r3 = 0.0275, r5 = 0.03, r0 = 0.0035;
	p = (m + x) * (1 + 2 * r2);
	printf("%f\n", p);
	p = 1000, x = 0;
	int n = 0;
	for(n=0;n<5;n++)
	{
		p = p * (1 + r1);
	}
	printf("%f\n", p);
	p = 1000;
	for(n=0;n<20;n++)
	{
		p = p * (1 + r0 / 4);
	}
	printf("%f\n", p);*/
	/*char c1, c2;
	c1 = 197;
	c2 = 198;
	printf("c1=%c,c2=%c\n", c1, c2);
	printf("c1=%d,c2=%d\n", c1, c2);
	printf("c1=%c,c2=%c", c1, c2);
	printf("c1=%d,c2=%d", c1, c2);
	return 0;*/
	/*char a, b, c, d, e, f, g, h, i, j;
	a = getchar();
	b = getchar();
	c = getchar();
	d = getchar();
	e = getchar();
	f = a + 4;
	g = b + 4;
	h = c + 4;
	i = d + 4;
	j = e + 4;
	printf("%c%c%c%c%c\n%c%c%c%c%c", a,b,c,d,e,f, g, h, i, j);
	return 0;*/
	/*float r, h , c, sc, sb, vb, vz;
	const float pi = 3.14;
	printf("请输入圆半径，圆柱高");
	scanf("%f,%f", &r, &h);
	c = 2 * pi * r;
	sc = pi * r * r;
	sb = 4 * pi * r * r;
	vb = 4.0 / 3 * pi * r * r * r;
	vz = sc * h;
	printf("圆周长：%0.2f圆面积：%0.2f球表面积：%0.2f球体积：%0.2f圆柱体积：%0.2f",c,sc,sb,vb,vz);
	return 0;*/
	//char c1, c2;
	///*c1 = getchar();
	//c2 = getchar();*/
	//scanf("%d%d", &c1, &c2);
	//printf("c1=%d\nc2=%d", c1, c2);
	//return 0;
	/*float d = 300000, p = 6000, r = 0.01,m;
	float n;
	n = (p / (p - d * r));
	m = log(n) / log(1 + r);
	m = m + 0.05;
	printf("%0.1f", m);
	return 0;*/
	/*float p, r, n;
	r = 0.07;
	scanf("%f", &n);
	p = pow(1 + r, n);
	printf("%f", p);
	return 0;*/
	/*int i = 2;
	int max;
	scanf("%d", &max);
	int n;
	for(i=2;i<=10;i++)
	{
		scanf("%d", &n);
		if (n > max)
			max = n;
	}
	printf("最大值是%d", max);*/
	double a, b, c, d, e, f, x1, x2;
	scanf("%lf%lf%lf", &a, &b, &c);
	printf("%f   %f   %f", a, b, c);
	d = b * b - 4 * a * c;
	if (d >= 0)
	{
		if (d > 0)
		{
			e = (-b) / 2 * a;
			f = sqrt(d) / 2 * a;
			x1 = e + f;
			x2 = e - f;
		}
		else
			x1 = x2 = (-b) / 2 * a;
		printf("x1=%f,x2=%f", x1, x2);
	}
	else
		printf("方程无根");
	return 0;
}