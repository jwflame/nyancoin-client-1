// Copyright (c) 2015 The Nyncoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "amount.h"
#include "chain.h"
#include "chainparams.h"

bool AllowDigishieldMinDifficultyForBlock(const CBlockIndex* pindexLast, const CBlockHeader *pblock, const Consensus::Params& params);
CAmount GetNyancoinBlockSubsidy(int nHeight, const Consensus::Params& consensusParams, uint256 prevHash);
unsigned int CalculateNyancoinNextWorkRequired(const CBlockIndex* pindexLast, int64_t nLastRetargetTime, const Consensus::Params& params);

/**
 * Check proof-of-work of a block header, taking auxpow into account.
 * @param block The block header.
 * @param params Consensus parameters.
 * @return True iff the PoW is correct.
 */
bool CheckAuxPowProofOfWork(const CBlockHeader& block, const Consensus::Params& params);

CAmount GetNyancoinMinRelayFee(const CTransaction& tx, unsigned int nBytes, bool fAllowFree);
CAmount GetNyancoinDustFee(const std::vector<CTxOut> &vout, CFeeRate &baseFeeRate);
