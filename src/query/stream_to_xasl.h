/*
 * Copyright (C) 2008 Search Solution Corporation. All rights reserved by Search Solution.
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 *
 */

#ifndef _STREAM_TO_XASL_H_
#define _STREAM_TO_XASL_H_

#if !defined (SERVER_MODE) && !defined (SA_MODE)
#error Belongs only to server or stand-alone modules.
#endif /* !defined (SERVER_MODE) && !defined (SA_MODE) */

#include "thread_compat.hpp"

// forward definitions
struct func_pred;
struct pred_expr_with_context;
struct xasl_node;
struct xasl_node_header;
struct xasl_unpack_info;

extern int stx_map_stream_to_xasl (THREAD_ENTRY * thread_p, xasl_node ** xasl_tree, bool use_xasl_clone,
				   char *xasl_stream, int xasl_stream_size, xasl_unpack_info ** xasl_unpack_info_ptr);
extern int stx_map_stream_to_filter_pred (THREAD_ENTRY * thread_p, pred_expr_with_context ** pred_expr_tree,
					  char *pred_stream, int pred_stream_size);
extern int stx_map_stream_to_func_pred (THREAD_ENTRY * thread_p, func_pred ** xasl, char *xasl_stream,
					int xasl_stream_size, xasl_unpack_info ** xasl_unpack_info_ptr);
extern int stx_map_stream_to_xasl_node_header (THREAD_ENTRY * thread_p, xasl_node_header * xasl_header_p,
					       char *xasl_stream);

#endif /* _STREAM_TO_XASL_H_ */
