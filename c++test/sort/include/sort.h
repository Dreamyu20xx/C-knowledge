#ifndef SORT_H
#define SORT_H
namespace mysort{

class Sort
{
	public:
		Sort();
		virtual ~Sort();
		Sort(const Sort& other);
		static int number[10] ;
		void insertSortTolist(void);//输出到list里面
		void insertSort(void);
		void shellSort(void);
		void printarrar(void);
		void bubble(void);
		void quicksort(int first,int last);
		void quicksortoptimize(int first,int last);
		void selectsort(void);
		template<class T>
		void swap_value(T * a,T *b)
		{
			T c;
			c = *a;
			*a = *b;
			*b = c;
		}
	protected:

	private:
};


}



#endif // SORT_H
