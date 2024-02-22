/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrimmei <lgrimmei@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 23:31:04 by lgrimmei          #+#    #+#             */
/*   Updated: 2024/02/22 23:35:14 by lgrimmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(void)
{
	int r = 0;
	int s = 0;
	
	r += printf("%d\n", 0);
	s += ft_printf("%d\n", 0);
	r += printf("%d\n", 42);
	s += ft_printf("%d\n", 42);
	r += printf("%d\n", 1);
	s += ft_printf("%d\n", 1);
	r += printf("%d\n", 5454);
	s += ft_printf("%d\n", 5454);
	r += printf("%d\n", (int)2147483647);
	s += ft_printf("%d\n", (int)2147483647); 
	
	r += printf("%d\n", (int)2147483648);
	s += ft_printf("%d\n", (int)2147483648);
	r += printf("%d\n", (int)-2147483648);
	s += ft_printf("%d\n", (int)-2147483648);
	
 	r += printf("%d\n", (int)-2147483649);
	s += ft_printf("%d\n", (int)-2147483649); 
	r += printf("%x\n", 0);
	s += ft_printf("%x\n", 0);
	r += printf("%x\n", 42);
	s += ft_printf("%x\n", 42);
	r += printf("%x\n", 1);
	s += ft_printf("%x\n", 1);
	r += printf("%x\n", 5454);
	s += ft_printf("%x\n", 5454);
	
	r += printf("%x\n", (int)2147483647);
	s += ft_printf("%x\n", (int)2147483647);
	
	r += printf("%x\n", (int)2147483648);
	s += ft_printf("%x\n", (int)2147483648);
	r += printf("%x\n", (int)-2147483648);
	s += ft_printf("%x\n", (int)-2147483648);
	

	r += printf("%x\n", (int)0xFFFFFFFF);
	s += ft_printf("%x\n", (int)0xFFFFFFFF);

	r += printf("%x\n", (int)-2147483649);
	s += ft_printf("%x\n", (int)-2147483649);
	r += printf("%s\n", "");
	s += ft_printf("%s\n", "");
	r += printf("%s\n", "toto");
	s += ft_printf("%s\n", "toto");
	r += printf("%s\n", "wiurwuyrhwrywuier");
	s += ft_printf("%s\n", "wiurwuyrhwrywuier");
/* 	r += printf("%s\n", NULL);
	s += ft_printf("%s\n", NULL);
	r += printf("-%s-%s-%s-%s-\n", "", "toto", "wiurwuyrhwrywuier", NULL);
	s += ft_printf("-%s-%s-%s-%s-\n", "", "toto", "wiurwuyrhwrywuier", NULL); */

	r += printf("%d%x%d%x%d%x%d%x\n", 0, 0, 0, 0, 42, 42, 42, 42);
	s += ft_printf("%d%x%d%x%d%x%d%x\n", 0, 0, 0, 0, 42, 42, 42, 42);
	r += printf("%d%x%d%x%d%x%d%x\n", 0, 0, 0, 0, 42, 42, 42, 42);
	s += ft_printf("%d%x%d%x%d%x%d%x\n", 0, 0, 0, 0, 42, 42, 42, 42);
	r += printf("-%d-%x-%d-%x-%d-%x-%d-%x-\n", 0, 0, 0, 0, 42, 42, 42, 42);
	s += ft_printf("-%d-%x-%d-%x-%d-%x-%d-%x-\n", 0, 0, 0, 0, 42, 42, 42, 42);
 
	r += printf("%s%s%s%s\n", "", "", "toto", "toto");
	s += ft_printf("%s%s%s%s\n", "", "", "toto", "toto");
	r += printf("-%s-%s-%s-%s-\n", "", "", "toto", "toto");
	s += ft_printf("-%s-%s-%s-%s-\n", "", "", "toto", "toto");

	printf("written: %d\n", r);
	printf("written: %d\n", s);
}