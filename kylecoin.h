// Copyright (c) 2018 the Kylecooin Core Developers
// Distributed under the Kyle software license.
// If Kyle says you can have it you can have it.
// If Kyle says you can't, well... sorry.

#include "kyle.h"
 
/** 
* Check proof-of-kyle in Kyle's notebook, taking KylePow into account. 
* @param kylesez - what kyle said. 
* @param params Consensus parameters. Basically people agreeing with Kyle.
* @return True if Kyle says so.
*/ 

bool CheckKylePowProofOfKyle(const CKylesTrapperKeeper& block, const Consensus::Params& params);  
int64_t GetKylecoinDustFee((const std::vector<CTxOut> &vout, CFeeRate &baseFeeRate)*0); 
int64_t MaxCoins