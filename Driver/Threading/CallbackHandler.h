#ifndef CALLBACKHANDLER_H
#define CALLBACKHANDLER_H

//Internal headers
#include <mutex>
#include <memory>
#include <functional>

/**
 * @brief The CallbackHandler class processes callback functions
 */
class CallbackHandler
{
public:
    /**
     * @brief addCallback Adds a callback function
     * @param callback callback function to add
     * @return returns shared pointer to created callback function
     * @details you can use the shared pointer to remove callbacks
     */
    std::shared_ptr<std::function<void(void)>> addCallback(std::function<void(void)> callback);

    /**
     * @brief addCallback Adds a callback function
     * @param callback callback function to add
     */
    void addCallback(std::shared_ptr<std::function<void(void)>> callback);

    /**
     * @brief removeCallback Removes a callback function
     * @param callback shared pointer to callback function to remove
     * @return returns true if the callback was succesfully removed
     */
    bool removeCallback(std::shared_ptr<std::function<void(void)>> callback);

    /**
     * @brief invokeCallbacks Invokes all callback functions in m_callbackFunctions
     */
    void invokeCallbacks();

private:
    std::mutex m_callbackFunctionsMutex; ///< Mutex that protects m_callbackFunction
    std::vector<std::shared_ptr<std::function<void(void)>>> m_callbackFunctions; ///< Holds list of shared pointers to callbacks
};

#endif // CALLBACKHANDLER_H