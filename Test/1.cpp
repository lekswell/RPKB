#include <iostream> 
class JournalAppointment
{
private:
	bool isMinuteFree(int period, int minute)
	{
		if ()
	}
	void reserveBlock(int period, int startMinute, int duration)
	{ 

	}
public:
	int findFreeBlock(int period, int duration);
	{
		int curDuration = 0;
		for (int i = 0; i <= 59; i++)
		{
			if isMinuteFree(period, i)
			{
				curDuration++;
				if (curDuration == duration)
				{
					return i - curDuration;
				}
			}
			else
			{
				curDuration = 0;
			}
		}
		return -1;
	}d
	bool makeAppointment(int startPeriod, int endPeriod, int duration);
	{
		int freeBlock = -1;
		for (int i = startPeriod; i <= endPeriod; i++)
		{
			freeBlock = findFreeBlock(i, duration);
			if (freeBlock != -1)
			{
				reserveBlock(i, freeBlock, duration);
				return true;
			}
		}
		return false;
	}
};

int main()
{

}
