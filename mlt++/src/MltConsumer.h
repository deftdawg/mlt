/**
 * MltConsumer.h - MLT Wrapper
 * Copyright (C) 2004-2005 Charles Yates
 * Author: Charles Yates <charles.yates@pandora.be>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#ifndef _MLTPP_CONSUMER_H_
#define _MLTPP_CONSUMER_H_

#include <framework/mlt.h>

#include "MltService.h"

namespace Mlt
{
	class Service;

	class Consumer : public Service
	{
		private:
			bool destroy;
			mlt_consumer instance;
		public:
			Consumer( char *id, char *service = NULL );
			Consumer( Consumer &consumer );
			Consumer( mlt_consumer consumer );
			virtual ~Consumer( );
			virtual mlt_consumer get_consumer( );
			mlt_service get_service( );
			virtual int connect( Service &service );
			int start( );
			void purge( );
			int stop( );
			bool is_stopped( );
	};
}

#endif
