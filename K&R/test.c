int master_loser;

bool cycle(local_loser, i)
{
	if(local_loser == master_loser)
	{
		"cycle has formed";
		return true;
	}

	for(int x=0;x<candidate_count;x++)
	{
		if(locked[local_loser][x] == true)
		{
			return cycle(pairs[local_loser][x]);
		}
	}

}

for(int j=0;j<pair_count;j++)
{
	master_loser = pairs[j].loser;
	if(cycle(pairs[j].loser, j) == false)
	{
		locked[pairs[j].winner][[pairs[j].loser] = true;
	}
}
