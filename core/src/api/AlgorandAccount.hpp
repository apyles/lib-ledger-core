// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from idl.djinni

#ifndef DJINNI_GENERATED_ALGORANDACCOUNT_HPP
#define DJINNI_GENERATED_ALGORANDACCOUNT_HPP

#include <cstdint>
#include <memory>
#include <string>
#include <vector>
#ifndef LIBCORE_EXPORT
    #if defined(_MSC_VER)
       #include <libcore_export.h>
    #else
       #define LIBCORE_EXPORT
    #endif
#endif

namespace ledger { namespace core { namespace api {

class AlgorandAssetAmountCallback;
class AlgorandAssetAmountListCallback;
class AlgorandAssetParamsCallback;
class AlgorandAssetParamsListCallback;
class AlgorandTransaction;
class AlgorandTransactionCallback;
class AmountCallback;
class BoolCallback;
class StringCallback;
enum class AlgorandOperationType;
enum class TimePeriod;

class LIBCORE_EXPORT AlgorandAccount {
public:
    virtual ~AlgorandAccount() {}

    /**
     * Get the maximum amount spendable in one transaction
     * @param callback, Callback returning the maximum amount spendable
     * @param operationType, the type of the operation
     */
    virtual void getSpendableBalance(AlgorandOperationType operationType, const std::shared_ptr<AmountCallback> & callback) = 0;

    /**
     * Get information about a specific asset
     * @param assetId, the unique identifier of the asset to look for
     * @param callback, Callback returning the information about the queried asset
     */
    virtual void getAsset(const std::string & assetId, const std::shared_ptr<AlgorandAssetParamsCallback> & callback) = 0;

    /**
     * Check if address has a specific asset
     * @param assetId, the unique identifier of the asset to look for
     * @param callback, Callback returning the true if the address hold the asset
     */
    virtual void hasAsset(const std::string & address, const std::string & assetId, const std::shared_ptr<BoolCallback> & callback) = 0;

    /**
     * Get balance of account for a particular asset.
     * @param assetId, the unique identifier of the asset on the algorand network
     * @param callback, if getAssetBalance succeeds, Callback returning an Amount object which represents account's balance
     */
    virtual void getAssetBalance(const std::string & assetId, const std::shared_ptr<AlgorandAssetAmountCallback> & callback) = 0;

    /**
     * Get balance of account for a particular asset at a precise interval with a certain granularity
     * @param assetId, the unique identifier of the asset on the algorand network
     * @param start, lower bound of search range
     * @param end, upper bound of search range
     * @param precision, granularity at which we want results
     * @param callback, ListCallback returning a list of Amount objects which represents account's balance
     */
    virtual void getAssetBalanceHistory(const std::string & assetId, const std::string & start, const std::string & end, TimePeriod period, const std::shared_ptr<AlgorandAssetAmountListCallback> & callback) = 0;

    /**
     * Get balances of all assets to which account is registered
     * @param callback, ListCallback returning a list of AlgorandAssetAmount objects representing the different balances
     */
    virtual void getAssetsBalances(const std::shared_ptr<AlgorandAssetAmountListCallback> & callback) = 0;

    /**
     * Get information about the assets created by account
     * @param callback, ListCallback returning a list of AlgorandAssetParams objects representing the assets created by account
     */
    virtual void getCreatedAssets(const std::shared_ptr<AlgorandAssetParamsListCallback> & callback) = 0;

    /**
     * Get the pending rewards for account
     * @param callback, Callback returning the amount of pending rewards in MicroAlgos
     */
    virtual void getPendingRewards(const std::shared_ptr<AmountCallback> & callback) = 0;

    /**
     * Get the total rewards of MicroAlgos account has received, including pending rewards.
     * @param callback, Callback returning the total rewards in MicroAlgos.
     */
    virtual void getTotalRewards(const std::shared_ptr<AmountCallback> & callback) = 0;

    /**
     * Get an estimation (in MicroAlgos) of the fees needed to broadcast a given transaction to the algorand network
     * @param transaction, the transaction for which fees are estimated
     * @param callback, Callback returning the fees in MicroAlgos for the specified transaction
     */
    virtual void getFeeEstimate(const std::shared_ptr<AlgorandTransaction> & transaction, const std::shared_ptr<AmountCallback> & callback) = 0;

    /**
     * Build a raw signed transaction from a raw unsigned transaction and the signature
     * @param rawUnsignedTransaction, the msgpack-encoded unsigned transaction
     * @param signature, the signature of the transaction
     * @return binary, the msgpack-encoded signed transaction
     */
    virtual std::vector<uint8_t> buildRawSignedTransaction(const std::vector<uint8_t> & rawUnsignedTransaction, const std::vector<uint8_t> & signature) const = 0;

    /**
     * Broadcast a raw transaction to the algorand network
     * @param transaction, the msgpack-encoded transaction
     * @param callback, Callback returning the id of the transaction in case of success, an error message otherwise
     */
    virtual void broadcastRawTransaction(const std::vector<uint8_t> & transaction, const std::shared_ptr<StringCallback> & callback) = 0;

    /**
     * Broadcast an AlgorandTransaction object to the algorand network
     * @param transaction, the transaction to broadcast
     * @param callback, Callback returning the fees in MicroAlgos for the specified transaction
     */
    virtual void broadcastTransaction(const std::shared_ptr<AlgorandTransaction> & transaction, const std::shared_ptr<StringCallback> & callback) = 0;

    /**
     * Create a new transaction
     * @param callback, The new transaction
     */
    virtual void createTransaction(const std::shared_ptr<AlgorandTransactionCallback> & callback) = 0;
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_ALGORANDACCOUNT_HPP
