#include <omp.h>
int main()
{
	const int size = 256;
	double sinTable[size];
	int this_thread, num_threads;

	#pragma omp parallel for
	for(int n=0; n<size; ++n){
		num_threads = omp_get_num_threads();
		this_thread = omp_get_thread_num();
		printf ("%d/%d   %d\n",this_thread, num_threads, n);
	}
  
    // the table is now initialized
}
