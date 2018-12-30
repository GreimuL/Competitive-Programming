#include<iostream>
#include<map>
#include<vector>
using namespace std;

map<int,int> ma;
vector<int> sq;
int main() {

	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		pair<map<int, int>::iterator, bool> ret;
		ret = ma.insert(make_pair(a,1));
		if (ret.second == false) {
			ma[a]++;
		}
	}
	map<int, int>::iterator tpiter;
	map<int, int>::iterator iter;
	map<int, int>::iterator iter2;
	map<int, int>::iterator iter3;
	map<int, int>::iterator iter4;
	map<int, int>::iterator iter5;
	map<int, int>::iterator iter6;
	map<int, int>::iterator iter7;
	map<int, int>::iterator iter8;
	if (m == 1) {
		for (iter = ma.begin(); iter != ma.end(); iter++) {
			cout << iter->first << "\n";
		}
	}
	if (m == 2) {
		for (iter = ma.begin(); iter != ma.end(); iter++) {
			sq.clear();
			iter->second--;
			sq.push_back(iter->first);
			for (iter2 = ma.begin(); iter2 != ma.end(); iter2++) {
				if (iter2->second > 0) {
					sq.push_back(iter2->first);
				}
				if (sq.size() == m) {
					for (int j = 0; j < m; j++) {
						cout << sq[j] << " ";
					}
					cout << "\n";
					sq.clear();
					sq.push_back(iter->first);
				}
			}
			iter->second++;
		}
	}
	if (m == 3) {
		for (iter = ma.begin(); iter != ma.end(); iter++) {
			sq.clear();
			iter->second--;
			sq.push_back(iter->first);
			for (iter2 = ma.begin(); iter2 != ma.end(); iter2++) {
				if (iter2->second == 0) {
					continue;
				}
				sq.clear();
				sq.push_back(iter->first);
				iter2->second--;
				sq.push_back(iter2->first);
				for (iter3 = ma.begin(); iter3 != ma.end(); iter3++) {
					if (iter3->second == 0) {
						continue;
					}
					sq.push_back(iter3->first);				
					if (sq.size() == m) {
						for (int j = 0; j < m; j++) {
							cout << sq[j] << " ";
						}
						cout << "\n";
						sq.clear();
						sq.push_back(iter->first);
						sq.push_back(iter2->first);
					}
				}
				iter2->second++;
			}
			iter->second++;
		}
	}
	if (m == 4) {
		for (iter = ma.begin(); iter != ma.end(); iter++) {
			sq.clear();
			iter->second--;
			sq.push_back(iter->first);
			for (iter2 = ma.begin(); iter2 != ma.end(); iter2++) {
				if (iter2->second == 0) {
					continue;
				}
				sq.clear();
				sq.push_back(iter->first);
				iter2->second--;
				sq.push_back(iter2->first);
				for (iter3 = ma.begin(); iter3 != ma.end(); iter3++) {
					if (iter3->second == 0) {
						continue;
					}
					sq.clear();
					sq.push_back(iter->first);
					sq.push_back(iter2->first);
					sq.push_back(iter3->first);
					iter3->second--;
					for (iter4 = ma.begin(); iter4 != ma.end(); iter4++) {
						if (iter4->second == 0) {
							continue;
						}
						sq.push_back(iter4->first);
						if (sq.size() == m) {
							for (int j = 0; j < m; j++) {
								cout << sq[j] << " ";
							}
							cout << "\n";
							sq.clear();
							sq.push_back(iter->first);
							sq.push_back(iter2->first);
							sq.push_back(iter3->first);
						}
					}
					iter3->second++;
					
				}
				iter2->second++;
			}
			iter->second++;
		}
	}
	if (m == 5) {
		for (iter = ma.begin(); iter != ma.end(); iter++) {
			sq.clear();
			iter->second--;
			sq.push_back(iter->first);
			for (iter2 = ma.begin(); iter2 != ma.end(); iter2++) {
				if (iter2->second == 0) {
					continue;
				}
				sq.clear();
				sq.push_back(iter->first);
				iter2->second--;
				sq.push_back(iter2->first);
				for (iter3 = ma.begin(); iter3 != ma.end(); iter3++) {
					if (iter3->second == 0) {
						continue;
					}
					sq.clear();
					sq.push_back(iter->first);
					sq.push_back(iter2->first);
					sq.push_back(iter3->first);
					iter3->second--;
					for (iter4 = ma.begin(); iter4 != ma.end(); iter4++) {
						if (iter4->second == 0) {
							continue;
						}
						sq.clear();
						sq.push_back(iter->first);
						sq.push_back(iter2->first);
						sq.push_back(iter3->first);
						sq.push_back(iter4->first);
						iter4->second--;
						for (iter5 = ma.begin(); iter5 != ma.end(); iter5++) {
							if (iter5->second == 0) {
								continue;
							}
							sq.push_back(iter5->first);
							if (sq.size() == m) {
								for (int j = 0; j < m; j++) {
									cout << sq[j] << " ";
								}
								cout << "\n";
								sq.clear();
								sq.push_back(iter->first);
								sq.push_back(iter2->first);
								sq.push_back(iter3->first);
								sq.push_back(iter4->first);
							}
						}
						iter4->second++;
					}
					iter3->second++;

				}
				iter2->second++;
			}
			iter->second++;
		}
	}
	if (m == 6) {
		for (iter = ma.begin(); iter != ma.end(); iter++) {
			sq.clear();
			iter->second--;
			sq.push_back(iter->first);
			for (iter2 = ma.begin(); iter2 != ma.end(); iter2++) {
				if (iter2->second == 0) {
					continue;
				}
				sq.clear();
				sq.push_back(iter->first);
				iter2->second--;
				sq.push_back(iter2->first);
				for (iter3 = ma.begin(); iter3 != ma.end(); iter3++) {
					if (iter3->second == 0) {
						continue;
					}
					sq.clear();
					sq.push_back(iter->first);
					sq.push_back(iter2->first);
					sq.push_back(iter3->first);
					iter3->second--;
					for (iter4 = ma.begin(); iter4 != ma.end(); iter4++) {
						if (iter4->second == 0) {
							continue;
						}
						sq.clear();
						sq.push_back(iter->first);
						sq.push_back(iter2->first);
						sq.push_back(iter3->first);
						sq.push_back(iter4->first);
						iter4->second--;
						for (iter5 = ma.begin(); iter5 != ma.end(); iter5++) {
							if (iter5->second == 0) {
								continue;
							}
							sq.clear();
							sq.push_back(iter->first);
							sq.push_back(iter2->first);
							sq.push_back(iter3->first);
							sq.push_back(iter4->first);
							sq.push_back(iter5->first);
							iter5->second--;
							for (iter6 = ma.begin(); iter6 != ma.end(); iter6++) {
								if (iter6->second == 0) {
									continue;
								}
								sq.push_back(iter6->first);
								if (sq.size() == m) {
									for (int j = 0; j < m; j++) {
										cout << sq[j] << " ";
									}
									cout << "\n";
									sq.clear();
									sq.push_back(iter->first);
									sq.push_back(iter2->first);
									sq.push_back(iter3->first);
									sq.push_back(iter4->first);
									sq.push_back(iter5->first);
								}
							}
							iter5->second++;
						}
						iter4->second++;
					}
					iter3->second++;

				}
				iter2->second++;
			}
			iter->second++;
		}
	}
	if (m == 7) {
		for (iter = ma.begin(); iter != ma.end(); iter++) {
			sq.clear();
			iter->second--;
			sq.push_back(iter->first);
			for (iter2 = ma.begin(); iter2 != ma.end(); iter2++) {
				if (iter2->second == 0) {
					continue;
				}
				sq.clear();
				sq.push_back(iter->first);
				iter2->second--;
				sq.push_back(iter2->first);
				for (iter3 = ma.begin(); iter3 != ma.end(); iter3++) {
					if (iter3->second == 0) {
						continue;
					}
					sq.clear();
					sq.push_back(iter->first);
					sq.push_back(iter2->first);
					sq.push_back(iter3->first);
					iter3->second--;
					for (iter4 = ma.begin(); iter4 != ma.end(); iter4++) {
						if (iter4->second == 0) {
							continue;
						}
						sq.clear();
						sq.push_back(iter->first);
						sq.push_back(iter2->first);
						sq.push_back(iter3->first);
						sq.push_back(iter4->first);
						iter4->second--;
						for (iter5 = ma.begin(); iter5 != ma.end(); iter5++) {
							if (iter5->second == 0) {
								continue;
							}
							sq.clear();
							sq.push_back(iter->first);
							sq.push_back(iter2->first);
							sq.push_back(iter3->first);
							sq.push_back(iter4->first);
							sq.push_back(iter5->first);
							iter5->second--;
							for (iter6 = ma.begin(); iter6 != ma.end(); iter6++) {
								if (iter6->second == 0) {
									continue;
								}
								sq.clear();
								sq.push_back(iter->first);
								sq.push_back(iter2->first);
								sq.push_back(iter3->first);
								sq.push_back(iter4->first);
								sq.push_back(iter5->first);
								sq.push_back(iter6->first);
								iter6->second--;
								for (iter7 = ma.begin(); iter7 != ma.end(); iter7++) {
									if (iter7->second == 0) {
										continue;
									}
									sq.push_back(iter7->first);
									if (sq.size() == m) {
										for (int j = 0; j < m; j++) {
											cout << sq[j] << " ";
										}
										cout << "\n";
										sq.clear();
										sq.push_back(iter->first);
										sq.push_back(iter2->first);
										sq.push_back(iter3->first);
										sq.push_back(iter4->first);
										sq.push_back(iter5->first);
										sq.push_back(iter6->first);
									}
								}
								iter6->second++;
							}
							iter5->second++;
						}
						iter4->second++;
					}
					iter3->second++;

				}
				iter2->second++;
			}
			iter->second++;
		}
	}
	if (m == 8) {
		for (iter = ma.begin(); iter != ma.end(); iter++) {
			sq.clear();
			iter->second--;
			sq.push_back(iter->first);
			for (iter2 = ma.begin(); iter2 != ma.end(); iter2++) {
				if (iter2->second == 0) {
					continue;
				}
				sq.clear();
				sq.push_back(iter->first);
				iter2->second--;
				sq.push_back(iter2->first);
				for (iter3 = ma.begin(); iter3 != ma.end(); iter3++) {
					if (iter3->second == 0) {
						continue;
					}
					sq.clear();
					sq.push_back(iter->first);
					sq.push_back(iter2->first);
					sq.push_back(iter3->first);
					iter3->second--;
					for (iter4 = ma.begin(); iter4 != ma.end(); iter4++) {
						if (iter4->second == 0) {
							continue;
						}
						sq.clear();
						sq.push_back(iter->first);
						sq.push_back(iter2->first);
						sq.push_back(iter3->first);
						sq.push_back(iter4->first);
						iter4->second--;
						for (iter5 = ma.begin(); iter5 != ma.end(); iter5++) {
							if (iter5->second == 0) {
								continue;
							}
							sq.clear();
							sq.push_back(iter->first);
							sq.push_back(iter2->first);
							sq.push_back(iter3->first);
							sq.push_back(iter4->first);
							sq.push_back(iter5->first);
							iter5->second--;
							for (iter6 = ma.begin(); iter6 != ma.end(); iter6++) {
								if (iter6->second == 0) {
									continue;
								}
								sq.clear();
								sq.push_back(iter->first);
								sq.push_back(iter2->first);
								sq.push_back(iter3->first);
								sq.push_back(iter4->first);
								sq.push_back(iter5->first);
								sq.push_back(iter6->first);
								iter6->second--;
								for (iter7 = ma.begin(); iter7 != ma.end(); iter7++) {
									if (iter7->second == 0) {
										continue;
									}
									sq.clear();
									sq.push_back(iter->first);
									sq.push_back(iter2->first);
									sq.push_back(iter3->first);
									sq.push_back(iter4->first);
									sq.push_back(iter5->first);
									sq.push_back(iter6->first);
									sq.push_back(iter7->first);
									iter7->second--;
									for (iter8 = ma.begin(); iter8 != ma.end(); iter8++) {
										if (iter8->second == 0) {
											continue;
										}
										sq.push_back(iter8->first);
										if (sq.size() == m) {
											for (int j = 0; j < m; j++) {
												cout << sq[j] << " ";
											}
											cout << "\n";
											sq.clear();
											sq.push_back(iter->first);
											sq.push_back(iter2->first);
											sq.push_back(iter3->first);
											sq.push_back(iter4->first);
											sq.push_back(iter5->first);
											sq.push_back(iter6->first);
											sq.push_back(iter7->first);
										}
									}
									iter7->second++;
								}
								iter6->second++;
							}
							iter5->second++;
						}
						iter4->second++;
					}
					iter3->second++;

				}
				iter2->second++;
			}
			iter->second++;
		}
	}
	return 0;
}