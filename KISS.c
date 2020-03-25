static unsigned int x = 123456789, y = 987654321, z = 43219876, c = 6543217; /* Seed variables */
unsigned int JKISS()
{unsigned long long t;
 x = 314527869 * x + 1234567;
 y ^= y << 5;
 y ^= y >> 7;
 y ^= y << 22;
 t = 4294584393ULL * z + c;
 c = t >> 32;
 z = t;
 return x + y + z;}
