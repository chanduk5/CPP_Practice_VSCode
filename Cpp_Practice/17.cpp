#include<iostream>
#include<string.h>
#include<ctime>
#include<cstdlib>

class Monster
{
public:
	typedef enum
	{
		Dragon = 0,
		Goblin,
		Ogre,
		Orc,
		Skeleton,
		Troll,
		Vampire,
		Zombie,
		MAX_MONSTER_TYPES,
	}EN_MONSTER_GENERATOR;
private:
	EN_MONSTER_GENERATOR m_MonsterType;
	std::string m_Name;
	std::string m_Roar;
	int m_hitPoints;
public:
	Monster(EN_MONSTER_GENERATOR monsterGen, std::string name, std::string roar, int hitPoints):
		m_MonsterType(monsterGen), m_Name(name), m_Roar(roar), m_hitPoints(hitPoints){}

	inline const char* monsterToString(EN_MONSTER_GENERATOR monsterType)
	{
		if (monsterType == Dragon)
		{
			return "Dragon";
		}
		else if (monsterType == Goblin)
		{
			return "Goblin";
		}
		else if (monsterType == Ogre)
		{
			return "Ogre";
		}
		else if (monsterType == Orc)
		{
			return "Orc";
		}
		else if (monsterType == Skeleton)
		{
			return "Skeleton";
		}
		else if (monsterType == Troll)
		{
			return "Troll";
		}
		else if (monsterType == Vampire)
		{
			return "Vampire";
		}
		else if (monsterType == Zombie)
		{
			return "Zombie";
		}
		else
		{
			return "None";
		}
	}

	void print(void)
	{
		std::cout << m_Name << " the " << monsterToString(m_MonsterType) << " has " << m_hitPoints
			<< " hit points and says " << m_Roar << "\n";
	}

	// Generate a random number between minand max(inclusive)
	// Assumes srand() has already been called
	static int getRandomNumber(int min, int max)
	{
		// evenly distribute the random number across our range
		return (rand() % (max - min + 1) + min);
	}

	static Monster GenerateMonster()
	{
		EN_MONSTER_GENERATOR type = static_cast<Monster::EN_MONSTER_GENERATOR>(getRandomNumber(Monster::Dragon, Monster::MAX_MONSTER_TYPES - 1));
		int hits = getRandomNumber(1, 100);

		static std::string s_names[6] = { "Typhon", "Medusa", "Minotaur", "Cerberus", "Scylla", "Hydra" };
		static std::string s_roars[6] = { "t-rex", "Graboid", "mechs", "Cloverfield’s", "BioShock’s", "Reapers" };

		return Monster(type, s_names[getRandomNumber(0, 5)], s_roars[getRandomNumber(0, 5)], hits);
	}
};

int quiz_3(void)
{
	srand(static_cast<unsigned int>(time(0))); // set initial seed value to system clock
	//rand(); // If using Visual Studio, discard first random value

	Monster m = Monster::GenerateMonster();
	m.print();
	return 0;
}