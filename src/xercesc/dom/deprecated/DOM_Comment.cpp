/*
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * $Id$
 */

#include "DOM_Comment.hpp"
#include "CommentImpl.hpp"

XERCES_CPP_NAMESPACE_BEGIN


DOM_Comment::DOM_Comment()
: DOM_CharacterData(null)
{
};


DOM_Comment::DOM_Comment(const DOM_Comment & other)
: DOM_CharacterData(other)
{
};


DOM_Comment::DOM_Comment(CommentImpl *impl) :
        DOM_CharacterData(impl)
{
};


DOM_Comment::~DOM_Comment()
{
};


DOM_Comment & DOM_Comment::operator = (const DOM_Comment & other)
{
     return (DOM_Comment &) DOM_CharacterData::operator = (other);
};

DOM_Comment & DOM_Comment::operator = (const DOM_NullPtr *other)
{
     return (DOM_Comment &) DOM_Node::operator = (other);
};


XERCES_CPP_NAMESPACE_END

