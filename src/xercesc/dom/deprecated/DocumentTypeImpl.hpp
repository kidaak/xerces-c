#ifndef DocumentTypeImpl_HEADER_GUARD_
#define DocumentTypeImpl_HEADER_GUARD_

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

//
//  This file is part of the internal implementation of the C++ XML DOM.
//  It should NOT be included or used directly by application programs.
//
//  Applications should include the file <xercesc/dom/deprecated/DOM.hpp> for the entire
//  DOM API, or DOM_*.hpp for individual DOM classes, where the class
//  name is substituded for the *.
//



#include <xercesc/util/XercesDefs.hpp>
#include "ParentNode.hpp"

XERCES_CPP_NAMESPACE_BEGIN


class NamedNodeMapImpl;

class DEPRECATED_DOM_EXPORT DocumentTypeImpl: public ParentNode {
private:
    DOMString			name;
    NamedNodeMapImpl	*entities;
    NamedNodeMapImpl	*notations;
	NamedNodeMapImpl	*elements;
	DOMString			publicId;
    DOMString			systemId;
	DOMString			internalSubset;

    bool				intSubsetReading;

    virtual void        setPublicId(const DOMString& value);
    virtual void        setSystemId(const DOMString& value);
    virtual void        setInternalSubset(const DOMString &value);
    bool                isIntSubsetReading();

	friend class DOMParser;

public:
    DocumentTypeImpl(DocumentImpl *, const DOMString &);
    DocumentTypeImpl(DocumentImpl *,
                     const DOMString &qualifiedName,	//DOM Level 2
                     const DOMString &publicId, const DOMString &systemId);
    DocumentTypeImpl(const DocumentTypeImpl &other, bool deep=false);
    virtual ~DocumentTypeImpl();
    virtual bool isDocumentTypeImpl();

    virtual NodeImpl *         cloneNode(bool deep);
    virtual void setOwnerDocument(DocumentImpl *doc);
    virtual DOMString getNodeName();
    virtual short getNodeType();
    virtual NamedNodeMapImpl * getEntities();
    virtual DOMString          getName();
    virtual NamedNodeMapImpl * getNotations();
	virtual NamedNodeMapImpl * getElements();
    virtual void               setReadOnly(bool readOnly, bool deep);

    //Introduced in DOM Level 2

    virtual DOMString     getPublicId();
    virtual DOMString     getSystemId();
    virtual DOMString     getInternalSubset();
};

XERCES_CPP_NAMESPACE_END

#endif
