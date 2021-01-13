#ifndef MS_CHANNEL_UNIX_STREAM_SOCKET_HPP
#define MS_CHANNEL_UNIX_STREAM_SOCKET_HPP

#include "Channel/Request.hpp"

namespace Channel {
    class UnixStreamSocket : public ::UnixStreamSocket {
    public:
        class Listener {
        public:
            virtual void OnChannelRequest(Channel::UnixStreamSocket *channel, Channel::Request* request) = 0;
        };
    };
}

#endif