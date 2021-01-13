//
// Created by 陈辉 on 2021/1/12.
//

#ifndef MS_CHANNEL_REQUEST_HPP
#define MS_CHANNEL_REQUEST_HPP

namespace Channel {
    class UnixStreamSocket;

    class Request {
    public:
        enum class MethodId{
            WORKER_DUMP = 1,
        };
    };
}

#endif //RUNNING_REQUEST_HPP
