#include "Sort.h"

Sort::Sort()
{
	printf("Am apelat Sort");

}

Sort::~Sort()
{
	delete this->list;
}

Sort::Sort(int size)
{
	///printf("Am apelat Sort");
	this->list = new int[size];
	this->size = size;
}

void Sort::BubbleSort()
{
	bool ok = false;
	while (ok == false)
	{
		ok = true;
		for(int i=0; i < this->size-1; i++)
		  if(ascendent==true)
			if (this->list[i] > this->list[i + 1])
			{
				int aux = this->list[i];
				this->list[i] = this->list[i + 1];
				this->list[i + 1] = aux;
				ok = false;
		    }
		else 
			if (this->list[i] <  this->list[i + 1])
			{
				int aux = this->list[i];
				this->list[i] = this->list[i + 1];
				this->list[i + 1] = aux;
				ok = false;
			}

	}

}

void Sort::InsertSort(bool ascendent)
{
	for (int i = 1; i < this->size; i++)
	{
		int p = i;

		while (p > 0 && ((ascendent==true && this->list[p] < this->list[p - 1]) || (ascendent == false && this->list[p] > this->list[p - 1])))
		{
			int aux = this->list[p];
			this->list[p] = this->list[p - 1];
			this->list[p - 1] = aux;
			p--;
		}
	}
	ascendent = true;
}

void Sort::QuickSortRec(int st, int dr, bool ascendent)
{
	if (st < dr)
	{
		//pivotul este inițial v[st]
		int m = (st + dr) / 2;
		int aux = this->list[st];
		this->list[st] = this->list[m];
		this->list[m] = aux;
		int i = st, j = dr, d = 0;
		while (i < j)
		{
			if (ascendent)
			{
				if (this->list[i] > this->list[j])
				{
					aux = this->list[i];
					this->list[i] = this->list[j];
					this->list[j] = aux;
					d = 1 - d;
				}
				i += d;
				j -= 1 - d;
			}
			else
			{
				if (this->list[i] < this->list[j])
				{
					aux = this->list[i];
					this->list[i] = this->list[j];
					this->list[j] = aux;
					d = 1 - d;
				}
				i += d;
				j -= 1 - d;

			}
		
		}
		QuickSortRec(st, i - 1, ascendent);
		QuickSortRec(i + 1, dr, ascendent);
	}

}

void Sort::QuickSort(bool ascendent)
{
	QuickSortRec(0, this->size, ascendent);

}


void Sort::Print()
{
	for (int i = 0; i < this->size; i++)
		printf("%d%c", this->list[i], ' ');

}

int  Sort::GetElementsCount()
{
	printf("%d", this->size);
}

int  Sort::GetElementFromIndex(int index)
{  
	printf("%d", this->list[index]);
}
