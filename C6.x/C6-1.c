//
//  C6-1.c
//  C-X_NEW
//
//  Created by BBN on 2016/11/19.
//  Copyright © 2016年 BBN. All rights reserved.
//

#include <stdio.h>

int main(int argc, char const *argv[])
{
	const double paper_weight_per_m2 = 0.018;
	const double ink_per_m2 = 0.004;
	const double package_money = 0.003;
	const double hq_per_paper = 0.003;
	const double man_money = 0.01;
	
	double paper_money_per_ton = 7600;
	double paper_money = 0;
	double ink_money_per_kilogram = 25;
	double ink_money = 0;
	int paper_per_bag = 480;
//	double hq_money_per_package = 0.03;
	double bag_money = 2.5;
	double bag_money_per_paper = 0;
	int paper_layer = 2;
	double a = 0.33;
	double transport_money = 0;
	double tax_rate = 1.09;
	double money_total = 0;
	
	
	
	//	Paper Money
	printf("Paper per bag?(480):");
	scanf("%d", &paper_per_bag);
	printf("Paper Money?(7600):");
	scanf("%lf", &paper_money_per_ton);
	printf("Paper layer?(2):");
	scanf("%d", &paper_layer);
	printf("Paper length?(0.33):");
	scanf("%lf", &a);
	paper_money = (a * a) * paper_weight_per_m2 * paper_layer * (paper_money_per_ton / 1000);
//	printf("paper_money:%.5f\n",paper_money);
	printf("Ink money (/kg)?(25):");
	scanf("%lf", &ink_money_per_kilogram);
	ink_money = (a * a) * ink_per_m2 * ink_money_per_kilogram;
//	printf("ink money = %.5f", ink_money);
//	printf("Hq per package?(0.03):");
//	scanf("%lf", &hq_money_per_package);
	printf("Bag Money?(2.5):");
	scanf("%lf", &bag_money);
	bag_money_per_paper = bag_money / paper_per_bag;
	printf("Transport: ");
	scanf("%lf", &transport_money);
	printf("Tax rate: ");
	scanf("%lf", &tax_rate);
	money_total = (package_money + hq_per_paper + paper_money + ink_money + transport_money + man_money + bag_money_per_paper) * tax_rate;
	printf(" Total Money is %.4f Yuan.\n",money_total);
	
	return 0;
}
