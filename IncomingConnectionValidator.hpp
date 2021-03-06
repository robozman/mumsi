#pragma once

#include <boost/noncopyable.hpp>
#include <log4cpp/Category.hh>

#include <string>
#include <boost/regex.hpp>

namespace sip {
    class IncomingConnectionValidator : boost::noncopyable {
    public:
        IncomingConnectionValidator(std::string validUriExpression);

        bool validateUri(std::string uri);

    private:
        log4cpp::Category &logger;
        std::string validUriExpression;
        std::vector<boost::regex> uriRegexVec;
    };
}
