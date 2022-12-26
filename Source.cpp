#include<iostream> //2 
using namespace std;
int main()
{
	int maincomb[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int temp_comb10[10] = { 0,0,0,0,0,0,0,0,0,0 };
	int temp_comb9[10] = { 0,0,0,0,0,0,0,0,0,0 };
	int temp_comb8[10] = { 0,0,0,0,0,0,0,0,0,0 };
	int temp_comb7[10] = { 0,0,0,0,0,0,0,0,0,0 };
	int temp_comb6[10] = { 0,0,0,0,0,0,0,0,0,0 };
	int temp_comb5[10] = { 0,0,0,0,0,0,0,0,0,0 };
	int temp_comb4[10] = { 0,0,0,0,0,0,0,0,0,0 };
	int temp_comb3[10] = { 0,0,0,0,0,0,0,0,0,0 };
	int temp_comb2[10] = { 0,0,0,0,0,0,0,0,0,0 };
	int best_comb[10] = { 0,0,0,0,0,0,0,0,0,0 };
	double place[11][11] =
	{
		// 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 
		{ 1000,1000,1000,1000,1000,1000,1000,1000,1000,1000,1000 } //0 
		, { 1000,1000, 5.1,12.5, 13, 7.5,13.5,1000,1000,24.1,1000 } //1 
		, { 1000, 5.1,1000, 7.2, 9.2,1000,1000,1000,1000,1000,1000 } //2 
		, { 1000,12.5, 7.2,1000, 8.0,1000,1000,1000,21.5,1000,33.2 } //3 
		, { 1000, 13, 9.2, 8,1000, 8.5,1000,15.5,14.1,1000,1000 } //4 
		, { 1000, 7.5,1000,1000, 8.5,1000,11.5,10.5,17.3,1000,1000 } //5 
		, { 1000,13.5,1000,1000,1000,11.5,1000,11.2,1000,11.1,1000 } //6 
		, { 1000,1000,1000,1000,15.5,10.5,11.2,1000, 8.9,13.8,12.7 } //7 
		, { 1000,1000,1000,21.5,14.1,17.3,1000, 8.9,1000,1000, 8.5 } //8 
		, { 1000,24.1,1000,1000,1000,1000,11.1,13.8,1000,1000,12.1 } //9 
		, { 1000,1000,1000,33.2,1000,1000,1000,12.7, 8.5,12.1,1000 } //10 
	};
	double total_distance, lowlest_distance = 1234.345;
	int lp_10, lp_9, lp_8, lp_7, lp_6, lp_5, lp_4, lp_3, lp_2, lp_1;
	int inlp_10, inlp_9, inlp_8, inlp_7, inlp_6, inlp_5, inlp_4, inlp_3, inlp_2, inlp_1;
	int input_10, input_9, input_8, input_7, input_6, input_5, input_4, input_3, input_2,
		input_1;
	int spec_10, spec_9, spec_8, spec_7, spec_6, spec_5, spec_4, spec_3, spec_2;
	for (lp_10 = 0; lp_10 < 10; lp_10++) // loop 10 
	{
		for (spec_10 = 0; spec_10 < 10; spec_10++) //cpy from main combination to temp 
			//combination10
		{
		temp_comb10[spec_10] = maincomb[spec_10];
		}
		input_10 = temp_comb10[lp_10]; //first input 
		inlp_10 = lp_10; //cpy counter form loop 10 to internal loop 10 
		while (inlp_10 < 10)
		{
			temp_comb10[inlp_10] = temp_comb10[inlp_10 + 1];
			inlp_10++;
		}

		//loop 9 
		for (lp_9 = 0; lp_9 < 9; lp_9++) // loop 9 
		{
			for (spec_9 = 0; spec_9 < 10; spec_9++) //cpy from temp combination10 to temp 
				//combination9
			{
			temp_comb9[spec_9] = temp_comb10[spec_9];
			}
			input_9 = temp_comb9[lp_9]; // 2- input 
			inlp_9 = lp_9; //cpy counter form loop 9 to internal loop 9 
			while (inlp_9 < 10)
			{
				temp_comb9[inlp_9] = temp_comb9[inlp_9 + 1];
				inlp_9++;
			}
			//loop 8 
			for (lp_8 = 0; lp_8 < 8; lp_8++) // loop 8 
			{
				for (spec_8 = 0; spec_8 < 10; spec_8++) //cpy from temp combination9 to temp 
					//combination8
				{
				temp_comb8[spec_8] = temp_comb9[spec_8];
				}
				input_8 = temp_comb8[lp_8]; // 3- input 
				inlp_8 = lp_8; //cpy counter form loop 8 to internal loop 8 
				while (inlp_8 < 10)
				{
					temp_comb8[inlp_8] = temp_comb8[inlp_8 + 1];
					inlp_8++;
				}
				//loop 7 
				for (lp_7 = 0; lp_7 < 7; lp_7++) // loop 7 
				{
					for (spec_7 = 0; spec_7 < 10; spec_7++) //cpy from temp combination8 to 
						//temp combination7
					{
					temp_comb7[spec_7] = temp_comb8[spec_7];
					}
					input_7 = temp_comb7[lp_7]; // 4- input 
					inlp_7 = lp_7; //cpy counter form loop 7 to internal loop 7 
					while (inlp_7 < 10)
					{
						temp_comb7[inlp_7] = temp_comb7[inlp_7 + 1];
						inlp_7++;
					}
					//loop6 
					for (lp_6 = 0; lp_6 < 6; lp_6++) // loop 6 
					{
						for (spec_6 = 0; spec_6 < 10; spec_6++) //cpy from temp combination7 to 
							//temp combination6
						{
						temp_comb6[spec_6] = temp_comb7[spec_6];
						}
						input_6 = temp_comb6[lp_6]; // 5- input 
						inlp_6 = lp_6; //cpy counter form loop 6 to internal loop 6 
						while (inlp_6 < 10)
						{
							temp_comb6[inlp_6] = temp_comb6[inlp_6 + 1];
							inlp_6++;
						}
						//loop 5 
						for (lp_5 = 0; lp_5 < 5; lp_5++) // loop 5 
						{
							for (spec_5 = 0; spec_5 < 10; spec_5++) //cpy from temp combination6 
								//to temp combination5
							{
							temp_comb5[spec_5] = temp_comb6[spec_5];
							}
							input_5 = temp_comb5[lp_5]; // 6- input 
							inlp_5 = lp_5; //cpy counter form loop 5 to internal loop 5 
							while (inlp_5 < 10)
							{
								temp_comb5[inlp_5] = temp_comb5[inlp_5 + 1];
								inlp_5++;
							}
							//loop4 
							for (lp_4 = 0; lp_4 < 4; lp_4++) // loop 4 
							{
								for (spec_4 = 0; spec_4 < 10; spec_4++) //cpy from temp 
									//combination5 to temp combination4
								{
								temp_comb4[spec_4] = temp_comb5[spec_4];
								}
								input_4 = temp_comb4[lp_4]; // 7- input 
								inlp_4 = lp_4; //cpy counter form loop 4 to internal loop 4 
								while (inlp_4 < 10)
								{
									temp_comb4[inlp_4] = temp_comb4[inlp_4 + 1];
									inlp_4++;
								}
								//loop3 
								for (lp_3 = 0; lp_3 < 3; lp_3++) // loop 3 
								{
									for (spec_3 = 0; spec_3 < 10; spec_3++) //cpy from temp 
										//combination4 to temp combination3
									{
									temp_comb3[spec_3] = temp_comb4[spec_3];
									}
									input_3 = temp_comb3[lp_3]; // 8- input 
									inlp_3 = lp_3; //cpy counter form loop 3 to internal loop 
									//3
										while (inlp_3 < 10)
										{
											temp_comb3[inlp_3] = temp_comb3[inlp_3 + 1];
											inlp_3++;
										}
									//loop2 
									for (lp_2 = 0; lp_2 < 2; lp_2++) // loop 2 
									{
										for (spec_2 = 0; spec_2 < 10; spec_2++) //cpy from temp 
											//combination3 to temp combination2
										{
										temp_comb2[spec_2] = temp_comb3[spec_2];
										}
										input_2 = temp_comb2[lp_2]; // 9- input 
										inlp_2 = lp_2; //cpy counter form loop 3 to internal 
										//loop 3
											while (inlp_2 < 10)
											{
												temp_comb2[inlp_2] = temp_comb2[inlp_2 + 1];
												inlp_2++;
											}
										//loop1 
										for (lp_1 = 0; lp_1 < 1; lp_1++) //loop1 
										{
											input_1 = temp_comb2[lp_1]; //10 -input 
											total_distance = 0;
											total_distance += place[input_10][input_9] +
												place[input_9][input_8] + place[input_8][input_7] + place[input_7][input_6]
												+ place[input_6][input_5] + place[input_5][input_4] +
												place[input_4][input_3] + place[input_3][input_2]
												+ place[input_2][input_1] + place[input_1][input_10];

											if (total_distance < lowlest_distance)
											{
												best_comb[0] = input_10;
												best_comb[1] = input_9;
												best_comb[2] = input_8;
												best_comb[3] = input_7;
												best_comb[4] = input_6;
												best_comb[5] = input_5;
												best_comb[6] = input_4;
												best_comb[7] = input_3;
												best_comb[8] = input_2;
												best_comb[9] = input_1;
												lowlest_distance = total_distance;
											}
											cout << input_10 << input_9 << input_8 << input_7 << input_6 <<input_5 << input_4 << input_3 << input_2 << input_1<< "\t" << total_distance << "\t" << lowlest_distance << endl;

											//endloop1 
										}

										//endloop2 
									}


									//endloop3 
								}

								//endloop4 
							}

							//endloop5 
						}

						//endloop6 
					}

					//endloop7 
				}

				//endloop8 
			}

			//endloop9 
		}
		//endloop10 
	}


	cout << "The best route is :" << best_comb[0] << best_comb[1] << best_comb[2] <<best_comb[3] << best_comb[4] << best_comb[5] << best_comb[6] << best_comb[7] <<best_comb[8] << best_comb[9] << endl;
	cout << "with total distance of :" << lowlest_distance << "KM";
	return 0;
}