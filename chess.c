#include <stdio.h>

int is_valid_AN(char file, char rank) { 
	return file >= 'a' && file <= 'h' && rank >= '1' && rank <= '8'; 
}

void print_rays(char file, char rank) { 	
	printf("%c%c:", file, rank); 
	for (int i = 0, n, d[2], t_f, t_r; i < 8; i++) { 
		if (i == 0 || i / 2 % 2 == 1) { 
			file += (i > 1 && i < 6) ? -1 : 1; 
		} else { 
			rank += (i > 1 && i < 6) ? -1 : 1;  
		}
		t_f = file; 
		t_r = rank; 
		d[1] = (i < 4 ? 1 : -1) * (i % 4 > 0); 
		n = (i + 2) % 8; 
		d[0] = (n < 4 ? 1 : -1) * (n % 4 > 0); 
		while (is_valid_AN(t_f, t_r)) { 
			printf ("%c%c", t_f, t_r); 
			t_f += d[0]; 
			t_r += d[1]; 
		} 
		if (i != 7) { 
			printf(",");
		}
	}
	printf("\n"); 
}

void print_nearest_not_on_rays(char file, char rank) { 
	printf("%c%c:", file, rank); 
	for (int i = 0; i < 16; i++) { 
		if (i == 0) { 
			file += 1; 
			rank += 2; 
			if (is_valid_AN(file, rank)) { 
				printf ("%c%c,", file, rank); 
			}
			continue;
		}
		if (i / 4 % 2 == 0) { 
			file += i < 8 ? -1 : 1; 
		} else { 
			rank += i < 8 ? -1 : 1; 
		}
		if (i % 2 == 0 && is_valid_AN(file, rank)) { 
			printf ("%c%c", file, rank); 
		}
		if (i % 2 == 0 && i != 7) { 
			printf(",");
		}
	}
	printf("\n");
}

int main() { 
	for (char y = '8'; y >= '1'; y--) { 
		for (char x = 'a'; x <= 'h'; x++) { 
			print_rays(x, y); 
			print_nearest_not_on_rays(x, y); 
		}
	}
	printf("\n"); 
	return 0;
}
