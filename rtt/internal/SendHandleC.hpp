#ifndef ORO_EXECUTION_SENDHANDLEC_HPP
#define ORO_EXECUTION_SENDHANDLEC_HPP

#include <string>
#include <boost/make_shared.hpp>
#include "DataSources.hpp"
#include "../Attribute.hpp"
#include "../interface/rtt-interface-fwd.hpp"
#include "../SendStatus.hpp"

namespace RTT
{ namespace internal {

    /**
     * A template-less SendHandle manager.
     */
    class RTT_API SendHandleC
    {
        /**
         * The 'd' pointer pattern.
         */
        class D;
        D* d;
        base::DataSourceBase::shared_ptr s;
    public:
        /**
         * The default constructor.
         * Make a copy from another SendHandleC object
         * in order to make it usable.
         */
        SendHandleC();

        /**
         * The constructor from a SendHandle data source.
         */
        SendHandleC( base::DataSourceBase::shared_ptr handle );

        /**
         * A SendHandleC is copyable by value.
         */
        SendHandleC(const SendHandleC& other);

        /**
         * A SendHandleC is assignable.
         */
        SendHandleC& operator=(const SendHandleC& other);

        ~SendHandleC();

        /**
         * Add a datasource argument to the SendHandle.
         * @param a A DataSource which contents are filled in in case
         * of collect() or collectIfDone()
         */
        SendHandleC& arg( base::DataSourceBase::shared_ptr a );

        /**
         * Add an argument by reference to the Method.
         * @param a A value of which the reference is used and re-read each time
         * the method is called. Thus if the contents of the source of \a a changes,
         * call() will use the new contents.
         */
        template< class ArgT >
        SendHandleC& arg( ArgT& a )
        {
            return this->arg(base::DataSourceBase::shared_ptr( boost::make_shared< ReferenceDataSource<ArgT> >( a ) ) );
        }

        /**
         * Collect the contained method.
         */
        SendStatus collect();

        /**
         * Collect the contained method.
         */
        SendStatus collectIfDone();

        /**
         * Returns true if this handle is ready for execution.
         */
        bool ready() const;

        /**
         * Get the contained data source for send handle.
         */
        base::DataSourceBase::shared_ptr getSendHandleDataSource();
    };
}}

#endif